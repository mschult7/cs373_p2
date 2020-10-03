#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <sys/time.h>
#include <string>
using namespace std;

struct Gate{
  int direction;//0=LEFT; 1=Right; 2=Center
};
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

  return 0;
}
