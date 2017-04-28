#include "mainfunct.h"
#include <stdlib.h>



void Parser(istream& fin,int List[],int numbNodes){
char holder;
char numb[10];
int source;
int target;
int counter=0;
int edgeCounter=0;



  for(int i=0;i<3;i++){
    holder=fin.get();
  }

  while(holder=='n' && counter<=numbNodes){
    fin.ignore(6,'[');
    fin.ignore(200,']');
    fin.ignore(3,'n');
    holder=fin.get();
      List[counter].setID(counter++);
    }

counter=0;


  while(holder=='e')){
    fin.ignore(6,'[');
    fin.ignore(10,'s');
    fin.ignore(10,' ');
    source=fin.get();
    if(counter==(40-source)){
        List[counter].AddEdge->SetParent(List[counter];
        fin.ignore(10,'t');
        fin.ignore(10,' ');
        getline(fin,numb,'\n');
        target=atoi(numb);

        List[counter].GetAt(edgeCounter)->SetChild(List[target]);
    }
    else{
      ++counter;
      List[counter].AddEdge->SetParent(List[counter];
        fin.ignore(10,'t');
        fin.ignore(10,' ');
        getline(fin,numb,'\n');
        target=atoi(numb);

        List[counter].GetAt(edgeCounter)->SetChild(List[target]);
      
    }
    
   
    //fin>>// starting node
    fin.ignore(6,' ');
    // fin>>// to this node
    fin.ignore(9,']');
  }

  cout<<"completed storing the info of the doc.\n";

  return;
}
