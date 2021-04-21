//math power fastest method to find x^y using recursion

#include<bits/stdc++.h>
using namespace std;
int fastPower(int x, int y){
	if(y == 0)
		return 1;
	int xpnb2 = fastPower(x, y/2);
	int xpn = xpnb2 * xpnb2;
	if( y %2 != 0){
		return xpn * x;
	}
	else
		return xpn;
}
int main(){
	int x,y;
	cin >> x >> y;
	int res = fastPower(x,y);
	cout << res;
}