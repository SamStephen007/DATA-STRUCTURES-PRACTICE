#include <stdio.h>

#define V 4

void graph(int arr[V][V]) {
    int i, j;
    for (i = 0; i < V; i++) {
        for (j = 0; j < V; j++) {
            arr[i][j] = 0; // initialize all values to 0
        }
    }
}

void addEdge(int arr[V][V], int i, int j) {
    arr[i][j] = 1;
    arr[j][i] = 1;
}

void printAdjMatrix(int arr[V][V]) {
    int i, j;
    for (i = 0; i < V; i++) {
        printf("%d: ", i);
        for (j = 0; j < V; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int c;
    int adjMatrix[V][V]; // Changed the size of the array to V x V
    scanf("%d", &c);

    graph(adjMatrix);

    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 0, 2);
    addEdge(adjMatrix, 1, 2);
    addEdge(adjMatrix, 2, 0);
    addEdge(adjMatrix, 2, 3);

    printAdjMatrix(adjMatrix);

    return 0;
}
