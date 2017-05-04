#include "Node.h"

//Constructor
Node::Node(int ID){
  this -> m_id = ID;
}

//Destructor
Node::~Node(){
  //cout << "Node " << this -> m_id << "is destroyed" << endl;
  //delete[] Node;
}

//Default Constructor
Node::Node(){

}

int Node::getID(){
  return m_id;
}

void Node::setID(int newDat){
  m_id=newDat;
  return;
}

Edge* Node::getEdges(){
    return m_edges;
    }

void Node::setEdges(Edge* next){
    m_edges=next;
    return;
    }

