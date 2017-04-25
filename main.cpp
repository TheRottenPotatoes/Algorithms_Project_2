#include <iostream>
#include <fstream>

//#include "Node.h"
#include "mainfunct.h"

using namespace std;

int main()
{

   int Graph[755];
    ifstream fin;
    fin.open("KentuckyDataBase.txt");
     Parser(fin,Graph,755);
    return 0;
}




