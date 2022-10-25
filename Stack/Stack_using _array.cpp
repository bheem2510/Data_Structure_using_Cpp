//coded by github.com/bheem2510

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
				return 
