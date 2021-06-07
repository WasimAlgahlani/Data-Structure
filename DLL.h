#include<iostream>
using namespace std;
template<class t>
class DLL{
private:
	t data;
	DLL*next;
	DLL*pre;
	DLL*head;
	
public:
    DLL(){
    head=NULL;
	}

void insertToFirst(t d){
DLL*newNode=new DLL;
if(newNode==NULL){
	cout<<"Error.\n";
	return;
}
else{
if(head==NULL)
{
newNode->data=d;
newNode->next=NULL;
newNode->pre=NULL;
head=newNode;
}
else
{
newNode->data=d;
head->pre=newNode;
newNode->pre=NULL;
newNode->next=head;
head=newNode;	
}cout<<"Inserted successfully.\n";}}


void insertToEnd(t d){
DLL*newNode=new DLL;
	if(newNode==NULL){
	cout<<"Error.\n";
	return;
}
newNode->data=d;
DLL*temp=head;
newNode->next=NULL;
newNode->pre=NULL;
if(head==NULL)
{
insertToFirst(d);
}
else
{
while(temp->next!=NULL){
temp=temp->next;}
temp->next=newNode;
newNode->pre=temp;
cout<<"Inserted successfully.\n";	
}}


void insertToAnyPos(t d , int pos){
	int c=0;
DLL*newNode=new DLL;
if(newNode==NULL){
	cout<<"Error.\n";
	return;
}
newNode->data=d;
DLL*temp=head;
newNode->next=NULL;
newNode->pre=NULL;
if((head==NULL && pos>0) || pos==1)
{
insertToFirst(d);
return;
}
while(c<pos-2 && temp->next!=NULL){
	temp=temp->next;
	c++;	
}
if(c==pos-2){
newNode->next=temp->next;
newNode->pre=temp;
temp->next=newNode;
cout<<"Inserted successfully.\n";}
else
cout<<"Out of range.\n";
}

void deleteFromFirst(){
if(head==NULL)
cout<<"Underflow.\n";
else{
	if(head->next==NULL){
		head=NULL;
		delete(head);
	}
	else{
	DLL*temp=head;
	head=head->next;
	head->pre=NULL;
	temp->next=NULL;
	delete(temp);
	}
	cout<<"Deleted successfully.\n";}}

void deleteFromEnd(){
if(head==NULL)
cout<<"Underflow.\n";
else if(head->next==NULL)
deleteFromFirst();
else{
	DLL*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->pre->next=NULL;
	temp->pre=NULL;
	delete(temp);
	cout<<"Deleted successfully.\n";
}	
}

void deleteFromAnyPos(int pos){
if(head==NULL)
cout<<"Underflow.\n";
else if((head->next==NULL && pos>0) || pos==1)
deleteFromFirst();
else{
    	int c=0;
	    DLL*temp=head;
	    DLL*prev=NULL;
		while(c<pos-1 && temp->next!=NULL){
			prev=temp;
		temp=temp->next;
		c++;
	}
	if(c==pos-1){
	prev->next=temp->next;
	temp->next->pre=temp->pre;
	temp->next=NULL;
	temp->pre=NULL;
	delete(temp);
	cout<<"Deleted successfully.\n";}
	else
	cout<<"Out of range.\n";	
}}

void display(){
	if(head==NULL)
	cout<<"Underflow.\n";
	else{
	DLL*temp=head;
	cout<<"The data in this double linkedlist :\n";
	while(temp!=NULL){
		cout<<temp->data<<"   ";
		temp=temp->next;}
	}
}};
