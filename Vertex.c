#include <stdio.h>
#include <stdlib.h>
#include "C-List/List.h"
#include "Edge.h"
#include "Vertex.h"

struct vertex {

    List edge;
};

Vertex VertexInit(void) {

    Vertex vertex = (Vertex) malloc(sizeof(struct vertex));

    if (vertex == NULL) {

        fprintf(stderr, "Could not create a vertex");
        exit(EXIT_FAILURE);
    }

    vertex->edge = ListInit();
    return vertex;
}

void VertexAddEdge(Vertex *vertex, Edge edge) {

    ListAdd(&(*vertex)->edge, edge);
}

Edge VertexGetEdge(Vertex vertex, int index) {

    return (Edge) ListGet(vertex->edge, index);
}

int VertexSize(Vertex vertex) {

    return ListSize(vertex->edge);
}