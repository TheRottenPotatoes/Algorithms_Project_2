#ifndef NODE_H
#define NODE_H

#include <vector>
#include <cstddef>
#include "Edge.h"

using namespace std;

class Edge;

class Node
{
public:
  //pre:none
  //post:makes a Node type variable
  //creates a default node type variable
  Node() :m_id(-1),m_edges(NULL){}

  //pre:must have node to use on
  //post:returns a int
  //acsessor for node variable data
  int getID();

  //pre:node to use on
  //post:changes the pri variable data in node
  //mutator func for node class
  void setID(int newid);

void AddEdge(Edge child);

vector <Edge> GetCopyOfEdge();

Edge GetAt(int assigned);




private:

  int m_id;
  vector <Edge> m_edges;

};

#endif // NODE_H
