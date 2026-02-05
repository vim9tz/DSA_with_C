#include <stdio.h>
#include <limits.h>

#define V 9 // Number of vertices in the graph

// Function to find the vertex with the minimum distance value
int minDistance(int dist[], int sptSet[])
{
    // Initialize min value
    int min = INT_MAX, min_index;

    // Find the vertex with the minimum distance value, from the set of vertices not yet processed
    for (int v = 0; v < V; v++)
    {
        if (sptSet[v] == 0 && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

// Function to implement Dijkstra's algorithm
void dijkstra(int graph[V][V], int src)
{
    int dist[V];   // The output array dist[i] will hold the shortest distance from src to i
    int sptSet[V]; // sptSet[i] will be true if vertex i is included in the shortest path tree

    // Initialize all distances as INFINITE and sptSet[] as false
    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }

    // Distance from the source vertex to itself is always 0
    dist[src] = 0;

    // Find the shortest path for all vertices
    for (int count = 0; count < V - 1; count++)
    {
        // Pick the minimum distance vertex from the set of vertices not yet processed
        int u = minDistance(dist, sptSet);

        // Mark the picked vertex as processed
        sptSet[u] = 1;

        // Update dist value of the adjacent vertices of the picked vertex
        for (int v = 0; v < V; v++)
        {
            // Update dist[v] if and only if v is not in the shortest path tree and
            // there is an edge from u to v, and the total distance from src to v through u
            // is smaller than the current value of dist[v]
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    // Print the constructed distance array
    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < V; i++)
    {
        printf("%d \t %d\n", i, dist[i]);
    }
}

int main()
{
    // Example graph represented as an adjacency matrix
    int graph[V][V] = {
        {0, 4, 0, 0, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 0, 0, 0, 0},
        {0, 8, 0, 7, 0, 4, 0, 0, 0},
        {0, 0, 7, 0, 9, 14, 0, 0, 0},
        {0, 0, 0, 9, 0, 10, 0, 0, 0},
        {0, 0, 4, 14, 10, 0, 2, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 1, 6},
        {8, 0, 0, 0, 0, 0, 1, 0, 7},
        {0, 0, 0, 0, 0, 0, 6, 7, 0}};

    int source = 0; // Starting from vertex 0 (A)

    // Call Dijkstra's algorithm
    dijkstra(graph, source);

    return 0;
}