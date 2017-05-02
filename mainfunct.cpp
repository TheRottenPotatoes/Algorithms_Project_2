#include "mainfunct.h"
#include <stdlib.h>
#include "Edge.h"
#include "Node.h"



void Parser(istream& fin,Node List[],int numbNodes){
  char holder;
  string numb;
  int source;
  int target;
  int counter=0;
  int edgeCounter=0;
  cout << "parser started" << endl;

    holder=fin.get();
  while(holder=='n' && counter<=numbNodes){
    fin.ignore(6,'[');
    fin.ignore(200,']');
    fin.get();
    fin.get();
    fin.get();
    holder=fin.get();
    List[counter].setID(counter++);
    }

  counter=0;

  while(!fin.eof()){    //something wrong in while loop!


    Edge* Temp = new Edge();
    fin.ignore(6,'[');
    fin.ignore(20,'s');
    fin.ignore(20,' ');
    fin>>source;

    if(counter==(48-source)){

        fin.ignore(10,'t');
        fin.ignore(10,' ');
        getline(fin,numb,'\n');

        target=atoi((numb.c_str()));
        Temp->setChild(List[target]);
        Temp->setParent(List[counter]);


    }else{
      ++counter;
        fin.ignore(10,'t');
        fin.ignore(10,' ');
        getline(fin,numb,'\n');
        target=atoi((numb.c_str()));
        Temp->setChild(List[target]);
        Temp->setParent(List[counter]);

    }
    //fin>>// starting node
    fin.ignore(6,'d');
    // fin>>// to this node
    fin.ignore(5,'"');

    getline(fin,numb,'"');
    Temp->setname(numb);

//cout<<"here";
    List[counter].setEdges(Temp);
  }

  cout<<"completed storing the info of the doc.\n";



//  delete[] List;
  cout << " deleted \n";
  return;
}
