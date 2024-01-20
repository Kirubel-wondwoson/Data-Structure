#include<iostream>
#include<ctype.h>

using namespace std;

struct student{
  string name;
  int age;
  string dept;
  student *next;
  student *prev;
};

//void accept(student*& head, int nodes, string name, int age, string dept);

// Functions for SLL
void SLL_insert_beg(student**, string, int , string);
void SLL_insert_end(student**,string,int, string);
void SLL_insert_after_givenNode(student*&, string, string, int, string);
void SLL_delete_1st_node(student*&);
void SLL_delete_last_node(student*&);
void SLL_delete_after_givenNode(student*&);
void SLL_display_reverse(student*&);
void SLL_searchElement(student*& head);

// Functions for DLL
void DLL_insert_beg(student*& head, string name, int age, string dept);
void DLL_insert_after_given_node(student*& head, int index,  string name, int age, string dept);
void DLL_insert_after_given_node2(student*& head, string inputName, string name, int age, string dept);
void DLL_insert_end(student*& head, string name, int age, string dept);
void DLL_delete_lstNode(student*& head);
void DLL_delete_givenNode(student*& head, string inputName);
void DLL_delete_lastNode(student*& head);
void DLL_searchNode(student*& head);

// Functions for CLL
void CLL_insert_beg(student*& head, string name, int age, string dept);
void CLL_insert_after_givenNode(student*& head, string name, int age, string dept);
void CLL_insert_end(student*& head, string name, int age, string dept);
void CLL_delete_1stNode(student*& head, string name, int age, string dept);
void CLL_delete_givenNode(student*& head, string name, int age, string dept);
void CLL_delete_lastNode(student*& head, string name, int age, string dept);

// Display functions
void display_forward(student*& head);
void display_reverse(student*& head);

