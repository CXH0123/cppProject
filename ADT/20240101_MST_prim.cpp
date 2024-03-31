#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;
// 边的结构体
struct Edge {
    int to;
    int weight;
    Edge(int t, int w) : to(t), weight(w) {}
};
// 图的结构体
struct Graph {
    vector<vector<Edge> > adjList;
    Graph(int n) : adjList(n) {}
// 添加无向边
    void addEdge(int from, int to, int weight) {
        adjList[from].emplace_back(to, weight);
        adjList[to].emplace_back(from, weight);
    }
};
// Prim算法
vector<Edge> prim(const Graph& graph) {
    int n = graph.adjList.size();
    int startNode = 0;
// 存储已经访问的节点
    set<int> visited;
// 优先队列，用于存储边的权重和连接的节点
    priority_queue<pair<int, int>, vector<pair<int, int> >,
                   greater<pair<int, int> > > pq;
// 最小生成树的边
    vector<Edge> mstEdges;

// 将起始节点加入访问集合
    visited.insert(startNode);
// 将起始节点的所有边加入优先队列
    for (const Edge& edge : graph.adjList[startNode]) {
        pq.push({ edge.weight, edge.to });
    }
    while (!pq.empty()) {
        int weight = pq.top().first;
        int current = pq.top().second;
        pq.pop();
        if (visited.find(current) == visited.end()) {
            visited.insert(current);
            for (const Edge& edge : graph.adjList[current]) {
                if (visited.find(edge.to) == visited.end()) {
                    pq.push({ edge.weight, edge.to });
                }
            }
            mstEdges.emplace_back(current, weight);
        }
    }
    return mstEdges;
}


int main() {
// 创建带有权重的无向图
    Graph weightedGraph(5);

    weightedGraph.addEdge(0, 1, 2);
    weightedGraph.addEdge(0, 3, 3);
    weightedGraph.addEdge(1, 2, 4);
    weightedGraph.addEdge(1, 3, 4);
    weightedGraph.addEdge(1, 4, 3);
    weightedGraph.addEdge(2, 4, 5);
    weightedGraph.addEdge(3, 4, 1);
// 使用Prim算法求解最小生成树
    vector<Edge> result = prim(weightedGraph);

// 输出最小生成树的边及其权重
    for (const Edge& edge : result) {
        cout << "Edge: " << edge.to << " Weight: " << edge.weight << endl;
    }
    return 0;
}
