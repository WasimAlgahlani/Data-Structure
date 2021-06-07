#include<iostream>
#include<cstring>
#include<conio.h>
#include"array.h"
#include"stack1.h"
#include"queue.h"
#include"circular queue.h"
#include"SLL.h"
#include"DLL.h"
#include"linkedStack.h"
#include"linkedQueue.h"
using namespace std;
int ch;
void list();                  //To choose from
void array();                //To work with arrays
void stackDs();             //To choose type of stack
void stackArray();         //To work with stack using arrays
void stackLinked();       //To work with stack using linkedlist
void queueDs();          //To choose type of queue
void linear();          //To work with linear queue
void circular();       //To work with circular queue
void queueLinked();   //To work with queue using linkedlist
void linkedDs();     //To choose type of linkedlist
void SLLDs();       //To work with single linkedlist
void DLLDs();      //To work with double linkedlist
main(){
char choice;
while(1){
	list();  //call tht function list
	choice=_getch();
	system("cls");  //clear the screen
	switch(choice){
    case 'A': case 'a': array();break;
	case 'S': case 's': stackDs();break;
	case 'Q': case 'q':	queueDs();break;
	case 'L': case 'l':linkedDs();break;
	case 27:exit(0);	
	default : cout<<"\nNot a choice.\n";
	system("pause");    //pause the screen
	}
}
system("cls");
}

//function to show a list to choose from
void list(){
	system("cls");
cout<<"Enter A or a to work with arrays.";	
cout<<"\nEnter S or s to work with stack.";
cout<<"\nEnter Q or q to work with queue.";
cout<<"\nEnter L or l to work with linkedlist.";
cout<<"\nPress esc to exit.";
cout<<"\n\n\nEnter your choice : ";
}

//function used to work with arrays
void array(){
	system("cls");
int arr[MAXSIZE] , i ;
cout<<"Enter the size of the array : ";
cin>>size;
if(size>MAXSIZE){
size=MAXSIZE
;
for(i=0;i<size;i++){
cout<<"\nEnter element number "<<i+1<<" : ";
cin>>arr[i];}}
else if(size<MAXSIZE && size>0){
for(i=0;i<size;i++){
cout<<"\nEnter element number "<<i+1<<" : ";
cin>>arr[i];}}
else if(size<1){
cout<<"\nError...Size can not be equals to or less than a zero.\n";
system("pause");
return;
}
system("cls");
do{
cout<<"1-Add to end.\n2-Add to any position.\n3-Add to begining.\n4-Delete from end.\n5-Delete from any position.\n6-Delete from begining.\n7-Search for an element.\n8-Print the elements of the array.\n0-Return to main list.\n\n\nEnter your choice : ";
cin>>ch;
system("cls");
switch(ch){
	case 1:addToEnd(arr);
	break;
	case 2:addToAnyPosition(arr);
	break;
	case 3:addToFirst(arr);
	break;
	case 4: deleteFromEnd(arr);
	break;
	case 5:deleteFromAnyPosition(arr);
	break;
	case 6: deleteFromBegining(arr);
	break;
	case 7:search(arr);break;
	case 8:printAll(arr);break;
	case 0:return;
	default :cout<<"\nNot an option.\n";
}
system("pause");
system("cls");	
}while(1);}

//function used to choose type of stack
void stackDs(){
do{
cout<<"1-To use stack using arrays.\n2-To use stack using linkedlist\n0-To return.\n\n\nEnter your choice : ";
cin>>ch;
system("cls");
switch(ch){
	case 1:
		stackArray();
	break;
	case 2:
		stackLinked();
	break;
		case 0:return;
	default :cout<<"\nNot an option.\n";
}
system("pause");
system("cls");	
}while(1);}

//function used to work with stack using arrays
void stackArray(){
stack<int>s;
int el;
do{
cout<<"1-Insert\n2-delete.\n3-search for an element.\n4-Get the last element inserted.\n5-Print the elements of the stack.\n0-Return to main list.\n\n\nEnter your choice : ";
cin>>ch;
system("cls");
switch(ch){
	case 1:
		cout<<"Enter the element you want to insert : ";
		cin>>el;
		s.push(el);
	break;
	case 2:
	    s.pop();
	break;
	case 3:
		cout<<"Enter the element you want to search for : ";
		cin>>el;
		if(s.search(el))
		cout<<"Found.\n";
		else
		cout<<"Not found.\n";
	break;
	case 4: 
	s.getTop();
		break;
	case 5:
		cout<<"The elements of the stack : \n";
		s.print();
	break;
	case 0:return;
	default :cout<<"\nNot an option.\n";
}
system("pause");
system("cls");	
}while(1);}	

//function used to work with stack using linkedlist
void stackLinked(){
LinkedStack lS;
int el;
do{
cout<<"1-Insert\n2-delete.\n3-Get the last element inserted.\n4-Get the number of elements of the stack.\n5-Print the elements of the stack.\n0-Return to main list.\n\n\nEnter your choice : ";
cin>>ch;
system("cls");
switch(ch){
	case 1:
		cout<<"Enter the element you want to insert : ";
		cin>>el;
		lS.push(el);
	break;
	case 2:
	    lS.pop();
	break;
	case 3:
	lS.getTop();
		break;
		case 4:
		lS.numberOfElements();
	break;
	case 5:
		lS.display();
	break;
	case 0:return;
	default :cout<<"\nNot an option.\n";
}
system("pause");
system("cls");	
}while(1);}	

//function used to choose type of queue
void queueDs(){
do{
cout<<"1-To use linear queue\n2-To use circular queue.\n3-To use queue using linkedlist\n0-To return.\n\n\nEnter your choice : ";
cin>>ch;
system("cls");
switch(ch){
	case 1:
		linear();
	break;
	case 2:
		circular();
	break;
	case 3:
		queueLinked();
	break;
		case 0:return;
	default :cout<<"\nNot an option.\n";
}
system("pause");
system("cls");	
}while(1);}

