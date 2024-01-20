#include<iostream>
using namespace std;

struct stackNode{
  int data;
  struct stackNode* link;
};
struct stackNode* top;

void push(int data);
int peek();
void pop();
int main()
{
  return 0;
}
void push(int data){
  struct stackNode* temp = new stackNode();
  if(!temp){
    cout<<"Stack Overflow";
    exit(1);
  }
  temp->data = data;
  temp->link = top;
  top = temp;
}
int isEmpty(){
  return top == NULL;
}
int peek(){
  if(!isEmpty()){
    return top->data;
  }
  else{
    exit(1);
  }
}
void pop(){
  struct stackNode* temp;
  if(top == NULL){
    cout<<"Stack Underflow"<<endl;
    exit(1);
  }
  else{
    temp = top;
    top = top->link;
    temp->link = NULL;
    free(temp);
  }
}



