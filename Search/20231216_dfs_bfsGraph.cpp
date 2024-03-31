#include <bits/stdc++.h>
using namespace std;
struct Node {
    int            n;
    vector<Node *> neighbor;
    Node(int n) : n(n) {}
};
vector<Node *> nv;
void dfs(Node *start) {
    if ((start == NULL) || (find(nv.begin(), nv.end(), start) != nv.end())) {
        return;
    }
    stack<Node *> ns;

    ns.push(start);
    nv.push_back(start);
    while (!ns.empty()) {
        Node *cur = ns.top();
        ns.pop();
        cout << cur->n << " ";
        for (auto n:cur->neighbor) {
            if (find(nv.begin(), nv.end(), n) == nv.end()) {
                nv.push_back(n);
                ns.push(n);
            }
        }
    }
}

void bfs(Node *start) {
    if ((start == NULL) || (find(nv.begin(), nv.end(), start) != nv.end())) {
        return;
    }
    queue<Node *> nq;

    nq.push(start);
    nv.push_back(start);
    while (!nq.empty()) {
        Node *cur = nq.front();
        nq.pop();
        cout << cur->n << " ";
        for (auto n:cur->neighbor) {
            if (find(nv.begin(), nv.end(), n) == nv.end()) {
                nv.push_back(n);
                nq.push(n);
            }
        }
    }
}
int main() {
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);

    n1->neighbor = { n2, n3 };
    n2->neighbor = { n3 };
    n3->neighbor = { n4 };
    n4->neighbor = { n2 };
    n5->neighbor = { n4 };
    bfs(n1);
    bfs(n2);
    bfs(n3);
    bfs(n4);
    bfs(n5);
    return 0;
}
