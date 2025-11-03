#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Graph {
    int V;
    struct Node** adj;
};

struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Graph* createGraph(int V)
{
    struct Graph* g;
    int i;

    g = (struct Graph*)malloc(sizeof(struct Graph));
    g->V = V;

    g->adj = (struct Node**)malloc(V * sizeof(struct Node*));

    for (i = 0; i < V; i++) {
        g->adj[i] = NULL;
    }

    return g;
}

void add_edge(struct Graph* g, int src, int dest)
{
    struct Node* newNodeDest;
    struct Node* newNodeSrc;

    newNodeDest = createNode(dest);
    newNodeDest->next = g->adj[src];
    g->adj[src] = newNodeDest;

    newNodeSrc = createNode(src);
    newNodeSrc->next = g->adj[dest];
    g->adj[dest] = newNodeSrc;

    printf("Added edge: %d <-> %d\n", src, dest);
}

void print_graph(struct Graph* g)
{
    int v;

    printf("\n--- Graph Adjacency List ---\n");

    for (v = 0; v < g->V; v++) {
        struct Node* temp = g->adj[v];
        printf("Vertex %d: ", v);

        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
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