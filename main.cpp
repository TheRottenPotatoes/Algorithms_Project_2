#include <fstream>

#include "Edge.h"
#include "Node.h"
#include "mainfunct.h"
#include "algofun.h"

using namespace std;

int main()
{
  srand (time(NULL));

  Node Graph[755];
  ifstream fin;
  fin.open("KentuckyDataBase.txt");

  //replace Graph with Array of Nodes
  cout<<"begin\n";
  Parser(fin,Graph,755);
  cout<<"here";
  // cout<<Graph[44].getID()<<endl;
  //Delete Array
/*
  for(int i=0;i<counter;i++)
    delete List[i];
  delete[] List;
*/
  cout<<"\nfin";

  return 0;
}
