#include "algofun.h"

// Calculates Max Flow and Deletes Path of Highest Flow
void Static_Algo(){
  //Establish Variables
  //# of Nodes
  int Nodes = 0;
  //K_Node Links cannot be deleted
  int K_Nodes = 0;
  //Total Flow
  int Flow = 0;
  //Time
  int Time = 0;

  std::cout << "How many Nodes?" << std::endl;
  std::cin >> Nodes;

  std::cout << "How many K Nodes?" << std::endl;
  std::cin >> K_Nodes;

  //Calculate Max Flow
  int gragh[Nodes][Nodes];


  //Select Links that are part of Max Flow Path

  //Delete Links starting from Highest Flow

  //increment time

}

// Calculates Max Flow and Deletes Link with highest flow. etc
void Reactive_Algo(){
  //Establish Variables

  //Calculate Max Flow

  //Establish Time

  //Delete Link that has Highest flow in max flow path

  //Increment Time

  //Calculate MaxFlow

  //Repeat
}

// Picks Random Links to Delete
void Random_Algo(){
  //Establish Variables

  //Calculate Max Flow

  //Establish Time

  //Pick random Edge

  //Delete random Edge

  //repeat
}
