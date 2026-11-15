# C语言文件操作基础 (FILE)

## 一、 基本函数声明

在 C 语言中，文件操作主要依赖于 `FILE` 结构体和标准库 `<stdio.h>` 提供的函数：

*   **打开文件**：
    `FILE* fopen(const char * restrict path, const char * restrict mode);`
*   **关闭文件**：
    `int fclose(FILE *stream);`
*   **格式化读取**：
    `fscanf(FILE*, ...)`
*   **格式化写入**：
    `fprintf(FILE*, ...)`

## 二、 打开文件的标准代码模板

一个安全且标准的文件读写流程通常包含**打开、判断、操作、关闭**四个步骤：

```c
FILE* fp = fopen("file", "r");
if ( fp ) {          // 如果 fopen 成功，返回非空指针
    fscanf(fp, ...); // 执行读取操作
    fclose(fp);      // 操作完成后必须关闭文件
} else {
    ...              // 打开失败的处理逻辑（如打印错误信息）
}
