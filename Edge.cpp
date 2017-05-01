#include "Edge.h"

//Constructor
Edge::Edge(){
m_name="place";
parent_ptr=NULL;
child_ptr=NULL;
m_cap=0;
m_flow=0;
}

//Destructor
Edge::~Edge(){
  //cout << "Edge " << this -> m_name << " is destroyed" << endl;
}

string Edge::getname(){
    return m_name;
}

void Edge::setname(string newname){
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
void Edge::setNextEdge(Edge* next){
    next_edge=next;
    return;
}

Edge* Edge::getNextEdge(){
    return next_edge;
}

int Edge::getcap(){
  return m_cap;
}

void Edge::setcap(){
  m_cap=(rand()%MAX_CAP+MIN_CAP);
  return;
}

int Edge::getflow(){
  return m_flow;
}

void Edge::setflow(int newflow){
  m_flow=newflow;
  return;
}
