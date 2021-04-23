#include <bits/stdc++.h>
using namespace std;
int maxOfArray(int arr[], int size, int index){
	if(index == size -1)
		return arr[index];
	int misa = maxOfArray(arr,size,index +1);
	if(arr[index] > misa)
		return arr[index];
	else
		return misa;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	int res = maxOfArray(arr,n,0);
	cout<< res << endl;
}