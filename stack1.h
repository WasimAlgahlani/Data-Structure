#include<iostream>
#include<cstring>
using namespace std;
const int SIZE1=100;
template <class t>
class stack{
	private:
	int top;
	t item[SIZE1];
	
	public:
		stack():top (-1){}
				
		void push(t element){
			if(top>=(SIZE1-1))
			cout<<"The stack is full.\n";
			else{
			top++;
			item[top]=element;
			cout<<"Inserted successfully.\n";}
		}
		
		bool isEmpty(){
			return top<0;
		}
		
	    int pop(){
			if(isEmpty())
			cout<<"Stack is empty.\n";
			else{
			top--;
			cout<<"Deleted successfully.\n";}
		}
		
		void pop(t&element){
				if(isEmpty())
			cout<<"Stack is empty.\n";
			else{
			top--;
			element=item[top];}
		}
		
		void getTop(){
			if(isEmpty())
			cout<<"Stack is empty.\n";
			else{
			cout<<"The last element inserted to the stack is : "<<item[top]<<"\n";}
			}	
			
			bool search(t element){
				int j=top;
				bool f=false;
			    for(;j>=0;j--)
			    if(element==item[j]){
			    f=true;
				break;}
				return f;
			}
			
		void print(){
			if(isEmpty())
			{
				cout<<"The stack is empty.";
			}
			else{
			int i=top;
		cout<<"[ ";
			while(i!=-1){
		cout<<item[i]<<" ";
			i--;	}
			cout<<"]";}
			cout<<endl;}
};
