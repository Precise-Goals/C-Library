#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 5

struct Graph {
    int V;
    int adj[MAX_VERTICES][MAX_VERTICES];
};

struct Graph* createGraph(int V)
{
    struct Graph* g;
    int i, j;

    g = (struct Graph*)malloc(sizeof(struct Graph));
    g->V = V;

    for (i = 0; i < V; i++) {
        for (j = 0; j < V; j++) {
            g->adj[i][j] = 0;
        }
    }

    return g;
}

void add_edge(struct Graph* g, int src, int dest)
{
    g->adj[src][dest] = 1;
    g->adj[dest][src] = 1;

    printf("Added edge: %d <-> %d\n", src, dest);
}

void print_graph(struct Graph* g)
{
    int i, j;

    printf("\n--- Graph Adjacency Matrix ---\n   ");

    for (i = 0; i < g->V; i++) {
        printf("%d ", i);
    }
    printf("\n---");
    for (i = 0; i < g->V; i++) {
        printf("--");
    }
    printf("\n");

    for (i = 0; i < g->V; i++) {
        printf("%d | ", i);
        for (j = 0; j < g->V; j++) {
            printf("%d ", g->adj[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int V = 5;
    struct Graph* g;

    // clrscr();

    g = createGraph(V);

    add_edge(g, 0, 1);
    add_edge(g, 0, 4);
    add_edge(g, 1, 2);
    add_edge(g, 1, 3);
    add_edge(g, 1, 4);

    print_graph(g);

    printf("\nPress any key to exit...");
    getch();
}