#ifndef EDGE_H
#define EDGE_H

#include "Node.h"

#include <vector>
#include <cstddef>
#include <iostream>

class Edge
{
public:
  //pre:none
  //post:makes a Edge type variable
  //creates a default edge type variable
  Edge() :m_id("e0"),m_cap(1),m_flow(0){}

  //pre:must have edge to use on
  //post:returns a string
  //acsessor for edge variable data
  std::string getID();

  //pre:node to use on
  //post:changes the pri variable data in edge
  //mutator func for edge class
  void setID(std::string newId);

  //set where edge comes from
  void setFrom(Node newNode);

  //set where edge goes to
  void setTo(Node newNode);

private:
  std::string m_id;
  int m_cap;
  int m_flow;

  //pointer from | where edge starts
  int *parent_ptr;

  //pointer to | where edge ends
  int *child_ptr;

};

#endif // EDGE_H
