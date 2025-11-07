#include <iostream>
using namespace std;

int arrSum(int arr[], int n){
	if(n==0)
	return 0;

	return arr[n-1]+arrSum(arr,n-1);
}


int main() {
	int n,arr[100];
	
	cout<<"ENter the size:";
	cin>>n;
	
	cout<<"Enter the elements of array:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int sum=arrSum(arr,n);
	cout<<"Sum of elements:"<<sum;
	
	return 0;
}