int main(){
  student *head_SLL = NULL;
  student *end_SLL = NULL;

  student *head_DLL = NULL;
  student *end_DLL= NULL;

  student *head_CLL = NULL;
  student *end_CLL = NULL;

  char menu;
  int choice;
  string name, dept, inputName;
  int age, index;
  do{
    cout<<"\nMain Menu\n"
        <<"A)Single Linked List\n"
        <<"B)Double Linked List\n"
        <<"C)Circular Linked List\n"
        <<"Enter your choice : ";
    cin>>menu;
    menu = toupper(menu);
      switch(menu){
        case 'A':
        do{
          cout << "\nSingly Linked List Menu\n"
                << "1) Insert at the beginning\n"
                << "2) Insert at the end\n"
                << "3) Insert after a given node\n"
                << "4) Delete the 1st node\n"
                << "5) Delete the last node\n"
                << "6) Delete the middle node\n"
                << "7) Display from 1st to last\n"
                << "8) Display from last to 1st\n"
                << "9) Search an element\n"
                << "0) Return to the main menu\n"
                << "Enter your choice: ";
          cin >> choice;
          switch(choice){
            case 1:
            cout<<"Name : ";
            cin>>name;
            cout<<"Age : ";
            cin>>age;
            cout<<"Department : ";
            cin>>dept;
            SLL_insert_beg(&head_SLL, name, age, dept);
            display_forward(head_SLL);
            break;
            case 2:
            cout<<"Name : ";
            cin>>name;
            cout<<"Age : ";
            cin>>age;
            cout<<"Department : ";
            cin>>dept;
            SLL_insert_end(&head_SLL, name, age, dept);
            display_forward(head_SLL);
            break;
            case 3:
            cout<<"Enter the name of the student before : ";
            cin>>inputName;
            cout<<"Enter the information of the new student"<<endl;
            cout<<"Name : ";
            cin>>name;
            cout<<"Age : ";
            cin>>age;
            cout<<"Department : ";
            cin>>dept;
            SLL_insert_after_givenNode(head_SLL, inputName, name, age, dept);
            display_forward(head_SLL);
            case 4:
            SLL_delete_1st_node(head_SLL);
            display_forward(head_SLL);
            break;
            case 5:
            break;
            case 6:
            break;
            case 7:
            break;
            case 8:
            break;
            case 9:
            break;
            case 0:
            break;
            default:
            cout<<"Invalid input..";
            break;
          }
        }while(choice != 0);
        break;
        case 'B':
        do{
          cout << "\nDoubly Linked List Menu\n"
                << "1) Insert at the beginning\n"
                << "2) Insert at after a given node\n"
                << "3) Insert at the end\n"
                << "4) Delete the 1st node\n"
                << "5) Delete a given node\n"
                << "6) Delete the last node\n"
                << "7) Display from 1st to last\n"
                << "8) Display from last to 1st\n"
                << "9) Search an element\n"
                << "0) Return to the main menu\n"
                << "Enter your choice: ";
          cin >> choice; 

          switch(choice){
            case 1:
            cout<<"Name : ";
            cin>>name;
            cout<<"Age : ";
            cin>>age;
            cout<<"Department : ";
            cin>>dept;
            DLL_insert_beg(head_DLL,name,age,dept);
            display_forward(head_DLL);
            break;
            case 2:
            do{
              cout<<"1)In roll number\n";
              cout<<"2)In name\n";
              cout<<"3)Return to Double Linked List menu\n";
              cout<<"Enter your choice : ";
              cin>>choice;
              switch(choice){
                case 1:
                cout<<"Enter the roll number of the student before : ";
                cin>>index;
                cout<<"Enter the information of the new student\n";
                cout<<"Name : ";
                cin>>name;
                cout<<"Age : ";
                cin>>age;
                cout<<"Department : ";
                cin>>dept;
                DLL_insert_after_given_node(head_DLL,index, name,age,dept);
                display_forward(head_DLL);
                break;
                case 2:
                cout<<"Enter the name of the student before : ";
                cin>>inputName;
                cout<<"Enter the information of the new student\n";
                cout<<"Name : ";
                cin>>name;
                cout<<"Age : ";
                cin>>age;
                cout<<"Department : ";
                cin>>dept;
                DLL_insert_after_given_node2(head_DLL,inputName,name,age,dept);
                display_forward(head_DLL);
                break;
                case 3:
                break;
                default:
                cout<<"Invalid input..";
                break;
              }
            }while(choice != 3);
            break;
            case 3:
            cout<<"Name : ";
            cin>>name;
            cout<<"Age : ";
            cin>>age;
            cout<<"Department : ";
            cin>>dept;
            DLL_insert_end(head_DLL,name,age,dept);
            display_forward(head_DLL);
            break;
            case 4:
            DLL_delete_lstNode(head_DLL);
            display_forward(head_DLL);
            break;
            case 5:
            cout<<"Enter the name of the student to be deleted : ";
            cin>>inputName;
            DLL_delete_givenNode(head_DLL, inputName);
            display_forward(head_DLL);
            break;
            case 6:
            DLL_delete_lastNode(head_DLL);
            display_forward(head_DLL);
            break;
            case 7:
            display_forward(head_DLL);
            break;
            case 8:
            display_reverse(head_DLL);
            break;
            case 9:
            DLL_searchNode(head_DLL);
            break;
            case 0:
            break;
            default:
            cout<<"Invalid input..."<<endl;
            break;
          }
        }while(choice != 0); 
        break;
        case 'C':
        do{
          cout << "\nCircular Linked List Menu\n"
                << "1) Insert at the beginning\n"
                << "2) Insert at after a given node\n"
                << "3) Insert at the end\n"
                << "4) Delete the 1st node\n"
                << "5) Delete a given node\n"
                << "6) Delete the last node\n"
                << "7) Display from 1st to last\n"
                << "8) Display from last to 1st\n"
                << "9) Search an element\n"
                << "0) Return to the main menu\n"
                << "Enter your choice: ";
          cin >> choice;
          switch(choice){
            case 1:
            cout<<"Name : ";
            cin>>name;
            cout<<"Age : ";
            cin>>age;
            cout<<"Department : ";
            cin>>dept;
            CLL_insert_beg(head_CLL, name, age, dept);
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            break;
            case 5:
            break;
            case 6:
            break;
            case 7:
            break;
            case 8:
            break;
            case 9:
            break;
            case 0:
            break;
            default:
            cout<<"Invalid input...";
            break;
          } 
        }while(choice != 0);
        break;
        case 'E':
        break;
        default:
        cout<<"Invalid input..";
        break;
      }
  }while(menu != 'E');
  return 0;
}
// Functions for SLL
void SLL_insert_beg(student** head, string name, int age, string dept){
  student* newNode = new student();
  newNode->name = name;
  newNode->age = age;
  newNode->dept = dept;
  if((*head) == NULL){
    newNode->next = NULL;
  }
  else{
    newNode->next = (*head);
  }
  *head = newNode;
}
void SLL_insert_end(student** head, string name, int age, string dept){
  student* newNode = new student();
  newNode->name = name;
  newNode->age = age;
  newNode->dept = dept;
  if(*head == NULL){
    (*head) = newNode;
  }
  else{
    student* temp = (*head);
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->next = newNode;
  }
}
void SLL_insert_after_givenNode(student*& head, string inputName, string name, int age, string dept){
  student* newNode = new student();
  newNode->name = name;
  newNode->age = age;
  newNode->dept = dept;
  student* temp = head;
  while(temp != NULL){
    if(inputName == temp->name){
      newNode->next = temp->next;
      temp->next = newNode;
      break;
    }
    temp = temp->next;
  }
}
void SLL_delete_1st_node(student*& head){
  student* temp = head;
    head = head->next;
    delete temp;
}
// Functions for DLL
void DLL_insert_beg(student*& head, string name, int age, string dept){
    student* newNode = new student();

    newNode->name = name;
    newNode->age = age;
    newNode->dept = dept;
    newNode->prev = NULL;
    if(head == NULL){
        head = newNode;
    }else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;  //if you don’t include head = newNode;, the head pointer will still point to the old first node, not the new one you just inserted. So, the line head = newNode; is crucial because it updates the head pointer to point to the new node, which is now the first node in the list. Without this line, the head pointer wouldn’t be updated, and the new node wouldn’t be recognized as part of the list when you traverse it starting from head.
    }
}
  //3 Insert after a given node
