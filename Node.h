//
// Node.h
// Algorithms Project 2 (Simple)
//

#ifndef NODE_H
#define NODE_H

class Node
{
  public:
    // Default constructor
    Node();

    // Constructor takes information
    Node(int id);

    int Get_id() { return m_id; }
    void Set_id(int val) { m_id = val; }

    // This prints the information of the Node
    // NOT FINISHED!!!!!!!!!!!!!!!
    void print_node();

  private:
    int m_id;                 // ID of the Node
};

#endif // SENSOR_H
