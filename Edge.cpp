#include "Edge.h"

std::string Edge::getname(){
  return m_name;
}

void Edge::setname(std::string newname){
  m_name=newname;
  return;
}

Node* Edge::getParent(){
  return parent_ptr;
}

//set where edge comes from
void Edge::setParent(Node newNode){
  parent_ptr = &newNode;
  return;
}

Node* Edge::getChild(){
  return child_ptr;
}

//set where edge goes to
void Edge::setChild(Node newNode){
  child_ptr = &newNode;
  return;
}

int Edge::getcap(){
  return m_cap;
}

void Edge::setcap(int newcap){
  m_cap=newcap;
  return;
}

int Edge::getflow(){
  return m_flow;
}

void Edge::setflow(int newflow){
  m_flow=newflow;
  return;
}
