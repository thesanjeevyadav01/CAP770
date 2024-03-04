#include<bits/stdc++.h>
# define SIZE 10
using namespace std;
int arr[SIZE];
int front=-1,rear =-1;
void enQueue(int value){
    if(rear == SIZE-1) {cout<<"QUEUE is Full!! Unable to Insert"<<endl;}
    if(front==-1 && rear==-1){
        front=rear=0;
    }
    else{
        rear++;
    }
        arr[rear]=value;
}

//Deletion of Queue i.e ... .... .. DEQUEUE
void deQueue(){
    cout<<"Deleted element :"<<arr[front]<<endl;
                    front++;
}

void display(){
    cout<<"The Element in the QUEUE is :"<<endl;
    for(int i = front;i<=rear;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    
    int value,choice;
    while(1){
        cout<<"****MENU******"<<endl;
        cout<<"1.ENQUEUE"<<endl<<"2.DEQUEUE"<<endl<<"3.DISPLAY"<<endl<<"4.EXIT"<<endl;
        cout<<"Enter the Choice:"<<endl;
        cin>>choice;
        switch(choice){
            case 1: cout<<"Enter the Element to QUEUE"<<endl;
                    cin>>value;
                    enQueue(value);
                    break;
            case 2: deQueue();
                    break;
            case 3: display();
                    break;
            case 4:exit(0);
            default:cout<<"Enter the correct value"<<endl;
        }
    }


}

