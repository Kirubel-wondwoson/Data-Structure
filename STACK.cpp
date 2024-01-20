#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int top = -1;
char stack[10];

bool isEmpty();
bool isFull(int n);
void push(char stack[], int n, char value);
void pushNum(int stack[], int n, int value);
void pop();
int topElement(int stack[]);
int sizeOfStack();

void reverse(string str);
bool checkPalidrome(string str);
void convertDecimalToBinary(int decimalNum);
int precedence(char ch);
void convertInfixToPostfix(string infixInput);
void postfixEvaluate(string postfixInput);

int main()
{
  int choice;
  string str, infixInput;
  int decimalNum;
  
  do{
    cout<<"1)Reversing"<<endl
        <<"2)Check Palindrome"<<endl
        <<"3)Conversion of decimal to binary"<<endl
        <<"4)Conversion of infix to postfix"<<endl
        <<"5)Postfix evaluation"<<endl
        <<"6)Exit"<<endl
        <<"Enter your choice : ";
    cin>>choice;
    switch(choice){
    case 1:
    reverse(str);
    break;
    case 2:
    checkPalidrome(str);
    break;
    case 3:
    convertDecimalToBinary(decimalNum);
    break;
    case 4:
    convertInfixToPostfix(infixInput);
    break;
    case 5:
    postfixEvaluate(postfixInput);
    break;
    case 6:
    break;
    default:
    cout<<"Invalid input..";
    break;
    }
  }while(choice != 6);
  return 0;
}

void reverse(string str){
  cout<<"Enter a string : ";
  cin>>str;
  int length = str.length();
  char *charCpy = new char[length + 1];
  strcpy(charCpy, str.c_str());

  char stackRev[length];
  for(int i = 0 ; i < length; i++){
    push(stackRev, length,charCpy[length-1-i]);
  }
  for(int i = 0 ; i < length ; i++){
    cout<<stackRev[i];
  }
  cout<<endl;
}
bool checkPalidrome(string str){
  cout<<"Enter a string : ";
  cin>>str;
  int length = str.length();
  char *charCpy = new char[length + 1];
  strcpy(charCpy, str.c_str());
  char stackRev[length];
  for(int i = 0 ; i < length; i++){
    push(stackRev, length,charCpy[length-1-i]);
  }
  if(stackRev == str){
    cout<<str<<" is palindrome"<<endl;
  }
  else if(stackRev != str){
    cout<<str<<" is not palindrome"<<endl;
  }
}
void convertDecimalToBinary(int decimalNum){
  int stackBinary[8];
  cout<<"Enter a decimal number : ";
  cin>>decimalNum;
  int remainder;
  int quotient;
  int i = 0;
  while(i < 8){
    remainder = quotient%2;
    pushNum(stackBinary, 8, remainder);
    quotient = decimalNum/2;
    i++;
  }
 
  for(int i = 0 ; i < 8; i++){
    cout<<stackBinary[i];
  }
  cout<<endl;
}
int precedence(char ch){
  if(ch == '^')
    return 3;
  else if(ch == '/' || ch == '*')
    return 2;
  else if(ch == '+' || ch == '-')
    return 1;
  else
    return -1;
}
void convertInfixToPostfix(string infixInput){
  cout<<"Enter infix expression : ";
  cin>>infixInput;

  int length = infixInput.length();
  char *infix = new char[length + 1]; 
  strcpy(infix, infixInput.c_str());

  char stackOperator[length + 1];
  char postfixOperand[length + 1];
  char postfix[length + 1];

  for(int i = 0 ; i < length + 1 ; i++){
    if(int(infix[i]) > 96 && int(infix[i]) < 123){
      postfixOperand[i] = infix[i];
      push(postfix[i], length + 1, postfixOperand[i]);
    }
    else if(infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^' || infix[i] == '(' || infix[i] == ')'){
        push(stackOperator[i], length + 1, infix[i]);
        for(int j = 0 ; j < length + 1 ; j++){
          if(precedence(stackOperator[j + 1]) > precedence(stackOperator[j])){
            push(postfix[i], length + 1 , stackOperator[j + 1]);
          }
        }
    }
  }
  for(int i = 0 ; i < length + 1 ; i++){
    cout<<postfix[i]<<' ';
  }
}
void postfixEvaluate(string postfixInput){

}

bool isEmpty(){
  return(top < 0);
}
bool isFull(int n){
  return (top == n-1);
}
void push(char stack[], int n, char value){
  if(isFull(n)){
    cout<<"Stack Overflow";
  }
  else{
    ++top;
    stack[top] = value;
  }
}
void pushNum(int stack[], int n, int value){
  if(isFull(n)){
    cout<<"Stack Overflow";
  }
  else{
    ++top;
    stack[top] = value;
  }
}

void pop(){
  if(isEmpty()){
    cout<<"Stack Underflow"<<endl;
  }
  else{
    --top;
  }
}

int topElement(int stack[]){
  if(isEmpty()){
    cout<<"Stack underflow";
    exit(1);
  }
  return (stack[top]);
}
int sizeOfStack(){
  return (top + 1);
}
