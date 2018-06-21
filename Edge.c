#include <stdio.h>
#include <stdlib.h>
#include "C-List/List.h"
#include "Edge.h"

struct edge {

    void *id;
    void *weight;
};

Edge EdgeInit(void *id, void *weight) {

    Edge edge = (Edge) malloc(sizeof(struct edge));

    if (edge == NULL) {

        fprintf(stderr, "Could not create an edge");
        exit(EXIT_FAILURE);
    }

    edge->id = id;
    edge->weight = weight;

    return edge;
}

void *EdgeGetId(Edge e) {

    return e->id;
}

void *EdgeGetWeight(Edge e) {

    return e->weight;
}