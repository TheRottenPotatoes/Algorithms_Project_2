#include "Node.h"

int Node::getID(){
  return m_id;
}

void Node::setID(int newDat){
  m_id=newDat;
  return;
}



void Node::AddEdge(Edge child)
{
    m_edges.push_back(child);
}


vector <Edge> Node::GetCopyOfEdge(){
    return m_edges;
}



Edge Node::GetAt(int assigned)
{
    return m_edges.at(assigned);
}


