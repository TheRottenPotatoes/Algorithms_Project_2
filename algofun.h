#ifndef ALGOFUN_H
#define ALGOFUN_H

#include <limits.h>
#include <string.h>
#include <queue>
#include <iostream>

// Calculates Max Flow and Deletes Path of Highest Flow
int Static_Algo(Graph);

// Calculates Max Flow and Deletes Link with highest flow. etc
int Reactive_Algo(Graph);

// Picks Random Links to Delete
int Random_Algo(Graph);

#endif // ALGOFUN_H
