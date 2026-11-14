# C语言二进制文件操作 (翁恺第116集笔记)

## 一、核心认知：什么是“二进制文件”

| 对比维度 | 文本文件 | 二进制文件 |
| :--- | :--- | :--- |
| **本质** | 所有文件最终都是二进制的 | 需要专门程序读写的二进制数据 |
| **输入输出方式** | 经过格式化/转码，人类可读 | 直接读写内存中的字节，无转码 |
| **优点** | 方便人类阅读，跨平台 | 程序读写速度快，效率高 |
| **缺点** | 程序 I/O 需格式化，开销大 | 人类读写困难，**不跨平台**（int大小、大小端问题） |
| **典型场景** | Unix 配置、日志 | Windows 注册表、媒体文件、结构体数据存储 |

> 二进制文件的核心操作对象是 **“数据块”** ，最常见的是**结构体变量**或**结构体数组**。

## 二、核心读写函数：`fread` 与 `fwrite`

| 函数 | 原型 | 返回值 | 关键说明 |
| :--- | :--- | :--- | :--- |
| **`fwrite`** | `size_t fwrite(const void *restrict ptr, size_t size, size_t nitems, FILE *restrict stream);` | 成功写入的**数据项个数**（即 `nitems`） | 将内存中 `ptr` 指向的 `nitems` 个、每个 `size` 字节的数据块写入文件 |
| **`fread`** | `size_t fread(void *restrict ptr, size_t size, size_t nitems, FILE *restrict stream);` | 成功读入的**数据项个数** | 从文件中读取 `nitems` 个、每个 `size` 字节的数据块，存放到 `ptr` 指向的内存中 |

**⚠️ 注意**：`FILE *` 指针是**最后一个参数**，不要和 `fscanf`/`fprintf` 的参数顺序混淆。

### 参数语义拆解（为什么是 `nitems` 而不是总字节数？）

| 参数 | 含义 | 典型用法 |
| :--- | :--- | :--- |
| `ptr` | 数据在内存中的**首地址** | `&stu`（单个结构体）或 `stuArray`（结构体数组） |
| `size` | **单个数据项**的字节数 | `sizeof(struct Student)` |
| `nitems` | 要读/写的**数据项个数** | `1`（读一个结构体）或 `n`（读一个数组） |

翁恺老师特别强调 `nitems` 的存在意义：**二进制读写通常是对“结构变量”进行操作**，`nitems` 就是用来指明“这次读写几个结构变量”。

## 三、文件定位函数：`ftell`、`fseek`、`rewind`

| 函数 | 原型/用法 | 作用 |
| :--- | :--- | :--- |
| **`ftell`** | `long ftell(FILE *stream);` | 返回当前文件位置指针的**字节偏移量**（相对于文件开头） |
| **`fseek`** | `int fseek(FILE *stream, long offset, int whence);` | 将文件位置指针移动到指定位置，实现**随机读写** |
| **`rewind`** | `void rewind(FILE *stream);` | 将文件位置指针**复位到文件开头**（等价于 `fseek(fp, 0, SEEK_SET)`） |

### `fseek` 的第三个参数 `whence`（基准位置）

| 宏常量 | 含义 |
| :--- | :--- |
| `SEEK_SET` | 从**文件开头**开始计算偏移 |
| `SEEK_CUR` | 从**当前位置**开始计算偏移 |
| `SEEK_END` | 从**文件末尾**开始计算偏移 |

## 四、二进制模式打开文件

| 模式 | 含义 |
| :--- | :--- |
| `rb` | 以**只读**方式打开二进制文件（文件必须存在） |
| `wb` | 以**只写**方式打开或新建二进制文件，存在则清空 |
| `ab` | 以**追加**方式打开二进制文件，从文件末尾开始写 |
| `rb+` / `wb+` / `ab+` | 以**读写**方式打开二进制文件，对应上述三种行为 |

## 五、易错点与关键提醒

| 易错点 | 正确做法 |
| :--- | :--- |
| 返回值不是“字节数” | `fread`/`fwrite` 返回的是**成功操作的数据项个数**（`nitems`），不是字节数 |
| 忘记检查返回值 | 应判断返回值是否等于期望的 `nitems`，以确认读写是否完整 |
| 跨平台不兼容 | 二进制文件**不跨平台**：`int` 大小可能不同，且存在**大小端**问题 |
| `fseek` 偏移量单位 | `offset` 的单位是**字节**，不是“数据项个数” |

## 六、完整代码模式（结构体读写）

```c
#include <stdio.h>

struct Student {
    char name[20];
    int age;
};

int main() {
    FILE *fp;
    struct Student stu = {"Alice", 20};
    struct Student readStu;

    /* 写入一个结构体到二进制文件 */
    fp = fopen("data.bin", "wb");
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }
    fwrite(&stu, sizeof(struct Student), 1, fp);
    fclose(fp);

    /* 从二进制文件读取一个结构体 */
    fp = fopen("data.bin", "rb");
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }
    fread(&readStu, sizeof(struct Student), 1, fp);
    fclose(fp);

    printf("Read: %s, %d\n", readStu.name, readStu.age);
    return 0;
}
