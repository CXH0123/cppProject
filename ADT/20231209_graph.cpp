#include <iostream>
#define N 7
using namespace std;
struct Vertice {
    Vertice *next;
    int     node;
};
struct Graph {
    Vertice *list[5];

    Graph() {
        for (int i = 0; i < 5; i++) {
            this->list[i] = NULL;
        }
    }
};

void initGragh(Graph *g, int s[][N]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (s[i][j]) {
                Vertice *pnew = (Vertice *)malloc(sizeof(Vertice));
                pnew->node = j;
                pnew->next = g->list[i];
                g->list[i] = pnew;
            }
        }
    }
}


int main() {
    int square[N][N] = {
        { 0, 1, 0, 1, 0, 0, 0 },
        { 0, 0, 0, 1, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 1, 0, 0, 0, 0 },
        { 0, 0, 0, 1, 0, 1, 1 },
        { 0, 0, 0, 0, 0, 0, 1 },
        { 0, 0, 0, 0, 0, 0, 0 }
    };
    Graph *g = new Graph();

    initGragh(g, square);
    for (int i = 0; i < 5; i++) {
        Vertice *t = g->list[i];
        while (t != NULL) {
            cout << t->node << " ";
            t = t->next;
        }

        cout << endl;
    }
}
