#include "mainfunct.h"

void Parser(istream &fin,vector Node& List ,int numbNodes){
 char holder;
 int label;
 int count=0;

 fin>>holder;
    while(holder=='n' && count<=numbNodes){
        fin.ignore(4,'[');
        fin.ignore(3,' ');
        fin>>label;
        List[count].Set_id(label);
        fin.ignore(100,']');
        fin>>holder;
    }
    while(!fin.eof){
         fin.ignore(4,'[');
         fin.ignore(6,' ');
         fin>>// starting node
         fin.ignore(6,' ');
         fin>>// to this node
         fin.ignore(9,']');
    }
cout<<"completed storing the info of the doc./n";

 return;
}
