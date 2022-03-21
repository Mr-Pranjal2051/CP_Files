#include <iostream>
using namespace std;
int main() {
	char d,m;
	cin>>d>>m;
	if(d=='R'|| m=='R') cout<<'R'<<endl;
	else if((d=='B' || m=='B') && ((d=='G'|| m=='G')||(d=='B'|| m=='B'))) cout<<'B'<<endl;
	else cout<<'G'<<endl;
}
