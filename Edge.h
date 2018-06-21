#ifndef GRAPH_EDGE_H
#define GRAPH_EDGE_H

typedef struct edge *Edge;

Edge EdgeInit(void *id, void *weight);

void *EdgeGetId(Edge e);

void *EdgeGetWeight(Edge e);

#endif //GRAPH_EDGE_H
