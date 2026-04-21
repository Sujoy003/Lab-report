#include <stdio.h>
#include <limits.h>

#define V 5
#define E 10
#define INF (INT_MAX/2)

struct Edge {
    int u, v, w;
};

int main() {
    struct Edge edges[E] = {
        {0,1,6},{0,2,7},{1,2,8},{1,3,5},
        {1,4,-4},{2,3,-3},{2,4,9},{3,1,-2},
        {4,0,2},{4,3,7}
    };

    int dist[V];

    for(int i=0;i<V;i++)
        dist[i]=INF;

    dist[0]=0;

    for(int i=0;i<V-1;i++){
        for(int j=0;j<E;j++){
            int u=edges[j].u;
            int v=edges[j].v;
            int w=edges[j].w;

            if(dist[u]!=INF && dist[u]+w<dist[v])
                dist[v]=dist[u]+w;
        }
    }

    for(int j=0;j<E;j++){
        int u=edges[j].u;
        int v=edges[j].v;
        int w=edges[j].w;

        if(dist[u]!=INF && dist[u]+w<dist[v]){
            printf("Graph contains a negative-weight cycle\n");
            return 0;
        }
    }

    printf("Vertex Distance from Source\n");
    for(int i=0;i<V;i++)
        printf("%d %d\n", i, dist[i]);

    return 0;
}
