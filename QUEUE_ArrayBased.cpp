#include<iostream>
using namespace std;

const int max_size = 5;
int queue_size = 0;
int queue[max_size];
int front = -1;
int rear = -1;

void enqeue(int value){
  if(rear == max_size - 1){
    cout<<"Queue Over flow"<<endl;
  }
  else{
    if(front == -1){
      front = 0;
    }
    rear++;
    queue[rear] = value;
    queue_size++;
  }
}
void dequeue(){
  if(front == -1 || front > rear){
    cout<<"Queue Under flow";
    return;
  }
  else{
    cout<<"Element deleted from the queue is : "<<queue[front];
    front++;
    queue_size--;
  }
  cout<<endl;
}
void display(){
  if(front == -1){
    cout<<"Queue is empty";
  }
  else{
    cout<<"Queue elements : ";
    for(int i = front ; i <= rear ; i++){
      cout<<queue[i]<<' ';
    }
  }
  cout<<endl;
}
int main(){
  int choice;
  int value;
  do{
    cout<<"Menu"<<endl
        <<"1) To add value to queue"<<endl
        <<"2) To remove from queue"<<endl
        <<"3) To display"<<endl
        <<"4) To exit"<<endl
        <<"Enter your choice : ";
    cin>>choice;
    switch (choice)
    {
    case 1:
      cout<<"Enter the value : ";
      cin>>value;
      enqeue(value);
      break;
    case 2:
      dequeue();
      break;
    case 3:
      display();
      break;
    case 4:
      break;
    default:
      cout<<"Invalid input"<<endl;
      break;
    }
  }while(choice != 4);
  return 0;
}