//Ainsley Pyle


#include "intdllnode.h"
#include "intdllist.h"
#include<iostream>
using namespace std;

int main()
{

		int input, A, B, C, D, E;
		intdllist obj;
	//Menu 1
	do{
        cout << "Pick one of the following:" << endl;
	    cout << "1. Create Simple (Unsorted) List" << endl;
	    cout << "2. Create Sorted List" << endl;
	    cout << "3. Create Queue (FIFO)" << endl;
	    cout << "4. Create Stack (LIFO)" << endl;
	    cout << "5.Exit Program "<<endl;
        cin >> A;
//Menu 1 Switch Statements
switch (A) {
		case 1:
		//Menu 2
		do{
		cout << "Pick one of the following:" << endl;
	    cout << "1. Enter an integer for insertion at head of list" << endl;
	    cout << "2. Enter integer for insertion at tail of list" << endl;
	    cout << "3. Display and delete integer from head of list" << endl;
	    cout << "4. Display and delete integer from tail of list" << endl;
	    cout << "5. Search for integer in list, and delete that node" <<endl;
		cout << "6. Display contents of list from head to tail, in order"<<endl;
		cout << "7. Exit Program"<<endl;
        cin >> B;
		//Menu 2 switch statements
			switch(B){
				case 1:
					cout<< "Input: ";
					cin>>input;
					obj.addToHead(input);
				break;
				case 2:
					cout <<"Input: ";
					cin >>input;
					obj.addToTail(input);
					break;
				case 3:
					try{
						obj.deleteFromHead();
						}
					catch(int i){
						cout << "ERROR NOT IN LIST" << endl;
						cout << "ERROR: "<< i<<endl;
								}
					break;
				case 4:
					try{
						obj.deleteFromTail();
						}
					catch(int i){
						cout << "ERROR NOT IN LIST" << endl;
						cout << "ERROR: "<< i<<endl;
								}
					break;
				case 5:
					try{
						cout<<"Input to search and delete: ";
						cin>>input;
						obj.isInList(input); }
					catch(int i){
						cout << "ERROR NOT IN LIST" << endl;
						cout << "ERROR: "<< i<<endl;
								}
					break;
				case 6:
					obj.printList();
					break;
				case 7:
					return 0;
				default:
					cout<<"Invalid selection"<<endl;
			}
		}
		while(B !=7);
		//Menu 3 
		case 2:
			do{
				cout<< endl;
				 cout << "Pick one of the following:" << endl;
	   			 cout << "1. Enter integer for sorted insertion(increasing order) into list" << endl;
	   			 cout << "2. Search and delete integer, if present in list" << endl;
	    		cout << "3. Display contents of sorted list of integers, in increasing order" << endl;
	    		cout << "4. Exit Program "<<endl ;
       			 cin >> C;	
				//Menu 3 switch statements
				switch(C){
					case 1:
						cout<<"Input: ";
						cin>>input;
						obj.addSorted(input);
						break;
					case 2:
						cout<<"Input: ";
						cin>> input;
						try{
						obj.isInList(input); }
						catch(int i){
						cout << "ERROR NOT IN LIST" << endl;
						cout << "ERROR: "<< i<<endl;
						}
						break;
					case 3:
						obj.printList();
						break;
					case 4:
						return 0;
					default:
					cout<<"Invalid selection"<<endl;
				}
			}
		while(C !=4);
		//Menu 4
		case 3:
		do{
		 cout << "Pick one of the following:" << endl;
	    cout << "1. ENQUEUE (Enter integer for insertion in queue)" << endl;
	    cout << "2. DEQUEUE (Display and delete integer from queue)" << endl;
	    cout << "3. Print Queue" << endl;
	    cout << "4. Exit Program "<<endl ;
        cin >> D;
		//Menu 4 switch statements
		switch(D){
			case 1:
			cout<<"Input: "<<endl;
			cin >>input;
			obj.addToHead(input);
			break;
			case 2:
				try{
				obj.deleteFromTail();}
				catch(int i){
						cout << "ERROR NOT IN LIST" << endl;
						cout << "ERROR: "<< i<<endl;
						}
				break;
			case 3:
				obj.printQueue();
				break;
			case 4:
				return 0;
			default:
					cout<<"Invalid selection"<<endl;
		}
		}
		while( D!=4);
	//Menu 5
	case 4:
		do{
		cout << "Pick one of the following:" << endl;
	    cout << "1. PUSH (Enter integer for intersertion into stack)" << endl;
	    cout << "2. POP (Display and delete integer from stack)" << endl;
	    cout << "3. Print Stack" << endl;
	    cout << "4. Exit Program "<<endl ;
		cin>>E;
		//Menu 5 switch statements
		switch(E){
			case 1:
				cout<< "Input: "<< endl;
				cin >>input;
				obj.addToTail(input);
				break;
			case 2:
				try{
				obj.deleteFromTail(); }
				catch(int i){
						cout << "ERROR NOT IN LIST" << endl;
						cout << "ERROR: "<< i<<endl;
						}
				break;
			case 3:
				obj.printStack();
				break;
			case 4:
			return 0;
			default:
					cout<<"Invalid selection"<<endl;
}
		
}
while(E !=4);

case 5:
	return 0;

//Default for menu 1
default:
	cout<<"Invalid selection"<<endl;
}
}
while (A !=5);



}

