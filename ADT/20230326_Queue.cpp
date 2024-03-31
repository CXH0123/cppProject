#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node {
    int  data;
    Node *next;
};
struct Queue {
    Node *head, *tail;
    int  count;
};
Queue *init() {
    Queue *queue = (Queue *)malloc(sizeof(Queue));

    queue->head = NULL;
    queue->tail = NULL;
    queue->count = 0;
    return queue;
}


int isEmpty(Queue *queue) {
    if (queue->count == 0) {
        return 1;
    }
    return 0;
}


void inQueue(Queue *queue, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));

    newNode->next = NULL;
    newNode->data = data;
    if (isEmpty(queue) == 1) {
        queue->head = newNode;
        queue->tail = newNode;
        queue->count++;
        return;
    }else{
        queue->tail->next = newNode;
        queue->tail = newNode;
        queue->count++;
        return;
    }
}


void display(Queue *queue) {
    Node *temp = queue->head;

    while (temp) {
        printf("%4d", temp->data);
        temp = temp->next;
    }
    printf("\n");
    return;
}


void deQueue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("   Queue is empty\n");
    }
    Node *temp = queue->head;

    queue->head = queue->head->next;
    free(temp);
    queue->count--;
}


int main() {
    Queue *queue = init();

    inQueue(queue, 1);
    inQueue(queue, 2);
    inQueue(queue, 3);
    inQueue(queue, 4);
    deQueue(queue);
    deQueue(queue);
    deQueue(queue);
    deQueue(queue);
    deQueue(queue);
    display(queue);
    return 0;
}
