#include <iostream>
using namespace std;
int main() {
	int x,y,z,a,b,c,m,n;
	cin>>x>>y>>z>>a>>b>>c;
	if(x>a)m++;
	if(x<a)n++;
	if(y>b)m++;
	if(y<b)n++;
	if(z>c)m++;
	if(z<c)n++;
	cout<<m<<" "<<n<<endl;
}
