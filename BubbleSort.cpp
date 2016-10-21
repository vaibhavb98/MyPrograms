#include<iostream>
#include<stdlib.h>

using std::cout;
using std::endl;

void BubbleSort(int list[] , int size){
	
	for(int i = 0 ; i < size ; i++){
			
		for(int j = 0 ; j < size-i ; j++){
			
			if(list[j] < list[j-1]){
				
				int temp = list[j];
				list[j] = list[j-1];
				list[j-1] = temp;
				
			}
	
		}
		
	}
 	
}

int main(){
	
	srand(time(NULL));
	int n = rand()%10 + 1;
	int list[n];
	int i = 0;
	cout << "size = " << n << endl;
	while(i < n){
		
		list[i] = rand()%1000;
		cout << list[i] << "\t";
		i++;
		
	}
	
	cout << endl;
	BubbleSort(list , n);
	
	i = 0;
	while(i < n){
		
		cout << list[i] << "\t";
		i++;
		
	}
	
	return 0;
	
}
