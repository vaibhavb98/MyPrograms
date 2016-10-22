#include<iostream>
#include<stdlib.h>
#define MAX 20

using std::cout;
using std::endl;

struct Queues{
	
	private:
		int *arr = new int[MAX];
		int head = 0;
		int tail = 0;
	public:
		void add(int value){
			
			if(tail >= MAX) {
				
				cout << "Queue is completely filled." << endl;
				return;
				
			}
			arr[tail] = value;
			tail++;
			
		}
		void del(){
			
			if(head >= tail) {
				
				cout << "Queue is empty." << endl;
				return;
				
			}			
			head++;
			
		}
		void printQueue(){
			
			for(int i = head ; i < tail ; i++){
				
				cout << arr[i] << "\t";
				
			}
			
			cout << endl;
			
		}
	
};

int main(){
	
	srand(time(NULL));
	Queues line;
	int count = 0;
	while(count < 13){
		line.add(rand()%100+1);
		count++;
	}
	line.printQueue();
	line.del();
	line.printQueue();
	line.del();
	line.printQueue();
	line.add(1000);
	line.printQueue();
	return 0;
	
}
