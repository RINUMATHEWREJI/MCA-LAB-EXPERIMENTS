// #include <stdio.h>
// #include <stdlib.h>

// #define MAX_NODES 100
// #define QUEUE_SIZE 100

// int graph[MAX_NODES][MAX_NODES];
// int visited[MAX_NODES];
// int stack[MAX_NODES];
// int topological_order[MAX_NODES];
// int num_nodes, top = -1, order_index = 0;

// void dfs(int node) {
//     visited[node] = 1;
//     printf("%d ", node);

//     for (int i = 0; i < num_nodes; i++) {
//         if (graph[node][i] && !visited[i]) {
//             dfs(i);
//         }
//     }
// }

// void bfs(int start) {
//     int queue[QUEUE_SIZE];
//     int front = 0, rear = -1;

//     visited[start] = 1;
//     queue[++rear] = start;

//     while (front <= rear) {
//         int node = queue[front++];
//         printf("%d ", node);

//         for (int i = 0; i < num_nodes; i++) {
//             if (graph[node][i] && !visited[i]) {
//                 visited[i] = 1;
//                 queue[++rear] = i;
//             }
//         }
//     }
// }

// void dfsForTopologicalSort(int node) {
//     visited[node] = 1;

//     for (int i = 0; i < num_nodes; i++) {
//         if (graph[node][i] && !visited[i]) {
//             dfsForTopologicalSort(i);
//         }
//     }

//     stack[++top] = node;
// }

// void topologicalSort() {
//     for (int i = 0; i < num_nodes; i++) {
//         if (!visited[i]) {
//             dfsForTopologicalSort(i);
//         }
//     }

//     while (top >= 0) {
//         topological_order[order_index++] = stack[top--];
//     }

//     printf("Topological order: ");
//     for (int i = order_index - 1; i >= 0; i--) {
//         printf("%d ", topological_order[i]);
//     }
// }

// int main() {
//     printf("Enter number of nodes: ");
//     scanf("%d", &num_nodes);

//     printf("Enter adjacency matrix:\n");
//     for (int i = 0; i < num_nodes; i++) {
//         for (int j = 0; j < num_nodes; j++) {
//             scanf("%d", &graph[i][j]);
//         }
//     }

//     printf("DFS traversal: ");
//     for (int i = 0; i < num_nodes; i++) {
//         if (!visited[i]) {
//             dfs(i);
//         }
//     }
//     printf("\n");

//     // Reset visited array
//     for (int i = 0; i < num_nodes; i++) {
//         visited[i] = 0;
//     }

//     printf("BFS traversal: ");
//     for (int i = 0; i < num_nodes; i++) {
//         if (!visited[i]) {
//             bfs(i);
//         }
//     }
//     printf("\n");

//     // Reset visited array
//     for (int i = 0; i < num_nodes; i++) {
//         visited[i] = 0;
//     }

//     printf("Topological sort: ");
//     topologicalSort();
//     printf("\n");

//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
int graph[100][100];
int visited[100];
int stack[100];
int queue[100];
int topologicalorder[100];
int num,top=-1,indexarray=0;

void dfs(int node){
    visited[node]=1;
    printf("%d ",node);
    for(int i=0;i<num;i++){
        if(graph[node][i] && !visited[i]){
            dfs(i);
        }
    }
}
void bfs(int start){
    int queue[100];
    int front=0,rear=-1;

    visited[start]=1;
    queue[++rear]=start;

    while(front<=rear){
        int node=queue[front++];
        printf("%d ",node);

        for(int i=0;i<num;i++){
            if(graph[node][i] && !visited[i]){
                visited[i]=1;
                queue[++rear]=i;
            }
        }
    }
}
void dfstopological(int node){
    visited[node]=1;
    for(int i=0;i<num;i++){
        if(graph[node][i] && !visited[i]){
            dfstopological(i);
        }
    }

    stack[++top]=node;

}
void topologicalSort(int s) {
    for (int i = s; i < num; i++) {
        if (!visited[i]) {
            dfstopological(i);
        }
    }

    while (top >= 0) {
        topologicalorder[indexarray++] = stack[top--];
    }

    printf("Topological order: ");
    for (int i = indexarray - 1; i >= 0; i--) {
        printf("%d ", topologicalorder[i]);
    }
}

int main() {
    int start_node;

    printf("Enter number of nodes: ");
    scanf("%d", &num);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the starting vertex for traversal: ");
    scanf("%d", &start_node);

    // Reset visited array
    for (int i = 0; i < num; i++) {
        visited[i] = 0;
    }

    printf("DFS traversal starting from vertex %d: ", start_node);
    dfs(start_node);
    printf("\n");

    // Reset visited array
    for (int i = 0; i < num; i++) {
        visited[i] = 0;
    }

    printf("BFS traversal starting from vertex %d: ", start_node);
    bfs(start_node);
    printf("\n");

    // Reset visited array
    for (int i = 0; i < num; i++) {
        visited[i] = 0;
    }

     printf("Topological sort starting from vertex %d: ", start_node);
    topologicalSort(start_node);
    
    // Reset visited array
    for (int i = 0; i < num; i++) {
        visited[i] = 0;
    }

    
    printf("\n");
    return 0;
}
