#include<iostream>
using namespace std;

struct Queue{
  int data;
  int Queue *next
}
Queue *front = NULL;
Queue *rear = NULL;
Queue *temp;

void enqueue(){
  int value;
  cout<<"Insert the element in the queue : ";
  cin>>value;
  
}
void dequeue(){
}
void OrdiQueue(){
  
} 
void DequeQueue(){}
void PriorityQueue(){}
void DemergingQueue(){}
void MergingQueue(){}

int main(){
  int choice;
  int value;
  do{
    cout<<"Menu Menu"<<endl
        <<"1) Ordinary Queue"<<endl
        <<"2) Deque Queue"<<endl
        <<"3) Priority Queue"<<endl
        <<"4) Demerging Queue"<<endl
        <<"4) Merging Queue"<<endl
        <<"5) Exit"<<endl
        <<"Enter your choice : ";
    cin>>choice;
    switch (choice)
    {
    case 1:
      OrdiQueue();
      break;
    case 2:
      dequeue();
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    default:
      cout<<"Invalid input"<<endl;
      break;
    }
  }while(choice != 4);
  return 0;
}