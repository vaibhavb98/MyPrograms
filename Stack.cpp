#include<iostream>
#include<stdlib.h>
#define MAX 20

using std::cout;
using std::endl;

struct Stack{
	
	private:
		int arr[MAX];
		int top = 0;
	public:
		int getSize(){
			
			return top;
			
		}
		void printAll(){
			
			int i = 0;
			while(i < top){
				
				cout << arr[i] << "\t";
				i++;
				
			}
			
			cout << endl;
			
		}
		int getElementAt(int n){
			
			if(n > top){
				
				cout << "Position is out of bounds." << endl;
				return -1;
				
			}		
				
			return arr[n-1];
			
		}
		void pop(){
			
			top--;
			
		}
		void put(int value){
			
			arr[top] = value;
			top++;
			
		}
};

int main(){
	
	srand(time(NULL));
	Stack list;
	int i = 0;
	int size = rand()%10 + 1;
	while(i<size){
		list.put(rand()%100);
		i++;
	}
	list.printAll();
	list.pop();
	list.pop();
	list.printAll();
	cout << list.getElementAt(2) << endl;
	return 0;
	
}
