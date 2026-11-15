# 【翁恺C语言】第127集：14.2.4 链表的搜索

## 一、遍历链表
必须从头指针 `head` 开始，顺着 `next` 一个个往下找，直到找到目标或到达尾部（`NULL`）。

## 二、代码实现
```c
Node* find(Node *head, int target) {
    Node *p = head;
    while (p != NULL) { // 或者简写为 while(p)
        if (p->value == target) {
            return p;   // 找到了，返回结点指针
        }
        p = p->next;    // 移动到下一个
    }
    return NULL;        // 遍历完了没找到
}
```

| 要点 | 说明 |
| :--- | :--- |
| **时间复杂度** | O(n)，必须从头看起 |
| **返回值** | 找到返回结点指针，未找到返回 `NULL`，方便调用者判断 |
