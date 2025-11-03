#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTICES 10
struct Graph {
    int V; 
    int adj[MAX_VERTICES][MAX_VERTICES];
};

struct Graph* createGraph(int V) {
    if (V > MAX_VERTICES) {
        printf("Error: Number of vertices exceeds MAX_VERTICES\n");
        return NULL;
    }
    struct Graph* g = (struct Graph*)malloc(sizeof(struct Graph));
    g->V = V;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            g->adj[i][j] = 0;
        }
    }
    
    return g;
}


void add_edge(struct Graph* g, int src, int dest) {
    if (src >= g->V || dest >= g->V) {
        printf("Error: Invalid vertex number.\n");
        return;
    }
    g->adj[src][dest] = 1;
    g->adj[dest][src] = 1;
    
    printf("Added edge: %d <-> %d\n", src, dest);
}

void print_graph(struct Graph* g) {
    printf("\n--- Graph Adjacency Matrix ---\n");

    printf("   "); 
    for (int i = 0; i < g->V; i++) {
        printf("%d ", i);
    }
    printf("\n---");
    for (int i = 0; i < g->V; i++) {
        printf("--");
    }
    printf("\n");
    for (int i = 0; i < g->V; i++) {
        printf("%d | ", i); // Row header
        for (int j = 0; j < g->V; j++) {
            printf("%d ", g->adj[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int V = 5; 
    struct Graph* g = createGraph(V);

    if (g == NULL) {
        return 1;
    }

    add_edge(g, 0, 1);
    add_edge(g, 0, 4);
    add_edge(g, 1, 2);
    add_edge(g, 1, 3);
    add_edge(g, 1, 4);
    add_edge(g, 2, 3);
    add_edge(g, 3, 4);

    print_graph(g);

    free(g);

    return 0;
}