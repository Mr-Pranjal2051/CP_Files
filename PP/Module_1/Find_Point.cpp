#include <iostream>
using namespace std;
int main() {
	int px,py,qx,qy,rx,ry;
	cin>>px>>py>>qx>>qy;
	rx=(qx-px);
	rx+=qx;
	ry=(qy-py);
	ry+=qy;
	cout<<rx<<" "<<ry<<endl;
	return 0;
}
