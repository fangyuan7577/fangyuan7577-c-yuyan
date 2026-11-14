# 【翁恺C语言】第126集：14.2.3 链表的函数

## 一、为什么需要函数封装？
> 将链表的操作（添加、遍历、删除）封装成函数，使代码更清晰。

## 二、核心陷阱：指针的指针 (`**`)
如果我们想写一个往链表末尾添加结点的函数：

```c
void add(Node *head, int value); // 错误示范
```
| 为什么错？ | 因为 `head` 是按值传递的，函数内修改 `head` 不会影响外面的 `head`。 |
| :--- | :--- |
| **正确做法** | 传 `Node **head`（指针的指针），或者将 `head` 包在一个 `List` 结构体里传结构体指针。 |

```c
void add(Node **head, int value) {
    Node *p = (Node*)malloc(sizeof(Node));
    p->value = value;
    p->next = NULL;
    
    if (*head == NULL) {
        *head = p; // 修改外部的 head
    } else {
        Node *last = *head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = p;
    }
}
```
