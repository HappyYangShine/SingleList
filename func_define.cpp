/*************************************************************************
    > File Name: func_define.cpp
    > Author: zhangyangyang
    > Mail: zhangyyhi@163.com 
    > Created Time: 2017年05月21日 星期日 19时40分15秒
 ************************************************************************/

#include <iostream>
#include "head.h"

using namespace std;


Node *CreateList(int *an_array, int element_nums)
{
    Node *head = NULL;
    for (int i = 0; i < element_nums; ++i)
    {
        Node *new_node = new Node;
        new_node->value = an_array[i];
        new_node->next = NULL;
        Node *temp = head;
        head = new_node;
        head->next = temp;
    }
    return head;
}

int ListLength(Node *head)
{
    int n = 0;
    while (head != NULL)
    {
        ++n;
        head = head->next;
    }
    return n;
}

void PrintValue(Node *head)
{
    while (head != NULL)
    {
        cout << "value = " << head->value << endl;
        head = head->next;
    }
}

Node *DeleteNode(Node *head, int value)
{
    Node dummy;
    dummy.next = head;
    head = &dummy;
    while (head->next != NULL)
    {
        if (head->next->value == value)
        {
            Node *temp = head->next;
            head->next = head->next->next;
            delete temp;
        }
        else
        {
            head = head->next;
        }
    }
    return dummy.next;
}


// 头插法
Node *InsertNode(Node *head, int value)
{
    Node *new_node = new Node;
    new_node->value = value;
    new_node->next = NULL;
    Node *temp = head;
    head = new_node;
    head->next = temp;

    return head;
}


//有序插入
Node *InsertSortNode(Node *head, int value)
{
    Node dummy;
    dummy.next = head;
    head = &dummy;
    while (head->next != NULL && head->next->value >= value)
    {
        head = head->next;
    }
    Node *new_node = new Node;
    new_node->value = value;
    new_node->next = NULL;
    
    new_node->next = head->next;
    head->next = new_node;

    return dummy.next;
}


// 插入排序
Node *InsertionSortList(Node *head)
{
    if (NULL == head)
    {
        return head;
    }
    Node dummy;  // 哑节点
    Node *temp = NULL;
    while (head != NULL)
    {
        Node *temp = &dummy;
        Node *next = head->next;
        while (temp->next != NULL && temp->next->value < head->value)
        {
            temp = temp->next;
        }
        head->next = temp->next;
        temp->next = head;
        head = next;
    }
    return dummy.next;
}

// 翻转链表
Node *ReverseList(Node *head)
{
    Node *pre = NULL;
    while ( head != NULL)
    {
        Node *temp = head->next;
        head->next = pre;
        pre = head;
        head = temp;
    }
    return pre;
}

