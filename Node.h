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
  //Comment this out for now.
  //Node() :m_id(-1),m_edges(NULL){}

  //Constructor
  Node(int);

  //Destructor

  ~Node();
  //Default Constructor
  Node();

  //pre:must have node to use on
  //post:returns a int
  //acsessor for node variable data
  int getID();

  //pre:node to use on
  //post:changes the pri variable data in node
  //mutator func for node class
  void setID(int newid);

    Edge* getEdges();

    void setEdges(Edge* next);




private:
  int m_id;
  Edge* m_edges;

};

#endif // NODE_H
