#include <iostream>
#include <fstream>

#include "Node.h"
#include "Edge.h"
#include "mainfunct.h"

using namespace std;

int main()
{
  int Graph[755];
  ifstream fin;
  fin.open("KentuckyDataBase.txt");

  //replace Graph with Array of Nodes
  Parser(fin,Graph,755);
  return 0;
}
