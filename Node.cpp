#include "Node.h"

Node::Node()
{
  m_id = 0;
  m_label = "Rolla";
  m_geocode_append = "Missouri";
  m_Country = "United States";
  m_Longitude = -91.77127;
  m_Internal = 1;
  m_Latitude = 37.95143;
}

Node::Node(int id, string label, string geocode_append,
          string Country, double Longitude,
          bool Internal, double Latitude):
          m_id(id), m_label(label),
          m_geocode_append(geocode_append), m_Country(Country),
          m_Longitude(Longitude), m_Internal(Internal),
          m_Latitude(Latitude) {}
