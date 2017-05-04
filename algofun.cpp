#include "algofun.h"

// Calculates Max Flow and Deletes Path of Highest Flow
int Static_Algo(Graph){
  getParserData();
  //gets max flow of all active/non destroyed edges
  GetMaxFlow(Graph);

  //creates list of edges from graph starting with the Edge with highest Flow
  CreateList(Graph);

  int time =0;

  While (Graph.m_flow != 0){
    for (int i = 0; i < CreateList.m_size; i++){
      if (list[i].m_kNode = 1){
        delete list[i];
      }else if(list[i].m_kNode = 0) {
        delete list[i];
        list[i].Edge::SetEdgeDest(1);
      }
    }
    time++;

  }
  //Sets all edges destroyed variable to 0
  ResetAllEdgeDest();

  return time;
}

// Calculates Max Flow and Deletes Link with highest flow. etc
int Reactive_Algo(Graph){
  getParserData();
  int time =0;

  While (Graph.m_flow != 0){
    //gets max flow of all active/non destroyed edges
    GetMaxFlow(Graph);
    //Deletes Edge with highest flow
    //checks if bool del = 1 and of =1 then pick next highest edge
    //checks if edge is of K_node and if so picks next highest.
    DelHighFlow(Graph);

    time++;
  }
  ResetAllEdgeDest();

  return time;
}

// Picks Random Links to Delete
int Random_Algo(Graph){
  getParserDataGraph();
  int time =0;

  While (Graph.m_flow != 0){
    //deletes random edge
    //checks to see if edge is already deleted
    //checks to see if edge is of K_node
    //if so picks new edge
    DelRanEdge(Graph);

    time++;
  }
  ResetAllEdgeDest();

  return time;
}

