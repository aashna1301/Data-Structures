#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node {
      
    int data;
    struct  Node *next;
};

int isEmpty(struct Node* top)
{
    if (top == NULL)
        return 1;
    else    
        return 0;
   
}

int isFull(struct Node* top)
{
    // you are trying to find if there is any space left in the memory.
    struct Node* p = (struct Node*) malloc(sizeof(struct Node)); 
    if (p== NULL)
        return 1;
    else
        return 0;     
   
}

void stackTraversal(struct Node* top){

    while (top!=NULL){
        cout<< top->data<<'\n';
        top = top->next;
    }   
   
}
struct Node* push(struct Node* top, int a)
{
   if (isFull(top))
       cout<<"The stack is full";       

   else
   {
       struct Node * n =(struct Node*)malloc(sizeof(struct Node));
       n->data=a;
       n->next = top;
       top = n;
       return top;
   }
   return 0;
}

int pop(struct Node* top)
{
    if (isEmpty(top)){
        cout<<"The stack is Empty";
     }
    else
    {
        struct Node* n = top;
        top = top->next;
        int value = n ->data;
        free(n);
        return value;

    }
    return 0;

}

int main(){
    struct Node* top = NULL;
    top = push(top, 78);
    top = push(top,77);
    stackTraversal(top);
    int element = pop(top);
    cout<<"The popped element is : "<<element;
    return 0;


}

