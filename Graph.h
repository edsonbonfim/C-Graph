#ifndef GRAPH_LIBRARY_H
#define GRAPH_LIBRARY_H

#include "Vertex.h"

typedef struct graph *Graph;

/**
 * Inicializa um grafo com o tamanho especificado
 *
 * @param size tamanho do grafo
 * @return grafo
 */
Graph GraphInit();

void GraphAddVertex(Graph *graph, Vertex vertex);

Vertex GraphGetVertex(Graph graph, int index);

int GraphSize(Graph graph);

#endif