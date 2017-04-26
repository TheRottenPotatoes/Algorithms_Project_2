#ifndef EDGE_H
#define EDGE_H

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
  //post:returns a int
  //acsessor for edge variable data
  std::string getID();

  //pre:node to use on
  //post:changes the pri variable data in node
  //mutator func for node class
  void setID(std::string newid);

private:
  std::string m_id;
  int m_cap;
  int m_flow;
  //create vector stuff later
};

#endif // EDGE_H
