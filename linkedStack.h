#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*next;
};
class LinkedStack{
	private:
	int length;
	Node*top;
    public:
	LinkedStack(){
	top=NULL;
	length=0;
			  }
			  
		 bool isEmpty(){
		 	if(top==NULL)
		 	return true;
		 	else
		 	return false;
		 }

		void push(int el){
		Node *newNode = new Node;
			if(newNode==NULL){
	        cout<<"Error.\n";
	        return;}
        newNode->data=el;
        newNode->next = top;
        top=newNode;
        length++;  
		cout<<"Inserted successfully.\n";}
                           
        void pop(){
        		if(isEmpty())
			cout<<"Stack is empty.\n";
			else{
			if(top->next==NULL){
        	top=NULL;
	        delete(top);}
            else{
          	Node*temp=top;
        	top=top->next;
	        temp->next=NULL;
	        delete(temp);}
			cout<<"Deleted successfully.\n";
			length--;}
	        }  
	             
	        void getTop(){
			if(isEmpty())
			cout<<"Stack is empty.\n";
			else{
			cout<<"The last element inserted to the stack is : "<<top->data<<"\n";}}
			
	             
				void display(){
					if(isEmpty())
			cout<<"Stack is empty.\n";
			else{				
		cout<<"The elements of the stack : \n";
                Node*temp=top;
	            while(temp!=NULL){
		        cout<<temp->data<<"    ";
	           	temp=temp->next;}}
				   cout<<endl;}
	           	
	           	void numberOfElements(){
	           		cout<<"The number of elements in the stack is : "<<length<<"\n";
				   }
};		                
