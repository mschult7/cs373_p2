#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <sys/time.h>
#include <string>
using namespace std;

struct Gate{
  int direction;//0=LEFT; 1=Right; 2=Center
};

char getDirection(int x){
  if(x==0){
    return 'L';
  }else if(x==1){
    return 'R';
  }else if(x==2){
    return 'C';
  }

  return 'X';
}
int main(int argc, char *argv[]){

  string marbles = argv[2];
  string config = argv[1];
  Gate * x1 = new Gate();
  if(config[0]=='L'){
    x1->direction = 0;
  }else if(config[0]=='R'){
    x1->direction = 1;
  }else if(config[0]=='C'){
    x1->direction = 2;
  }
  Gate * x2 = new Gate();
  if(config[1]=='L'){
    x2->direction = 0;
  }else if(config[1]=='R'){
    x2->direction = 1;
  }
  Gate * x3 = new Gate();
  if(config[2]=='L'){
    x3->direction = 0;
  }else if(config[2]=='R'){
    x3->direction = 1;
  }
  Gate * x4 = new Gate();
  if(config[3]=='L'){
    x4->direction = 0;
  }else if(config[3]=='R'){
    x4->direction = 1;
  }

string chuteValue = "";
cout<<config;
  for(char marble: marbles){
    cout<<"->";
    if(marble=='0'){
      if(x1->direction==0){//Left at x1
        x1->direction = 1;//x1(L,0) = R
        if(x2->direction==0){//Left at x2
          x2->direction=1;
          chuteValue="B";
        }else if(x2->direction==1){//right at x2
          x2->direction=0;
          chuteValue="C";
        }
      }else if(x1->direction==1){//Right at x1
        x1->direction = 2;//x1(R,0) = C
        if(x4->direction==0){//Left at x4
          x4->direction=1;
          chuteValue="D";
        }else if(x4->direction==1){//right at x4
          x4->direction=0;
          chuteValue="E";
        }
      } else if(x1->direction==2){//Center at x1
        x1->direction = 0;//x1(C,0) = L
        if(x3->direction==0){//Left at x3
          x3->direction=1;
          chuteValue="C";
        }else if(x3->direction==1){//right at x3
          x3->direction=0;
          chuteValue="D";
        }
      }
    }else if(marble=='1'){
      if(x1->direction==0){//Left at x1
        x1->direction = 2;//x1(L,1) = C
        if(x2->direction==0){//Left at x2
          x2->direction=1;
          chuteValue="B";
        }else if(x2->direction==1){//right at x2
          x2->direction=0;
          chuteValue="C";
        }
      }else if(x1->direction==1){//Right at x1
        x1->direction = 0;//x1(R,1) = L
        if(x4->direction==0){//Left at x4
          x4->direction=1;
          chuteValue="D";
        }else if(x4->direction==1){//right at x4
          x4->direction=0;
          chuteValue="E";
        }
      } else if(x1->direction==2){//Center at x1
        x1->direction = 1;//x1(C,1) = R
        if(x3->direction==0){//Left at x3
          x3->direction=1;
          chuteValue="C";
        }else if(x3->direction==1){//right at x3
          x3->direction=0;
          chuteValue="D";
        }
      }
    }

    cout<<getDirection(x1->direction)<<getDirection(x2->direction)<<getDirection(x3->direction)<<getDirection(x4->direction);
  }
  cout<<" "<<chuteValue<<"\n";

  return 0;
}
