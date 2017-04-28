#include "Node.h"

//Constructor
Node::Node(int ID){
  this -> m_id = ID;
}

//Destructor
Node::~Node(){
  cout << "Node " << this -> m_id << "is destroyed" << endl;
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



void Node::AddEdge(Edge child){
    m_edges.push_back(child);
}


vector <Edge> Node::GetCopyOfEdge(){
    return m_edges;
}



Edge Node::GetAt(int assigned){
    return m_edges.at(assigned);
}
