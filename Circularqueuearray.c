#include<stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void enqueue(int value) {
if((front == 0 && rear == SIZE - 1) || (rear == (front - 1) % (SIZE - 1))) {
printf("queue is full\n");
}
else
{
rear = (rear + 1) % SIZE;
queue[rear] = value;
if(front == -1) front = rear;
}
}
void dequeue() {
if(front == -1) {
printf("queue is empty\n");
} 
else 
{
printf("deleted element: %d\n", queue[front]);
if(front == rear) front = rear = -1;
else front = (front + 1) % SIZE;
}
}
void search(int value) 
{
if(front == -1) {
printf("queue is empty, cannot search elements.\n");
} 
else 
{
for(int i = front; i != rear; i = (i + 1) % SIZE) {
if(queue[i] == value) {
printf("entered %d found at index %d.\n", value, i);
return;
}
}
printf("element %d not found in the queue.\n", value);
}
}
void display() 
{
if(front == -1) {
printf("queue is empty\n");
} 
else 
{
printf("queue elements: ");
for(int i = front; i != rear; i = (i + 1) % SIZE) {
printf("%d ", queue[i]);
}
printf("%d ", queue[rear]);
printf("\n");
}
}
int main() 
{
int choice, value;
do
{
printf("1.enqueue \n 2.dequeue \n 3.search \n 4.exit \n 5.display \n enter your choice: ");
scanf("%d", &choice);
switch(choice) 
{
case 1:
printf("enter the value to be entered: ");
scanf("%d", &value);
enqueue(value);
break;
case 2:
dequeue();
break;
case 3:
printf("enter element you want to search: ");
scanf("%d", &value);
search(value);
break;
case 4:
return 0;
case 5:
display();
break;
default:
printf("no choice found\n");
}
} 
while(choice != 4);
return 0;
}