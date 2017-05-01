#ifndef EDGE_H
#define EDGE_H

#include "Node.h"

#include <cstddef>
#include <iostream>
#include <string>

class Node;

class Edge
{
public:
  //pre:none
  //post:makes a Edge type variable
  //creates a default edge type variable
  Edge();

  //Constructor
  Edge(std::string, Node*, Node*, int, int);

  //Destructor
  ~Edge();

  //Default Constructor
  //Edge();

  //pre:must have edge to use on
  //post:returns a string
  //acsessor for edge variable data
  std::string getname();

  //pre:node to use on
  //post:changes the pri variable data in edge
  //mutator func for edge class
  void setname(std::string newname);

  Node* getParent();

  //set where edge comes from
  void setParent(Node newNode);

  Node* getChild();

  //set where edge goes to
  void setChild(Node newNode);

  void setNextEdge(Edge* next);

  Edge* getNextEdge();

  int getcap();

  void setcap(int newcap);

  int getflow();

  void setflow(int newflow);

private:
  std::string m_name;
  Node *parent_ptr;
  Node *child_ptr;
  Edge *next_edge;
  int m_cap;
  int m_flow;

};

#endif // EDGE_H
