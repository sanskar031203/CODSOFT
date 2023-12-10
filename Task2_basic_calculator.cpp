#include<bits/stdc++.h>
using namespace std;
int main(){
  float a,b;
  float ans;
  cout<<"Enter First number: ";
  cin>>a;
  cout<<"Enter Second number: ";
  cin>>b;
  int cc;
  cout<<"Enter Choice Number:\n(1)Addition\n(2)Subtraction\n(3)Multiplication\n(4)Division\nEnter Choice Number: ";
  cin>>cc;
  cout<<"ANSWER : ";
  switch(cc){
    case 1:
      cout<<a+b;
      break;
    case 2:
      cout<<a-b;
      break;
    case 3:
      cout<<a*b;
      break;
    case 4:
      cout<<a/b;
      break;
    default:
      cout<<"INVALID CHOICE!!";
  }
}