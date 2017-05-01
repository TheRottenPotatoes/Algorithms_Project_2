#include <iostream>
#include <fstream>

#include "Edge.h"
#include "Node.h"
#include "mainfunct.h"

using namespace std;

int main()
{
  Node Graph[755];
  ifstream fin;
  fin.open("KentuckyDataBase.txt");

  //replace Graph with Array of Nodes
  cout<<"begin\n";
  Parser(fin,Graph,755);
  cout<<"here";
 // cout<<Graph[44].getID()<<endl;
  cout<<"\nfin";

  return 0;
}