//To work with linear queue
void linear(){
Queue<int>q;
int el , holder;
do{
cout<<"1-Insert\n2-delete.\n3-Get the number of elements.\n4-Get the deleted element.\n5-Print the elements.\n0-Return to main list.\n\n\nEnter your choice : ";
cin>>ch;
system("cls");
switch(ch){
	case 1:
		cout<<"\nEnter an element : ";
		cin>>el;
		q.enqueue(el);
	break;
	case 2:
		q.enqueue(holder);
	break;
	case 3:
			cout<<"The number of elements in this linear queue is : ";
			q.numberOfElements();
			cout<<endl;
	break;
	case 4:
cout<<"The deleted element is : "<<holder<<endl;
		break;
	case 5:
		q.print();
	break;
	case 0:return;
	default :cout<<"\nNot an option.\n";
}
system("pause");
system("cls");	
}while(1);}

//To work with circular queue
void circular(){
CircularQueue<int>cQ;
int el , holder;
do{
cout<<"1-Insert\n2-delete.\n3-Get the number of elements.\n4-Get the deleted element.\n5-Print the elements.\n0-Return to main list.\n\n\nEnter your choice : ";
cin>>ch;
system("cls");
switch(ch){
	case 1:
		cout<<"Enter an element : ";
		cin>>el;
		cQ.enqueue(el);
	break;
	case 2:
		cQ.dequeue(holder);
	break;
	case 3:;
			cout<<"The numbers of the element in this circular queue is : "<<cQ.numberOfElements()<<endl;
	break;
	case 4: ;
cout<<"The deleted element is : "<<holder<<endl;
		break;
	case 5:
		cQ.print();
	break;
	case 0:return;
	default :cout<<"\nNot an option.\n";
}
system("pause");
system("cls");	
}while(1);}

//To work with queue using linkedlist
void queueLinked(){
LinkedQueue lQ;
int el;;
do{
cout<<"1-Insert\n2-delete.\n3-Get the number of elements.\n4-Print the elements.\n0-Return to main list.\n\n\nEnter your choice : ";
cin>>ch;
system("cls");
switch(ch){
	case 1:
		cout<<"Enter an element : ";
		cin>>el;
		lQ.enqueue(el);
	break;
	case 2:
		lQ.dequeue();
	break;
	case 3:
			lQ.numberOfElements();
	break;
	case 4:
		lQ.display();
	break;
	case 0:return;
	default :cout<<"\nNot an option.\n";
}
system("pause");
system("cls");	
}while(1);}

//function used to choose type of linkedlist
void linkedDs(){
do{
cout<<"1-To use single linkedlist.\n2-To use double linkedlist.\n0-To return.\n\n\nEnter your choice : ";
cin>>ch;
system("cls");
switch(ch){
	case 1:
		SLLDs();
	break;
	case 2:
		DLLDs();
	break;
		case 0:return;
	default :cout<<"\nNot an option.\n";
}
system("pause");
system("cls");	
}while(1);}

//function used to work with single linkedlist
void SLLDs(){
	SLL<int>s;
int el , p;
do{
cout<<"1-Add to first.\n2-Add to last.\n3-Add to Any position.\n4-Delete From first.\n5-Delete from last.\n6-Delete from any position.\n7-Print.\n0-Return to main list.\n\n\nEnter your choice : ";
cin>>ch;
system("cls");
switch(ch){
	case 1:
		cout<<"Enter an element(data) : ";
		cin>>el;
		s.insertToFirst(el);
	break;
	case 2:
		cout<<"Enter an element(data) : ";
		cin>>el;
		s.insertToEnd(el);
	break;
	case 3:
		cout<<"Enter the position : ";
		cin>>p;
		cout<<"\nEnter an element(data) : ";
		cin>>el;
		s.insertToAnyPos(el,p);
	break;
	case 4:
	s.deleteFromFirst();
		break;
	case 5:
		s.deleteFromEnd();
	break;
	case 6:
		cout<<"Enter the position of the node you want to delete : ";
		cin>>p;
		s.deleteFromAnyPos(p);
			break;
	case 7:
		s.display();
		cout<<endl;
	break;
	
	case 0:return;
	default :cout<<"\nNot an option.\n";}
system("pause");
system("cls");	
}while(1);}

//function used to work with double linkedlist
void DLLDs(){
	DLL<int>d;
int el , p;
do{
cout<<"1-Add to first.\n2-Add to last.\n3-Add to Any position.\n4-Delete From first.\n5-Delete from last.\n6-Delete from any position.\n7-Print.\n0-Return to main list.\n\n\nEnter your choice : ";
cin>>ch;
system("cls");
switch(ch){
	case 1:
		cout<<"Enter an element(data) : ";
		cin>>el;
		d.insertToFirst(el);
		cout<<endl;
	break;
	case 2:
		cout<<"Enter an element(data) : ";
		cin>>el;
		d.insertToEnd(el);
	break;
	case 3:
		cout<<"Enter the position : ";
		cin>>p;
		cout<<"\nEnter an element(data) : ";
		cin>>el;
		d.insertToAnyPos(el,p);
	break;
	case 4: 
	d.deleteFromFirst();
		break;
	case 5:
		d.deleteFromEnd();
	break;
	case 6:
		cout<<"Enter the position of the node you want to delete : ";
		cin>>p;
		d.deleteFromAnyPos(p);
	break;
	case 7:
		d.display();
		cout<<endl;
	break;
	case 0:return;
	default :cout<<"\nNot an option.\n";
}
system("pause");
system("cls");	
}while(1);}
