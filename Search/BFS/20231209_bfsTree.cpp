#include <bits/stdc++.h>
using namespace std;
struct Node {
    Node *right;
    Node *left;
    int  n;
};
Node * insert(Node *head, int n) {
    Node *p = (Node *)malloc(sizeof(Node));

    p->left = NULL;
    p->right = NULL;
    p->n = n;
    if (head == NULL) {
        head = p;
        return head;
    }

    if (n < head->n) {
        if (head->left == NULL) {
            head->left = p;
        }else{
            return insert(head->left, n);
        }
    }else if (n > head->n) {
        if (head->right == NULL) {
            head->right = p;
        }else{
            return insert(head->right, n);
        }
    }
}


void bfs(Node *head) {
    Node *t = head;
    queue<Node *> q;

    q.push(t);
    while (!q.empty()) {
        if (q.front()->left != NULL) {
            q.push(q.front()->left);
        }
        if (q.front()->right != NULL) {
            q.push(q.front()->right);
        }
        cout << q.front()->n<<" ";
        q.pop();
    }
}


int main() {
    Node *t1 = NULL;

    t1=insert(t1, 5);
    insert(t1, 8);
    insert(t1, 9);
    insert(t1, 11);
    insert(t1, 4);
    insert(t1, 3);
    insert(t1, 99);
    insert(t1, 6);
    insert(t1, 2);

    bfs(t1);
}
