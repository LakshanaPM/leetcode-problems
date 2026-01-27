class Solution {
    static final int MOD = 1_000_000_007;

    public int minDistance(long dist[], boolean visited[], int V) {
        long min = Long.MAX_VALUE;
        int min_index = -1;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && dist[v] <= min) {
                min = dist[v];
                min_index = v;
            }
        }
        return min_index;
    }

    public int dijkstra(long graph[][], int src, int V) {
        long[] dist = new long[V];
        long[] ways = new long[V];
        boolean[] visited = new boolean[V];

        for (int i = 0; i < V; i++) {
            dist[i] = Long.MAX_VALUE;
            ways[i] = 0;
        }

        dist[src] = 0;
        ways[src] = 1;

        for (int count = 0; count < V - 1; count++) {
            int u = minDistance(dist, visited, V);
            visited[u] = true;

            for (int v = 0; v < V; v++) {
                if (!visited[v] && graph[u][v] != Long.MAX_VALUE) {

                    long newDist = dist[u] + graph[u][v];

                    if (newDist < dist[v]) {
                        dist[v] = newDist;
                        ways[v] = ways[u];
                    }
                    else if (newDist == dist[v]) {
                        ways[v] = (ways[v] + ways[u]) % MOD;
                    }
                }
            }
        }
        return (int) (ways[V - 1] % MOD);
    }

    public int countPaths(int n, int[][] edges) {
        long[][] graph=new long[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                graph[i][j]=Long.MAX_VALUE;
            }
            graph[i][i]=0;
        }
        for(int i=0;i<edges.length;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int time=edges[i][2];
            graph[u][v]=time;
            graph[v][u]=time;
        }
        return dijkstra(graph,0,n);
    }
}