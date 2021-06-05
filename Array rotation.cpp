#include <iostream>
using namespace std;
void rotate(int arr[],int d,int n){
	int i=d;
	int k=d;
	int j=0;
	while(i<n){
		cout<<arr[i];
		i++;
	}
	while(j<k){
		cout<<arr[j];
		j++;
	}
}

int main() {
	int n,d;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter a number between 1 to n-1\n";
	cin>>d;
	rotate(arr,d,n);
	return 0;
}
