#include <bits/stdc++.h>
using namespace std;
struct Point {
    int i, j;
    Point(int i, int j) {
        this->i = i;
        this->j = j;
    }
};
void display(vector<Point> a) {
    for (auto p:a) {
        printf("(%d,%d) ", p.i, p.j);
    }
    cout << endl;
}


int main() {
    vector<Point> path;
    char maze[10][10] = {
        { '#', '#', '#', '#', '#', '#', '#' },
        { '#', '#', '.', '.', '.', '.', '#' },
        { '#', '#', '.', '#', '#', '#', '#' },
        { '#', '#', '.', '.', '.', '.', '#' },
        { '#', '.', '.', '#', '#', '#', '#' },
        { '#', '.', '.', '#', '#', '#', '#' },
        { '#', '#', '#', '#', '#', '#', '#' }
    };
    int i = 5, j = 1;

    while (i != 1 || j != 5) {
        if (maze[i - 1][j] == '.') {
            path.push_back(Point(i, j));
            maze[i][j] = '*';
            i--;
        }else if (maze[i + 1][j] == '.') {
            path.push_back(Point(i, j));
            maze[i][j] = '*';
            i++;
        }else if (maze[i][j - 1] == '.') {
            path.push_back(Point(i, j));
            maze[i][j] = '*';
            j--;
        }else if (maze[i][j + 1] == '.') {
            path.push_back(Point(i, j));
            maze[i][j] = '*';
            j++;
        }else {
            maze[i][j] = '#';
            i = path.back().i;
            j = path.back().j;
            path.pop_back();
        }
        display(path);
    }
    printf("Complete the maze!");
    return 0;
}
