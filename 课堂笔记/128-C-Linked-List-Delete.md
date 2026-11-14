# 【翁恺C语言】第128集：14.2.5 链表的删除

## 一、删除结点的难点
单向链表**无法直接找到前一个结点**。如果直接 `free(p)`，前一个结点的 `next` 就会变成野指针。

## 二、删除操作的核心逻辑
必须维护一个**前驱指针（`prev`）**，或者使用“指针的指针”技巧。

```c
void delete_node(Node **head, int target) {
    Node *p = *head;
    Node *prev = NULL; // 记录前一个结点

    while (p != NULL) {
        if (p->value == target) {
            if (prev == NULL) {
                // 删除的是头结点
                *head = p->next;
            } else {
                // 跨过当前结点
                prev->next = p->next;
            }
            free(p); // 释放内存
            return;
        }
        prev = p;      // 没找到，prev跟上来
        p = p->next;   // p继续往后走
    }
}
```

| 易错点 | 正确做法 |
| :--- | :--- |
| **删除头结点** | 必须单独处理，直接让 `head` 指向下一个结点 |
| **忘记 `free`** | 指针跳过了，但内存还在，会导致内存泄漏 |
