#include<iostream>
using namespace std;

class node{
    public:
    int data ;
    node *link;

    node(int data){
        this -> data = data ;
        this -> link = NULL;
    }
};
void insertatcll(node *& tail, int element , int data){
   // empty list
   if(tail == NULL){
    node* newnode = new node(data);
    tail = newnode;
    newnode -> link = newnode;
   }
   else {
   // assuming element is present in linked list
   node *temp= tail;
   while (temp -> data != element){
    temp = temp -> link;
   }
   node* gate = new node(data);
   gate -> link = temp -> link;
   temp -> link = gate;
}
}

void print(node* tail){
    node * temp = tail;
    do{
        cout << tail -> data << " ";
        tail = tail->link;

    }while (tail != temp);
    cout << endl;
}

int main(){
    node*tail = NULL;
    insertatcll(tail,23,34);
    print(tail);

    insertatcll(tail,34,23);
    print(tail);

    insertatcll(tail,23,43);
    print(tail);


}