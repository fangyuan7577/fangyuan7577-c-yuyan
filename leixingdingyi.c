typedef int Length;// Length就等价于int类型
typedef char* Strings[10];
// Strings 是10个字符串的数组的类型
typedef struct node {
	int data;
	struct node *next;
} aNode;
typedef struct node aNode; 
// 这样用aNode 就可以代替struct node