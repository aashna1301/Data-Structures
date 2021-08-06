#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void listTraversal (struct Node * n){
    while(n != NULL){
    cout <<"The element is: "<< n ->data <<'\n';
    n = n->next;
}
}
struct Node * insertBegin (struct Node *n,int value)// yaha head liya and will return new head
 {

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node)); // memory allocation
    newNode ->data = value;
    newNode ->next = n;
    
    return newNode;

}

int main(){

    //Allocation of memory for your nodes , dynamic memory allocation
    struct Node* head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second =  (struct Node *)malloc(sizeof(struct Node));
    struct Node* third = (struct Node *)malloc(sizeof(struct Node));

    //Declaration of Nodes.
    head ->data= 7;
    head->next = second;

    second->data = 8;
    second->next= third;

    third->data= 9;
    third->next= NULL;

    
    head = insertBegin(head , 10);
  
    listTraversal(head);


    return 0;


}


