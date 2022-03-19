#include <iostream>
using namespace std;
int main() {
	int a,b,i=0;
	cin>>a>>b;
	if(a<=b){
		for(i=1;3*a<=2*b;i++){
			a*=3;
			b*=2;
		}
	}
	cout<<i<<endl;
}
