#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

int graph[MAX_NODES][MAX_NODES]; // Adjacency matrix representation of the graph
int visited[MAX_NODES]; // Array to track visited nodes
int stack[MAX_NODES]; // Stack used in DFS
int num_nodes;
int top = -1;

// Function to perform DFS and fill the stack
void dfs1(int node) {
    visited[node] = 1;

    for (int i = 0; i < num_nodes; i++) {
        if (graph[node][i] && !visited[i]) {
            dfs1(i);
        }
    }

    stack[++top] = node; // Push the node onto the stack after visiting all its neighbors
}

// Function to perform DFS and print the nodes of the SCC
void dfs2(int node) {
    visited[node] = 1;
    printf("%d ", node);
}

// Function to transpose the graph
void transposeGraph() {
    int transposed[MAX_NODES][MAX_NODES];

    // Transpose the graph by swapping rows and columns
    for (int i = 0; i < num_nodes; i++) {
        for (int j = 0; j < num_nodes; j++) {
            transposed[j][i] = graph[i][j];
        }
    }

    // Copy the transposed graph back to the original graph
    for (int i = 0; i < num_nodes; i++) {
        for (int j = 0; j < num_nodes; j++) {
            graph[i][j] = transposed[i][j];
        }
    }
}

// Function to find strongly connected components (SCCs)
void kosarajuSCC() {
    // Step 1: Perform DFS on the original graph and fill the stack
    for (int i = 0; i < num_nodes; i++) {
        if (!visited[i]) {
            dfs1(i);
        }
    }

    // Step 2: Transpose the graph
    transposeGraph();

    // Step 3: Reset visited array
    for (int i = 0; i < num_nodes; i++) {
        visited[i] = 0;
    }

    // Step 4: Perform DFS on the transposed graph and print SCCs
    while (top >= 0) {
        int node = stack[top--];
        if (!visited[node]) {
            printf("SCC: ");
            dfs2(node);
            printf("\n");
        }
    }
}

int main() {
    printf("Enter number of nodes: ");
    scanf("%d", &num_nodes);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < num_nodes; i++) {
        for (int j = 0; j < num_nodes; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Strongly Connected Components (SCCs):\n");
    kosarajuSCC();

    return 0;
}

