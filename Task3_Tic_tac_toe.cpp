#include<bits/stdc++.h>
using namespace std;
vector<char>B(10,' ');
bool checkW(char sign){
  if(B[1]==sign && B[2]==sign && B[3]==sign )
	  return true;
  if(B[1]==sign && B[4]==sign && B[7]==sign )
    return true;
  if(B[1]==sign && B[5]==sign && B[9]==sign )
    return true;
  if(B[2]==sign && B[5]==sign && B[8]==sign )
    return true;
  if(B[3]==sign && B[6]==sign && B[9]==sign )
    return true;
  if(B[3]==sign && B[5]==sign && B[7]==sign )
    return true;
  if(B[4]==sign && B[5]==sign && B[6]==sign )
    return true;
  if(B[7]==sign && B[8]==sign && B[9]==sign)
    return true;
  return false;
}
bool checkF(){
  for(int i=1;i<10;i++)
    if(B[i]==' ')
      return false;
  return true;
}
void restart(){
  for(int i=1;i<10;i++)
    B[i]=' ';
    
}
void Print(){
  cout << "\n\n\n"<<"    "<<B[1]<<" | "<<B[2]<<" | "<<B[3]<<endl<< "   ---|---|---" << endl;
	cout<<"    "<<B[4]<<" | "<<B[5]<<" | "<<B[6]<<endl<< "   ---|---|---" << endl;
	cout<<"    "<<B[7]<<" | "<<B[8]<<" | "<<B[9]<<endl;
}
int main(){
  int win_p1=0,win_p2=0;
  int play_again=1;
  int s;
  while(play_again){
    cout<<"Player 1 has X symbol\nPlayer 2 has O symbol\n";
    while(1){
      do{
        cout<<"player 1 Enter box number : ";
        cin>>s;
        if(s>9 || s<1)
          cout<<"Invalid INPUT";
        else
          B[s]='X';
      }while(s>9 || s<1);
      Print();
      char sign='X';
      if(checkW(sign)){
        cout<<"PLAYER 1 WIN!!";
        win_p1++;
        break;
      }
      if(checkF()){
        cout<<"DRAW!!!";
        break;
      }
      do{
        cout<<"player 2 Enter box number : ";
        cin>>s;
        if(s>9 || s<1)
          cout<<"Invalid INPUT";
        else
          B[s]='O';
      }while(s>9 || s<1);
      Print();
      sign='O';
      if(checkW(sign)){
        cout<<"PLAYER 2 WIN!!";
        win_p2++;
        break;
      }
    }
    restart();
    cout<<"\nRESULT:\nPlayer(1):"<<win_p1<<"\nPlayer(2):"<<win_p2<<endl;
    cout<<"\n\nPLAY AGAIN ?\n(0)NO\n(1)YES\n";
    cin>>play_again;
  }
}