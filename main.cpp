#include <iostream>
#include <fstream>

#include "Node.h"
#include "mainfunct.h"

using namespace std;

int main()
{

    Node Graph[753];
    ifstream fin;
    fin.open("KentuckyDataBase.txt");
     Parser(fin,Graph, 753);
    return 0;
}
