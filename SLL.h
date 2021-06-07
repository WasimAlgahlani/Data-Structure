#include<iostream>
using namespace std;
template<class t>
class SLL{
private:
	t data;
	SLL*next;
	SLL*head;
	int length;	
	
public:
	SLL(){
head=NULL;
length=0;}

void insertToFirst(t d){
SLL*newNode=new SLL;
if(newNode==NULL){
	cout<<"\nError.";
	return;
}
newNode->data=d;
newNode->next=head;
head=newNode;
length++;
cout<<"Inserted successfully.\n";}

void insertToEnd(t d){
SLL*newNode=new SLL;
if(newNode==NULL){
	cout<<"\nError.";
	return;
}
SLL*temp=head;
newNode->data=d;
newNode->next=NULL;
if(head==NULL){
insertToFirst(d);
return;}
while(temp->next!=NULL){
	temp=temp->next;	
}
temp->next=newNode;
length++;
cout<<"Inserted successfully.\n";
}

void insertToAnyPos(t d , int pos){
SLL*newNode=new SLL;
if(newNode==NULL){
	cout<<"\nError.";
	return;
}
newNode->data=d;
SLL*temp=head;
newNode->next=NULL;
int c=0;
if((head==NULL && pos>0) || pos==1){
insertToFirst(d);
return;}
while(c<(pos-2) && temp->next!=NULL){
	temp=temp->next;
	c++;	
}
if(c==(pos-2)){
newNode->next=temp->next;
temp->next=newNode;
length++;
cout<<"Inserted successfully.\n";}
else
cout<<"\nOut of range.\n";
}

void deleteFromFirst(){
if(head==NULL)
cout<<"Underflow.";
else {
if(head->next==NULL){
	head=NULL;
	delete(head);
}
else{
	SLL*temp=head;
	head=head->next;
	temp->next=NULL;
	delete(temp);
	length--;}
cout<<"Deleted successfully.\n";}
}

void deleteFromEnd(){
if(head==NULL)
cout<<"Underflow.";
else if(head->next==NULL)
deleteFromFirst();
else{
	SLL*temp=head;
	SLL*prev=NULL;
	while(temp->next!=NULL){
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	delete(temp);
	length--;
	cout<<"Deleted successfully.\n";
}	
}

void deleteFromAnyPos(int pos){
if(head==NULL)
cout<<"Underflow.";
else if((head->next==NULL && pos>0) || pos==1)
deleteFromFirst();
else{
	int c=0;
	SLL*temp=head;
	SLL*prev=NULL;
	while(c<pos-1 && temp->next!=NULL){
		prev=temp;
		temp=temp->next;
		c++;
	}
	if(c==pos-1){
	prev->next=temp->next;
	temp->next=NULL;
	delete(temp);
	length--;
	cout<<"Deleted successfully.\n";}
	else
	cout<<"Out of range.\n";
	
}	
}

void display(){
	if(head==NULL){
	cout<<"Underflow.";
	return;}
	cout<<"The data in this single linkedlist :\n";
	SLL*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"   ";
		temp=temp->next;}
}};
