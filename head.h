/*************************************************************************
    > File Name: head.h
    > Author: zhangyangyang
    > Mail: zhangyyhi@163.com 
    > Created Time: 2017年05月21日 星期日 19时37分24秒
 ************************************************************************/

struct Node
{
    int value;
    Node *next;
};

Node *CreateList(int *an_array, int element_nums);

int ListLength(Node *head);

void PrintValue(Node *head);

Node *DeleteNode(Node *head, int value);

Node *InsertNode(Node *head, int value);

// 有序插入节点
Node *InsertSortNode(Node *head, int value);

// 插入排序
Node *InsertionSortList(Node *head);


// 翻转链表
Node *ReverseList(Node *head);
