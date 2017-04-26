#include "mainfunct.h"

void Parser(istream& fin,int List[],int numbNodes){
char holder;
int label;
int counter=0;


  for(int i=0;i<3;i++){
    holder=fin.get();
  }

  while(holder=='n' && counter<=numbNodes){
    fin.ignore(4,'\n');
    fin.ignore(10,'d');
    fin.get();
    label=fin.get();
    cout<<label<<endl;

    //List[counter].Set_id(label);
    fin.ignore(200,']');
    for(int i=0;i<4;i++){
      holder=fin.get();
    }

    cout<<"counter"<<", ";
    counter++;
  }

  while(fin.get(holder)){
    fin.ignore(4,'[');
    fin.ignore(6,' ');

    //fin>>// starting node
    fin.ignore(6,' ');
    // fin>>// to this node
    fin.ignore(9,']');
  }

  cout<<"completed storing the info of the doc.\n";

  return;
}
