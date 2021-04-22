// tower of honoi 

#include<bits/stdc++.h>
using namespace std;
void toh(int n, int tid1, int tid2, int tid3){
	if(n == 0)
		return;
	toh(n-1,tid1,tid3,tid2); // will print instruction till n-1
	cout << n << "[" << tid1 << " -> " << tid2 << "]" << endl;
	toh(n-1, tid3, tid2,tid1);


}
int main(){
	int n;
	int towerID1, towerID2,towerID3;
	cin >> n;
	cin >> towerID1 >> towerID2 >> towerID3;
	toh(n,towerID1,towerID2,towerID3);
}