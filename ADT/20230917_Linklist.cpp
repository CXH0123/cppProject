#include <iostream>
using namespace std;
template<class T>
struct Node {
    T    data;
    Node *next;
};
template<class T>
class Linklist {
public:
    Node<T> *head;
    int count;
    Linklist() {
        count = 0;
        head = NULL;
    }

    int isEmpty() {
        if (count == 0) { return 1; }
        return 0;
    }

    void insert(T pnew) {
        Node<T> *temp = (Node<T> *)malloc(sizeof(Node<T>));

        temp->data = pnew;
        temp->next = NULL;
        if (isEmpty()) {
            head = temp;
            count++;
            return;
        }
        count++;
        temp->next = head;
        head = temp;
    }

    void pop() {
        if (isEmpty()) {
            printf("list is empty");
            return;
        }
        count--;
        Node<T> *temp = head;

        head = head->next;

        free(temp);
    }

    void show() {
        if (isEmpty()) {
            printf("list is empty");
            return;
        }
        display();
    }

private:
    void display() {
        Node<T> *temp = head;

        for (int i = 0; i < count; i++) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main() {
    Linklist<int> *l1 = new Linklist<int>;

    l1->insert(23);
    l1->insert(11);
    l1->insert(5);
    l1->insert(13);
    l1->insert(324);
    l1->pop();
    l1->pop();
    l1->pop();
    l1->show();
    return 0;
}
