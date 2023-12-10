#include<bits/stdc++.h>
using namespace std;
int main(){
  int num;
  int guess;
  num=rand()%50+1;

  cout<<"Guess the number in the range of (0-50): ";
  do{
    cin>>guess;
    if(guess>num)
      cout<<"Go lower than is number!!"<<endl;
    else if(guess<num)
      cout<<"Go Higher than is number!!"<<endl;
    else
      break;
  }while(1);
  cout<<"Congrats you got the number Correct!!";
}