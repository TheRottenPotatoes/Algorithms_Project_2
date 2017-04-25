//Name:Blake Padrones
//stud number: 12508301
#ifndef NODE_H
#define NODE_H

#include <vector>
#include <cstddef>

using namespace std;

class Node
{
    public:
        //pre:none
        //post:makes a Node type variable
        //creates a default node type variable
        Node() :m_id(-1),m_parents(NULL),m_children(NULL){}



        //pre:must have node to use on
        //post:returns a int
        //acsessor for node variable data
        int getID();

        //pre:node to use on
        //post:changes the pri variable data in node
        //mutator func for node class
        void setID(int newid);




    private:
        int m_id=-1;
        vector <Node*> m_parents;
        vector <Node*> m_children;


};

#endif
