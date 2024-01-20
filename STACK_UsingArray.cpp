#include<iostream>
using namespace std;

int top = -1;
int stack[3];

bool isEmpty();
bool isFull(int n);
void push(int stack[], int n, int value);
int pop();
int topElement(int stack[]);
int size();

int main()
{
  push(stack,3,10);
  cout<<"Current size : "<<size()<<endl;
  push(stack,3,20);
  cout<<"Current size : "<<size()<<endl;
  push(stack,3,30);
  cout<<"Current size : "<<size()<<endl;
  push(stack,3,40);
  cout<<"\n";
  cout<<"Current top element : "<<topElement(stack);
  cout<<"\n\n";
  for(int i = 0 ; i < 3; i++){
    pop();
  }
  cout<<"Current size : "<<size()<<endl;
  pop();
  return 0;
}
bool isEmpty(){
  // if(top == -1){
  //   return true;
  // }
  // else{
  //   return false;
  // }
  return(top < 0);
}
bool isFull(int n){
  // if(top == n-1){
  //   return true;
  // }
  // else{
  //   return false;
  // }
  return (top == n-1);
}
void push(int stack[], int n, int value){
  if(isFull(n)){
    cout<<"Stack Overflow";
  }
  else{
    ++top;
    stack[top] = value;
  }
}

int pop(){
  if(isEmpty()){
    cout<<"Stack Underflow"<<endl;
  }
  else{
    int stackTop = stack[top];
    --top;
    return stackTop;
  }
}

int topElement(int stack[]){
  if(isEmpty()){
    cout<<"Stack underflow";
    exit(1);
  }
  return (stack[top]);
}
int size(){
  return (top + 1);
}


