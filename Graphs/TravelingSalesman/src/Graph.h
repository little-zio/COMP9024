#ifndef GRAPH_H
#define GRAPH_H
//#include "Stack.h"

// INFINITY_VALUE must align with the type of AdjMatrixElementTy
#define INFINITY_VALUE  LONG_MAX

// Also see INFINITY_VALUE
typedef long AdjMatrixElementTy;

#define CONNECTED   1

struct Graph;
struct Graph *CreateGraph(long n, int isDirected);

void ReleaseGraph(struct Graph *pGraph);

void GraphAddUndirectedEdge(struct Graph *pGraph, long u, long v, AdjMatrixElementTy val);

void GraphAddDirectedEdge(struct Graph *pGraph, long u, long v, AdjMatrixElementTy val);

void GraphAddEdge(struct Graph *pGraph, long u, long v, AdjMatrixElementTy val);

void GraphAddNode(struct Graph *pGraph, long u, char *name);

void PrintGraph(struct Graph *pGraph);

void TspPermute(struct Graph *pGraph);

void TspNearestNeighbour(struct Graph *pGraph, long u);

void Graph2Dot(struct Graph *pGraph, 
               char *filePath,
               char *graphName,
               int isDirectedGraph,
               int displayLabel,
               int *visited,
               int displayVisited,
               long route[]);

// Based on Graph2Dot()
void GenOneImage(struct Graph *pGraph, char *graphName, char *fileName, long seqNo, int *visited, long route[]);

#endif


