#include<bits/stdc++.h>
using namespace std;

void displayArray(int arr[],int size, int index){
	//faith (index+ 1) to n  knows how to print
	if(index == size)
		return;
	cout << arr[index];
	displayArray(arr,size,index+1);
}

int main(){
	int n; 
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	displayArray(arr,n, 0);

}