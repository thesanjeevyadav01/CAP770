//Fiinding the Maximum Element in the linked List 

#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}   *first = NULL;

void Create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node();
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node();
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int Max(struct Node *p)
{
    int max = INT_MIN;

    while (p)
    {
        if (p->data > max)
         max = p->data;
        p = p->next;
    }
    return max;
}
int Min(struct Node *p)
{
    int min = INT_MAX;

    while (p)
    {
        if (p->data < min)
         min = p->data;
        p = p->next;
    }
    return min;
}

int RMax(struct Node *p)
{
    int x = 0;
    if (p == 0)
        return INT_MIN;
    x = RMax (p->next);
    if (x > p->data)
        return x;
    else
        return p->data;
}

int main()
{
    int A[] = { 8, 3, 7, 12 };
    Create(A, 4);
    // printf ("Max %d\n", Max (first));
    cout << "Maximum: " <<Max(first)<<endl;
    cout << "Minimum: " <<Min(first);
    return 0;
}


// 7508932680 ----- Girish sir