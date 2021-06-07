#include<iostream>
using namespace std;
const int MAXSIZE=10;
int size;

void addToEnd(int arr[]){
	if(size>=MAXSIZE)
	cout<<"The array is full.\n";
	else{
	cout<<"Add an element to the end : ";
	cin>>arr[size];
	size++;
	cout<<"\nAdded successfully\n.";}	
}
		
void addToFirst(int arr[]){
if(size>=MAXSIZE)
	cout<<"The array is full.\n";
	else
	{
	for(int i=size;i>=0;i--){
	arr[i+1]=arr[i];	
	}
	cout<<"Add an element to the first : ";
	cin>>arr[0];
	size++;
	cout<<"\nAdded successfully\n.";
		}}

void addToAnyPosition(int arr[]){
	int in;
	if(size>=MAXSIZE)
	cout<<"The array is full.\n";
	else
	{
	cout<<"Enter the position you want to add the element to  : ";
	cin>>in;
	if(in>(size+1) || in<0)
		cout<<"\nCan not do that.\n";
		else{
		if(in==size+1)
		addToEnd(arr);
		else if(in==0)
		addToFirst(arr);
		else{
	for(int i=size;i>in;i--){
	arr[i]=arr[i-1];}	
	cout<<"\n\nAdd an element to the position number "<<in<<" : ";
	cin>>arr[in];
	size++;
	cout<<"\nAdded successfully\n.";}}
		}}

void deleteFromEnd(int arr[]){
	if(size>0){
		size--;
		cout<<"Deleted successfully\n.";
	}
    else
    cout<<"The array is empty.\n";
}

void deleteFromBegining(int arr[]){
	if(size>0){
		for(int i=0;i<size;i++)
		arr[i]=arr[i+1];
		size--;
		cout<<"Deleted successfully\n.";
	}
    else
    cout<<"The array is empty.\n";
}

void deleteFromAnyPosition(int arr[]){	
     int in;
	if(size>0){
		cout<<"Enter the position you want to delete the element from  : ";
		cin>>in;
		if(in>size || in<0)
		cout<<"\nCan not do that.\n";
		else{
		if(in==size-1)
		deleteFromEnd(arr);
		else if(in==0)
		deleteFromBegining(arr);
		else{
		for(int i=in-1;i<(size-1);i++)
		arr[i]=arr[i+1];
		size--;
		cout<<"\nDeleted successfully\n.";}}
	}
    else
    cout<<"The array is empty.\n";
}

void search(int arr[]){
	int item , flag=0;
		if(size>0){
	cout<<"Enter the element you want search for : ";
	cin>>item;
	for(int i=0;i<size;i++){
		if(item==arr[i]){
		flag++;
		break;}
	}
	if(flag>0)
	cout<<"Found.\n";
	else
	cout<<"Not found.\n";
}
else
    cout<<"The array is empty.\n";
}

void printAll(int arr[]){
	cout<<"The elements of the array : \n";
	for(int i=0;i<size;i++)
	cout<<arr[i]<<"   ";
	cout<<endl;
}
