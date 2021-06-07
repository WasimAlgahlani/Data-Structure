#include<iostream>
using namespace std;
class LinkedQueue{
struct Node{
	int data;
	Node*next;
};
private:
	int length;
	Node*rear;
	Node*front;
	
public:
	LinkedQueue(){
		front=NULL;
		rear=NULL;
		length=0;}
		
		bool isEmpty(){
			if(rear==NULL)
			return true;
			else
			return false;
		}
		
		void enqueue(int el){
			Node*newNode=new Node;
			if(newNode==NULL){
				cout<<"Overflow.\n";
				return;
			}
			if(rear==NULL){
				newNode->data=el;
				newNode->next=NULL;
				front=newNode;
				rear=newNode; 
			}
			else{
				newNode->data=el;
				newNode->next=NULL;
				rear->next=newNode;
				rear=newNode;
			}
			length++; 
			cout<<"Inserted successfully.\n";
		}
		
		void dequeue(){
			if(isEmpty()){
				cout<<"Queue is empty.\n";
				return;
			}
			if(front==rear){
				rear=NULL;
				front=NULL;
				delete(front);
			}
			else{
			Node*temp=front;
			front=front->next;
			temp->next=NULL;
			delete(temp);
			}
			cout<<"Deleted successfully.\n";
			length--;}
	             
			void display(){
					if(isEmpty())
			cout<<"Queue is empty.\n";
			else{
				Node*temp=front;
				cout<<"The data elements of the queue :\n";
				while(temp!=NULL){
					cout<<temp->data<<"   ";
					temp=temp->next;
				}}
				cout<<endl;}
				
				void numberOfElements(){
	           		cout<<"The number of elements in the queue is : "<<length<<"\n";
				   }



};
