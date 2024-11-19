
#include "intdllist.h"
#include "intdllnode.h"
#include <iostream>
#define EMPTY_LIST -1
using namespace std;

//Destructor Member Fn
intdllist::~intdllist()
{
for(intdllnode *p; !isEmpty(); head=p)
	{
	p=head->next;
	delete head;
	}
}

//AddToHead member fn
void intdllist :: addToHead(int el)
{
	intdllnode *a=new intdllnode(el);
	a->prev=nullptr;
		if(head !=nullptr) //If head is not empty
		{
			head->prev=a;
			a->next=head;
			head=a;
		}
		else head=tail=new intdllnode(el); //If empty, create node
}

//AddToTail member fn
void intdllist :: addToTail(const int el)
{
	if(tail !=nullptr) //If tail is not empty
	{
		tail=new intdllnode(el, nullptr, tail);
		tail->prev->next=tail;
	}
	else head=tail=new intdllnode(el); //If empty, create a node
}


//DeleteFromHead member fn
void intdllist :: deleteFromHead()
{
	if(!isEmpty()) //If list is not empty
	{
			int el=head->info;
				if(tail==head){ //If there is 1 node
					delete head;
					head=tail=nullptr;
								}
				else{          //If there is more than 1 node
					head=head->next;
					cout<<"Deleted Element: "<<head->prev->info<<endl;
					delete head->prev;
					head->prev=nullptr;
					}
		}
	else throw(EMPTY_LIST); //If empty, throw exception 

}


//DeleteFromTail member fn
void intdllist :: deleteFromTail()
{
		if(!isEmpty()) //If list is not empty
		{
			int el=tail->info;
			if(head==tail){  //If there is 1 node
				delete tail;
				head=tail=nullptr;
						}
			else{            //If there is more than 1 node
				tail=tail->prev;
				cout<<"Deleted Element: "<<tail->next->info<<endl;
				delete tail->next;
				tail->next=nullptr;
			}
			
		}
	else throw(EMPTY_LIST); //If empty, throw exception 

}

//search and delete Isinlist member fn
void intdllist::isInList(int el)
{
	if(!isEmpty()){ //If list is not empty
		intdllnode *tmp;
		if(head->info==el) deleteFromHead(); //If info field of head=el
		else{					//If info field is not in the head
			for(tmp=head->next; tmp !=nullptr && tmp->info !=el; tmp=tmp->next);
				if (tmp !=nullptr){
					tmp->prev->next=tmp->next;
					if(tmp->next==nullptr) tmp->prev->next=nullptr;
						cout<<"Deleted contents: "<< tmp->info<< endl;
						delete tmp;
									}
			}
		
		}
		else throw(EMPTY_LIST);
	}
		    


//AddSorted member fn
void intdllist :: addSorted(int i)
	{
		intdllnode *a, *b;
		if(head==nullptr) head=tail=new intdllnode(i); //If head is empty
		else if(head==tail) //If there is 1 node
			if(i<=head->info) addToHead(i);
			else addToTail(i);
		else if(i >=tail->info) addToTail(i);
		else if(i <=head->info) addToHead(i);
		else{
			for(a=head, b=head->next; b !=nullptr && b->info <=i; a=a->next, b=b->next);
			intdllnode *tmp=new intdllnode(i, a, b);
			a->next=tmp;
			b->prev=tmp;
			tmp->next=b;
			tmp->prev=a;
		}
	}

//Print list
void intdllist :: printList()
{
	cout<<"The list is:";
	for(intdllnode *tmp=head; tmp !=nullptr; tmp=tmp->next)
	{
		cout<< tmp->info<<" ";
	}
	cout<<endl;
}

//Print Stack member fn (tail to head)
void intdllist :: printStack(){
	cout<< "The Stack is:";
	for(intdllnode *tmp=tail; tmp!=nullptr; tmp=tmp->prev){
		cout<<tmp->info<< " ";
	}
	cout <<endl;
}

//Print Queue member fn (head to tail)
void intdllist :: printQueue(){
	cout<<"The Queue is:";
	for(intdllnode *tmp=head; tmp!=nullptr; tmp=tmp->next)
	{
		cout <<tmp->info<< " ";
	}
	cout<<endl;
}


		
		

		

	
	

