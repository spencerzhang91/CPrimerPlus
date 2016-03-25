// Simple implementation of adjacency list based graph in C.
// This code piece started on March 19th and shall finish in a week
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef node *Node;
struct node {
    int node_serial;
    Node next_adjacent;
    // other fileds
};

typedef edge *Edge;
struct edge {
    int node_row;
    int node_col;
    int weight;
};

typedef graph *Graph;
struct graph {
    int node_num;
    int edge_num;
    Node list[MaxNodeNum];
};

// basic methods:
Graph CreateGraph(int node_num);
void InsertEdge(Graph gragh, Edge e);
void InsertNode(Graph graph, Node n);
void buildGraph(Graph newgra);
void buildGraph_test(Graph newgra);
void showmatrix(Graph graph);
// traversal methods:

int main(void)
{
    return 0;
}