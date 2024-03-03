#include<bits/stdc++.h>
# define SIZE 10
using namespace std;
int arr[SIZE];
int top =-1;

// INSERTING VALUE IN STACK
void push(int value){
    if(top == SIZE-1) cout<<"Stack is Full!! , Unable to insert element"<<endl;
    else{
        top++;
        arr[top]= value;
        cout<<"Insertion is Done!!"<<endl;
    }
}

// DELETING THE VALUE IN STACK
void pop(){
    if(top==-1)cout<<"Stack is Empty!!! Pop is Unable to perform"<<endl;
    else{
        cout<<arr[top]<<" is deleted"<<endl;
        top--;
    }
}
// DISPLAYING THE VALUE IN STACK
void display(){
    if(top==-1)cout<<"Stack is Empty!!! Please first insert the value!!"<<endl;
    else{
        cout<<"Element in the stack is: "<<endl;
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<endl;
        }
    }
}
void isEmpty(){
    if(top == -1)cout<<"YES!! -- STACK IS EMPTY"<<endl;
    else cout<<"NO !! -- Stack has Element"<<endl;
}
void isFull(){
    if(top == SIZE-1)cout<<"YES!! -- STACK IS Full"<<endl;
    else cout<<"NO !! -- Stack has Space"<<endl;
}

int main(){
    int value, choice;
    while(1){
        cout<<"********MENU*********"<<endl;
        cout<<"1.PUSH"<<endl<<"2.POP"<<endl<<"3.DISPLAY"<<endl<<"4.isEmpty"<<endl<<"5.isFull"<<endl<<"6.EXIT"<<endl;
        cout<<"Enter the Choice: "<<endl;
        cin>>choice;

        switch(choice){
            case 1: cout<<"Enter the Element to be inserted stack"<<endl;
                    cin>>value;
                    push(value);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                break;
            case 4: isEmpty();
                    break;
            case 5: isFull();
                    break;
            case 6 : exit(0);
            default: cout<<"Please Select Correct Option!!!!"<<endl<<endl;
        }
    }
    

}