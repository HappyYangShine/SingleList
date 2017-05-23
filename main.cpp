/*************************************************************************
    > File Name: main.cpp
    > Author: zhangyangyang
    > Mail: zhangyyhi@163.com 
    > Created Time: 2017年05月21日 星期日 19时36分35秒
 ************************************************************************/

#include <iostream>
#include "head.h"

using namespace std;

int main()
{
    int an_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    Node *head = CreateList(an_array, sizeof(an_array) / sizeof(an_array[0]));
    PrintValue(head);
    cout << ListLength(head) << endl;
//    head = DeleteNode(head, 9);
//    head = DeleteNode(head, 0);
//    cout << ListLength(head) << endl;
//    PrintValue(head);
//    DeleteNode(head, 100);
//    PrintValue(head);
//
//    head = InsertNode(head, 100);
//    PrintValue(head);

    head = InsertSortNode(head, -5);
    PrintValue(head);
    head = InsertSortNode(head, 20);
    PrintValue(head);
    head = InsertSortNode(head, -4);
    PrintValue(head);

    head = InsertionSortList(head);
    PrintValue(head);

    cout << "reverse list:" << endl;
    head = ReverseList(head);
    PrintValue(head);

    return 0;

}
