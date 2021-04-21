// print 1 to n in increasing order and decreasing
#include<bits/stdc++.h>
using namespace std;
void printIncreasing(int n){
	if(n == 0)
		return;
	printIncreasing(n-1);
	cout<< n << " " ;
}
void printDecreasing(int n){
	if(n == 0)
		return;
	cout << n <<" ";
	printDecreasing(n-1);
}
int main(){
	cout<< "enter a number" << endl;
	int n;
	cin >> n;
	printIncreasing(n);
	cout<<endl;
	printDecreasing(n);

}
