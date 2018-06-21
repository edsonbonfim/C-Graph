#include <stdio.h>
#include <stdlib.h>
#include "C-List/List.h"
#include "Vertex.h"
#include "Graph.h"

struct graph {

    List vertex;
};

Graph GraphInit() {

    Graph graph = (Graph) malloc(sizeof(struct graph));

    graph->vertex = ListInit();
    ListAdd(&graph->vertex, 0);

    return graph;
}

void GraphAddVertex(Graph *graph, Vertex vertex) {

    ListAdd(&(*graph)->vertex, vertex);
}

Vertex GraphGetVertex(Graph graph, int index) {

    return (Vertex) ListGet(graph->vertex, index+1);
}

int GraphSize(Graph graph) {

    return ListSize(graph->vertex) - 1;
}