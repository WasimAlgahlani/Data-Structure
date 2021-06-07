#include<iostream>
using namespace std;
const int SIZE3=5;
template<class t>
class CircularQueue{
private:
t cQueue[SIZE3];
int rear;
int front;

public:	
CircularQueue(){
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
if(front==(rear+1)%SIZE3)
return true;
else 
return false;		
}

void enqueue(t item){
if(!isFull()){
	if(isEmpty()){
	front=0;}
	rear=(rear+1)%SIZE3;
	cQueue[rear]=item;
	cout<<"\nInserted successfully.\n";}
        else  
		cout<<"\nThe queue is full.\n";	
}

void dequeue(t&holder){
	if(!isEmpty()){
		if(front==rear){
		holder=cQueue[front];
		rear=front=-1;}
		else{
		holder=cQueue[front];
		front=(front+1)%SIZE3;}
		cout<<"Deleted successfully.\n";}
		else
		cout<<"\nThe queue is empty.\n";	
}

int numberOfElements(){
	if(isEmpty())
        return 0;
		else{
			if(front>rear)
			return SIZE3-front-rear+1;
			else
			return rear-front+1;}
}

void print(){
if(isEmpty())
cout<<"\nThe queue is empty.";
else{	
int i=front , j=0;
cout<<"The elements are :\n";
while(j<numberOfElements()){
cout<<cQueue[i]<<"   ";
    i=(i+1)%SIZE3;
    j++;
	}
cout<<endl;	
}}
};
