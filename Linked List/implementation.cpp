#include<iostream> 
using namespace std;

// struct node{
//     int data;
//     //* - because next is a pointer
//     //node = because the pointer is pointing to a memory address having datatype node
//     node* next;
//     node(int x){
//         data=x;
//         next=nullptr;
//     }
// }

class node{
    public:
    int data;
    node* next;
    node(int x){
        data=x;
        node=nullptr;
    }
}

node* arrayToLL(vector<int> &arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void traverse(node* head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
    node* head=new node(10);
    //if we write node head=node(10) 
    //it would create an object and we can access elements head.data and head.next
    //we cannot use the above syntax because it allocates the memory for the node in the stack rather than in heap memory which becomes out of the scope and cannot be accessed
    head->next=new node(20);
    head->next->next=new node(30);
    traverse(head);
    return 0;
}