#ifndef GRAPH_VERTEX_H
#define GRAPH_VERTEX_H

#include "Edge.h"

typedef struct vertex *Vertex;

Vertex VertexInit(void);

void VertexAddEdge(Vertex *vertex, Edge edge);

Edge VertexGetEdge(Vertex vertex, int index);

int VertexSize(Vertex vertex);

#endif //GRAPH_VERTEX_H
