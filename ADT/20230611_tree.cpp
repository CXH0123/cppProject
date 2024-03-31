#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int      d;
    TreeNode *l, *r;
};
class Tree {
public:
    TreeNode *node;
public:
    Tree() {}
    Tree(vector<int> data) {
        for (auto i:data) {
            this->insert(i);
        }
    }

    bool isEmpty() {
        if (this->node == NULL) {
            return true;
        }
        return false;
    }

    void insert(int d) {
        TreeNode *n = (TreeNode *)malloc(sizeof(TreeNode));

        n->d = d;
        n->r = NULL;
        n->l = NULL;

        TreeNode *t = this->node;

        if (isEmpty()) {
            this->node = n;
            return;
        }
        while (true) {
            if (t->d < n->d) {
                if (t->r != NULL) {
                    t = t->r;
                }else {
                    t->r = n;
                    break;
                }
            }else if (t->d > n->d) {
                if (t->l != NULL) {
                    t = t->l;
                }else {
                    t->l = n;
                    break;
                }
            }
        }
    }

    void show() {
        printf("Tree: ");
        this->display(this->node);
    }

    int find(int t) {
        TreeNode *temp = this->node;
        int i = 0;

        while (temp != NULL) {
            i++;
            if (temp->d > t) {
                temp = temp->l;
            }else if (temp->d < t) {
                temp = temp->r;
            }else{
                return i;
            }
        }
        return -1;
    }

    int findRec(TreeNode *t, int x) {
        if (t == NULL) {
            return 0;
        }
        if (t->d == x) {
            return 1;
        }else if (t->d < x) {
            return this->findRec(t->r, x) + 1;
        }else{
            return this->findRec(t->l, x) + 1;
        }
        return 0;
    }

private:
    void display(TreeNode *n) {
        if (isEmpty()) {
            return;
        }
        printf("%4d", n->d);
        if (n->l != NULL) {
            this->display(n->l);
        }
        if (n->r != NULL) {
            this->display(n->r);
        }
    }
};
int main() {
    vector<int> data;
    Tree *t = new Tree(data);

    t->insert(5);
    t->insert(2);
    t->insert(7);
    t->insert(6);
    t->insert(1);
    t->insert(10);
    t->show();
    printf("\n");
    cout << t->find(7) << " ";
}
