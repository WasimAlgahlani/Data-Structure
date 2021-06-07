#include<iostream>
using namespace std;
const int SIZE2=20;
template<class t>
class Queue{
private:
t queue[SIZE2];
int rear;
int front;
	
public:
Queue(){
	rear=-1;
	front=-1;
}	

bool isEmpty(){
	if(rear==-1 && front==-1)
	return true;
	else
	return false;
}

bool isFull(){
if(rear==SIZE2-1)
return true;
else 
return false;		
}

void enqueue(t item){
if(!isFull()){
	if(isEmpty()){
	front=0;}
	rear++;
	queue[rear]=item;}
        else  
		cout<<"\nThe queue is full.";	
}

void dequeue(t&holder){
	if(!isEmpty())
		if(front==rear){
		holder=queue[rear];
		rear=front=-1;}
		else{
		holder=queue[rear];
		front++;}
		else
		cout<<"\nThe queue is empty.";	
}

void numberOfElements(){
	if(isEmpty())
		cout<<"\nThe number of elements : 0.\n";
		else
	cout<<"\nThe number of elements : "<<(rear-front+1)<<endl;
}

void print(){
	if(isEmpty())
	cout<<"\nThe queue is empty.";
	else{	
int i;
i=front;
while(i<=rear){
	cout<<queue[i]<<"   ";
	i++;
}}
cout<<endl;	
}		
};

