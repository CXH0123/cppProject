#include<iostream>
#include<stdlib.h>
using namespace std;
//Á´¶ÓÁÐ 
struct Queue{
	int data[5];
	int MAXSIZE=5;
	int head,tail;
	int count;
};
Queue *init(){
	Queue *queue=(Queue*)malloc(sizeof(Queue));
	queue->head=0;
	queue->tail=0;
	queue->count=0;
	return queue;
}
int isEmpty(Queue *queue){
	if(queue->count==0) return 1;
	return 0;
}
int isFull(Queue *queue){
	if(queue->count==queue->MAXSIZE) return 1;
	return 0;
}
void inQueue(Queue *queue,int data){
	if(isFull(queue)==1){
		printf("   Queue is full\n");
		return;
	}
	queue->data[queue->tail]=data;
	queue->tail=(queue->tail+1)%queue->MAXSIZE;
	queue->count++;
	return;
}
void display(Queue *queue){
	int i=queue->head;
	while(queue->head!=queue->tail){
		printf("%4d",queue->data[i]);
		i=(i+1)%queue->MAXSIZE;
	}
	printf("\n");
	return;
}
int main(){
	Queue *q1=init();
	inQueue(q1,1);
	inQueue(q1,2);
	inQueue(q1,3);
	inQueue(q1,4);
	inQueue(q1,5);
	display(q1);
	return 0;
}