void DLL_insert_after_given_node(student*& head, int index, string name, int age, string dept){
    student* newNode = new student();
    student* givenNode = new student();
    newNode->name = name;
    newNode->age = age;
    newNode->dept = dept;
    newNode->prev = NULL;
    newNode->next = NULL;
    student* current = head;
    int i = 0;
    while(current != NULL){
      if(i == index-1){
        newNode->next = current->next;
        current->next = newNode;
        newNode->prev = current;

        if(newNode->next != NULL){
            newNode->next->prev = newNode;
        }
        break;
      }
      current = current->next;
      i++;
    }
}
void DLL_insert_after_given_node2(student*& head, string inputName, string name, int age, string dept){
  student* newNode = new student();
  newNode->name = name;
  newNode->age = age;
  newNode->dept = dept;
  newNode->prev = NULL;
  newNode->next = NULL;
  student* current = head;
  while(current != NULL){
    if(current->name == inputName){
      newNode->next = current->next;
      current->next = newNode;
      newNode->prev = current;
      if(newNode->next ){
        newNode->next->prev = newNode;
      }
      break;
    }
    current = current->next;
  }
}
void DLL_insert_end(student*& head, string name, int age, string dept){
    student* newNode = new student();
    newNode->name = name;
    newNode->age = age;
    newNode->dept = dept;

    newNode->next = NULL;
    if(head == NULL){
        newNode->prev = NULL;
    }
    student* end = head;
    while(end->next != NULL){
        end = end->next;
    }
    end->next = newNode;
    newNode->prev = end;
}
void DLL_delete_lstNode(student*& head){
  head->next->prev = NULL;
  head = head->next;
  cout<<"Deleted Succesfully.."<<endl;
}
void DLL_delete_givenNode(student*& head, string inputName){
  student* current = head;
  while(current != NULL){
    if(inputName == current->name){
      if(current->prev == NULL){
        current->next->prev = NULL;
        head = head->next;
      }
      else if(current->next == NULL){
        current->prev->next = NULL;
      }
      else{
        current->prev->next = current->next;
        current->next->prev = current->prev;
      }
      delete current;
      cout<<"Deleted Sucessfully.."<<endl;
      break;
    }
    current = current->next;
  }
}
void DLL_delete_lastNode(student*& head){
  student* end = head;
  while(end->next != NULL){
    end = end->next;
  }
  end->next = NULL;
  end->prev->next = NULL;
  delete end;
  cout<<"Deleted Sucessfully.."<<endl;
}
void DLL_searchNode(student*& head){

}
void display_forward(student*& head){
  student* temp = head;
    while(temp != NULL){
      cout<<temp->name<<' '<<temp->age<<' '<<temp->dept<<endl;
      temp = temp->next;
  }
}
void display_reverse(student*& head){
  student* end = head;
  while(end->next != NULL){
    end = end->next;
  }
  while(end->prev = NULL){
    cout<<end->name<<' '<<end->age<<' '<<end->dept<<endl;
    end = end->prev;
  }
}

// CLL
void CLL_insert_beg(student*& head, string name, int age, string dept){
  student* newNode;
  name = newNode->name;
  age = newNode->age;
  dept = newNode->dept;

  newNode->next = head;
  head = newNode;
  student* temp = head;
  while(temp->next != head->next){
    temp = temp->next;
  }
  temp->next = head;
}
void CLL_insert_after_givenNode(student*& head, string name, int age, string dept){
  student* newNode;
  name = newNode->name;
  age = newNode->age;
  dept = newNode->dept;
  if(head != NULL){
    student* temp = head;
    while(temp->next != head->next){
      if(temp->name == name){
        temp->prev->next = newNode;
        newNode->next = temp->next;
      }
      temp = temp->next;
    }
  }
}
void CLL_insert_end(student*& head, string name, int age, string dept){
  student* newNode;
  name = newNode->name;
  age = newNode->age;
  dept = newNode->dept;
  if(head == NULL){
    head = newNode;
  }
  else{
    student* temp = head;
    while(temp->next == head->next){
      temp = temp->next;
    }
  }
}