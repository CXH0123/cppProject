#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
#define INF    INT_MAX
void dijkstra(vector<vector<int> >& graph, int start) {
    int num_nodes = graph.size();
    vector<int> distances(num_nodes, INF);

    distances[start] = 0;
    vector<bool> visited(num_nodes, false);
    for (int _ = 0; _ < num_nodes; ++_) {
        int min_distance = INF;
        int min_index = -1;
        for (int i = 0; i < num_nodes; ++i) {
            if (!visited[i] && (distances[i] < min_distance)) {
                min_distance = distances[i];
                min_index = i;
            }
        }
        visited[min_index] = true;
        for (int j = 0; j < num_nodes; ++j) {
            if (!visited[j] && (graph[min_index][j] != 0) &&
                (distances[min_index] != INF) &&
                (distances[min_index] + graph[min_index][j] <
                 distances[j])) {
                distances[j] = distances[min_index] + graph[min_index][j];
            }
        }
    }
    for (int i = 0; i < num_nodes; ++i) {
        cout << "From:" << start << " To:" << i << " Length:" << distances[i] << endl;
    }
}


int main() {
    vector<vector<int> > graph = {
        { 0,  4, 0,  0,  0,  0, 0,  8, 0 },
        { 4,  0, 8,  0,  0,  0, 0, 11, 0 },
        { 0,  8, 0,  7,  0,  4, 0,  0, 2 },
        { 0,  0, 7,  0,  9, 14, 0,  0, 0 },
        { 0,  0, 0,  9,  0, 10, 0,  0, 0 },
        { 0,  0, 4, 14, 10,  0, 2,  0, 0 },
        { 0,  0, 0,  0,  0,  2, 0,  1, 6 },
        { 8, 11, 0,  0,  0,  0, 1,  0, 7 },
        { 0,  0, 2,  0,  0,  0, 6,  7, 0 }
    };
    int start_node = 0;

    dijkstra(graph, start_node);
    return 0;
}
