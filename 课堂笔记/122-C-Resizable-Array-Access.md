# 【翁恺C语言】第122集：14.1.2 可变数组的数据访问

## 一、核心接口函数
| 函数名 | 作用 | 设计细节 |
| :--- | :--- | :--- |
| `Array array_create(int init_size)` | 创建数组 | 返回结构体本身，**不返回指针**（避免局部变量地址失效） |
| `void array_free(Array *a)` | 释放内存 | `free(a->array)`，并将 `a->size = 0`，防野指针 |
| `int array_size(const Array *a)` | 获取容量 | 不直接暴露 `a.size`，体现**封装**思想 |
| `int* array_at(Array *a, int index)` | 访问元素 | **返回指针**，可读可写：`*array_at(&a, 0) = 10` |

## 二、关键陷阱
| 陷阱 | 正确做法 |
| :--- | :--- |
| 直接暴露 `a.size` | 使用 `array_size()` 函数封装，方便日后修改内部实现 |
| `array_at` 返回 `int` 值 | 返回 `int*` 指针，才能支持 `scanf` 或赋值操作 |
