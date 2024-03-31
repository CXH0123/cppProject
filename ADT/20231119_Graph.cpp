#include <iostream>
using namespace std;
struct Vertice{
    Vertice *next;
    int node;
};
struct Graph{
    Vertice *list[5];
    Graph(){
        for(int i=0;i<5;i++){
            this->list[i]=NULL;
        }
    }
};

void initGragh(Graph *g,int s[][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(s[i][j]){
                Vertice *pnew=(Vertice*)malloc(sizeof(Vertice));
                pnew->node=s[i][j];
                pnew->next=g->list[i];
                g->list[i]=pnew;
            }
        }
    }
}
int main(){
    int square[5][5] = {
        { 0, 1, 1, 0, 0 },
        { 1, 0, 1, 0, 0 },
        { 1, 1, 0, 1, 1 },
        { 0, 0, 1, 0, 1 },
        { 0, 0, 1, 1, 0 }
    };
}