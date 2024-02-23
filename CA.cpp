#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node (int data1){
        data = data1;
        next = nullptr;
    }


};
    Node* createLL(int n){
        cout<<"Enter the Element of Linked-List"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<n;i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
    }
    int print(Node* head){
        int count=0;
        while(head!=NULL){
            // cout<<head->data<<" ";
            count++;
            head = head->next;
        }
        
        cout<<endl<<"Frequency of LINKED LIST is "<<count;
    }

int main(){
    int n ;
    cout<<"Enter the size of the Linked_list"<<endl;
    cin>>n;
    Node* head = createLL(n);
    print(head);
    
}