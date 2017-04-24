//
// Node.h
// Algorithms Project 2
//

#ifndef NODE_H
#define NODE_H

#include <string>

class Node
{
  public:
    // Default constructor
    Node();

    // Constructor takes information
    Node(int id, std::string label, std::string geocode_append,
         std::string Country, double Longitude, bool Internal,
         double Latitude);

    int Get_id() { return m_id; }
    void Set_id(int val) { m_id = val; }

    std::string Get_label() { return m_label; }
    void Set_label(std::string val) { m_label = val; }

    std::string Get_geocode_append() { return m_geocode_append; }
    void Set_geocode_append(std::string val) { m_geocode_append = val; }

    std::string Get_Country() { return m_Country; }
    void Set_Country(std::string val) { m_Country = val; }

    double Get_Longitude() { return m_Longitude; }
    void Set_Longitude(float val) { m_Longitude = val; }

    bool Get_Internal() { return m_Internal; }
    void Set_Internal(bool val) { m_Internal = val; }

    double Get_Latitude() { return m_Latitude; }
    void Set_Latitude(float val) { m_Latitude = val; }

    // This prints the information of the Node
    // NOT FINISHED!!!!!!!!!!!!!!!
    void print_node();

  private:
    int m_id;                 // ID of the Node
    std::string m_label;           // City| Rolla, Sedalia, etc.
    std::string m_geocode_append;  // State
    std::string m_Country;
    double m_Longitude;
    bool m_Internal;          // True 1 or False 0
    double m_Latitude;
};

#endif // SENSOR_H
