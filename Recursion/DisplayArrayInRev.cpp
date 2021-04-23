#include <bits/stdc++.h>
using namespace std;
void displayArrayInRev(int arr[], int size, int index){
	if(index == size )
		
		return;
	displayArrayInRev(arr, size, index + 1);
	cout<< arr[index] << "  ";
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i< n; ++i){
		cin >> arr[i];
	}
	displayArrayInRev(arr,n,0);
}