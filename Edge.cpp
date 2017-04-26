#include "Edge.h"

std::string Edge::getID(){
  return m_id;
}

void Edge::setID(std::string newId){
  m_id=newId;
  return;
}

//set where edge comes from
void Edge::setFrom(Node newNode){
  parent_ptr = &newNode.m_id;
  return;
}

//set where edge goes to
void Edge::setTo(Node newNode){
  child_ptr = &newNode.m_id;
  return;
}
