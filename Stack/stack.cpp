
#include<iostream>
using namespace std;

class Stack{
	private:
		int top;
		int arr[5];
	
	public:
		Stack(){
			top=-1;
			for(int i=0; i<5; i++){
				arr[i]=0;
			}
		}
		bool isEmpty(){
			if(top==-1)
				return true;
			else
			 	return false;
			
		}
		bool isFull(){
			if(top==4)
				return true;
			else
				return false;
		}
		void Push(int val){
			if(isFull())
				cout<<"Stack overfull";
			else
				top++;
				arr[top] = val;
		}
		int Pop(){
			if(isEmpty()){
				cout<<"Stack Underflow"<<endl;
				return 0;
			}
			else{
				int popvalue = arr[top];
				arr[top]=0;
				top--;
				return popvalue;
			}
			}
		
		int count (){
			return (top+1);
		}
		
		int Peek(int pos){
			if(isEmpty()){
				cout<<"Stack Underflow";
				return 0;
			}
			else
				return arr[pos];
		}
		void change(int position, int value){
			arr[position]=value;
			cout<<"Value change at location"<<endl;
		}
		void Display(){
			cout<<"All values int the Stack are "<<endl;
			for(int i=4; i>=0; i--){
				cout<<arr[i]<<" "<<endl;
			}
		}
};

//=====================

int main(){
	Stack s1;
	int option,position,value;
	
	do{
		cout<<"\nWhat operation do you want to perform: "<<endl;
		cout<<"1. Push()"<<endl;
		cout<<"2. Pop()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. Peek()"<<endl;
		cout<<"6. count()"<<endl;
		cout<<"7. Change()"<<endl;
		cout<<"8. Display()"<<endl;
		cout<<"9. Clear Screen"<<endl<<endl;
		
		cin>>option;
		switch(option){
			case 1:
				cout<<"Enter an item to puch in the stack: "<<endl;
				cin>>value;
				s1.Push(value);
				break;
			case 2:
				cout<<"Pop function Calles - Popped value"<<endl;
				break;
			case 3:
				if(s1.isEmpty())
					cout<<"Stack is Empty"<<endl;
				else
					cout<<"Stack is not Empty"<<endl;
				break;
			case 4:
				if(s1.isFull())
					cout<<"Stack is full"<<endl;
				else
					cout<<"Stack is not Full"<<endl;
				break;
			case 5:
				cout<<"Enter position of item you want to Peek: "<<endl;
				cin>>position;
				cout<<"Peek function Called -  value at position "<<position<< " is "<<endl<<s1.Peek(position)<<endl;
				break;
			case 6:
				cout<<"Count function called - Number of items in the stack"<<s1.count()<<endl;
				break;
			case 7:
				cout<<"Change function called - "<<endl;
				cout<<"Enter position of item you want to change: ";
				cin>>position;
				cout<<endl;
				cout<<"Enter value of item you wnat to change: ";
				cin>>value;
				s1.change(position,value);
				break;
			case 8:
				cout<<"Display function called : "<<endl;
				s1.Display();
				break;
			case 9:
				system("cls");
				break;
			default:
				cout<<"Please enter Proper number";
		}
	}
	while(option!=0);
	
	
	return 0;
}
