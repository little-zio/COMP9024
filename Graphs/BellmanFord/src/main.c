#include <stdio.h>    // printf()
#include <stdlib.h>   // system()
#include "Graph.h"


#define NUM_OF_NODES  6


int main(void) {
    // Create a directed graph with 5 nodes
    struct Graph *pGraph = CreateGraph(NUM_OF_NODES, 1);

    //char *nodeNames[NUM_OF_NODES] = {"A", "B", "C", "D", "E"};
    char *nodeNames[NUM_OF_NODES] = {"0", "1", "2", "3", "4", "5"};
    
    // Add nodes
    for (long u = 0; u < NUM_OF_NODES; u++) {
        GraphAddNode(pGraph, u, nodeNames[u]);
    }
    // edges: source node id, target node id, value of the edge
    long edges[][3] = {
        {5, 4, 15},
        {4, 3, 20},
        {3, 2, 15},
        {2, 1, 10},
        {1, 0, -100},
        {5, 0, 10},

        // Forming a negative cycle 
        {0, 5, 20}                        
    }; 
    // Add edges
    for (long i = 0; i < sizeof(edges)/sizeof(edges[0]); i++) {
        GraphAddEdge(pGraph, edges[i][0], edges[i][1], edges[i][2]);
    }

    PrintGraph(pGraph);

    // create a sub-directory 'images' (if it is not present) in the current directory
    system("mkdir -p images");
    // remove the *.dot and *.png files in the directory 'images'
    system("rm -f images/*.dot images/*.png");

    long u = 5;

    printf("BellmanFord() starting from node %ld:\n\n", u);
    int negCycles = BellmanFord(pGraph, u);
    if (negCycles) {
        printf("Negative cycles detected.\n");
    }

    ReleaseGraph(pGraph);

    return 0;
}



