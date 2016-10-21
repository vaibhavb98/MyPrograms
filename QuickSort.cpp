#include<iostream>
#include<stdlib.h>

using std::cout;
using std::cin;
using std::endl;

void quickSort(int list[] , int left , int right ){
	
	int i = left , j = right ;
	int temp;
	int pivot = list[(left + right)/2];
	//dividing list.
	while(i <= j){
		
		while(list[i] < pivot) i++;
		while(list[j] > pivot) j--;
		
		if(i <= j){
			
			temp = list[i];
			list[i] = list[j];
			list[j] = temp;
			i++;
			j--;
			
		}
		
	}
	//recurcion.
	if(left < j) quickSort(list , left , j);
	if(i < right) quickSort(list , i , right);
	
}

int main(){
	
	srand(time(NULL));
	int n;
	n = rand()%10 + 1;
	int list[n];
	cout << "size of list = " << n << endl;
	
	for(int i = 0 ; i < n ; i++ ){
		
		list[i] = rand()%1000;
		cout << "list[" << i << "] = " << list[i] << "\t";
		
	}
	
	quickSort(list , 0 , n-1);
	
	cout << endl;
	
	for(int i = 0 ; i < n ; i++ ){
		
		cout << "list[" << i << "] = " << list[i] << "\t";
		
	}
	
	return 0;
}
