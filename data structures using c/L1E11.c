#include <stdio.h>
#include <stdlib.h>

int a, b, u, v, i, j, n, min, ne = 1, mincost = 0;
int cost[10][10], parent[10];

int find(int i) {
    while (parent[i])
        i = parent[i];
    return i;
}

int uni(int i, int j) {
    if (i != j) {
        parent[j] = i;
        return 1;
    }
    return 0;
}

int main() {
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }
    while (ne < n) {
        min = 999;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (cost[i][j] < min) {
                    min = cost[i][j];
                    u = i;
                    v = j;
                }
            }
        }

        a = find(u);
        b = find(v);

        if (uni(a, b)) {
            printf("Edge %d: (%d,%d)=%d\n", ne++, u, v, min);
            mincost += min;
        }

        cost[u][v] = cost[v][u] = 999;
    }

    printf("Minimum cost: %d\n", mincost);

    return 0;
}
