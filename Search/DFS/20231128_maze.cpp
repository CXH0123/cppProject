#include <iostream>
using namespace std;
bool flag = false;
bool search1(int i, int j, char maze[10][10]) {
    if (maze[i][j] == '.') {
        flag = 1;
        printf("Go to%d,%d\n", i, j);
        return 1;
    }
    return 0;
}


int search2(int i, int j, char maze[10][10]) {
    if (maze[i][j] == '*') {
        printf("Back to%d,%d\n", i, j);
        return 1;
    }
    return 0;
}


int main() {
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
        flag = 0;
        if (search1(i + 1, j, maze)) {
            maze[i][j] = '*';
            i++;
        }
        else if (search1(i, j + 1, maze)) {
            maze[i][j] = '*';
            j++;
        }
        else if (search1(i - 1, j, maze)) {
            maze[i][j] = '*';
            i--;
        }
        else if (search1(i, j - 1, maze)) {
            maze[i][j] = '*';
            j--;
        }
        if (!flag) {
            if (search1(i + 1, j, maze)) {
                maze[i][j] = '#';
                i++;
            }
            else if (search2(i, j + 1, maze)) {
                maze[i][j] = '#';
                j++;
            }
            else if (search2(i - 1, j, maze)) {
                maze[i][j] = '#';
                i--;
            }
            else if (search2(i, j - 1, maze)) {
                maze[i][j] = '#';
                j--;
            }
        }
    }
    maze[1][5] = '*';
    printf("Complete the maze!");
    return 0;
}
