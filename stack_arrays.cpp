#include<iostream>
#include<stdlib.h>
using namespace std;

struct stack {
    int size;
    int top;
    int *arr; //pointer type array 
};

//ptr is pointer representing the structure 

int isFull (struct stack *ptr)
{
    if (ptr->top == (ptr->size-1))
        return 1;
    else
        return 0;    
}

int isEmpty ( struct stack *ptr){
    if (ptr->top == -1)
        return 1;
    else
        return 0;     
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
        cout <<"The stack is full. No more element can be added";
    else
        ptr->top++;
        ptr->arr[ptr->top] = val;    
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr)) {

        cout<<"The stack is underflow. No element to be popped";
        return -1;
    }
    else{
        int val = (ptr->arr[ptr->top]);
        ptr->top--;
        return val;
    }      
}

void printStack(struct stack *ptr){
    cout<<"The stack contains"<<'\n';
    for(int i=ptr->top;i>=0;i--){
       
        cout<<ptr->arr[i]<<'\n';
        
    }  
}



main()
{
    struct stack *s = (struct stack *) malloc(sizeof(struct stack)); 
    s->size = 80;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));
    cout<<"The stack has been created"<<'\n';

    push(s,56);
    cout<<"Element successfully pushed"<<'\n';
    push(s,79);
    push(s,57);
    printStack(s);
   
      
    
}