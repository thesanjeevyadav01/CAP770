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
        Node* ptr = one->next;
        while(head!=NULL){
            if(head<ptr){

            }
            cout<<head->value;
            head = head->next;
        }


    }