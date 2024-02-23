#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

};

    int main(){
        Node* head;
        Node* one = NULL;
        Node* two = NULL;
        Node* three = NULL;

        one = new Node();
        two = new Node();
        three = new Node();

        one->value = 1;
        two->value = 2;
        three->value = 3;

        one->next = two;
        two->next = three;
        three->next = NULL;

        head = one;
        //Print the LinkedList
        // while(head!=NULL){
        //     cout<<head->value;
        //     head = head->next;
        // }

        // Inserting Element in LinkedList at Beginning

        Node* newNode = NULL;

        newNode = new Node();

        newNode->value = 4;
        newNode->next = head;
        head = newNode;

        while(head!=NULL){
            cout<<head->value;
            head = head->next;
        }


    }