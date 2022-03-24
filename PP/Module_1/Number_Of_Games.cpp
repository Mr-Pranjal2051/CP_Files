#include<iostream>
using namespace std;
int main(){
    int p,d,m,s,count=0,sum=0;
    cin>>p>>d>>m>>s;
    if(p>0&&s>0&&m>0&&d>0){
	if((p<s)/*&&(d<p)&&(m<p)*/){
	for(;sum<=s;count++){
	    sum+=p;
	    if(p-d>m)p-=d;
	    else p=m;
	}
	count--;
    }
    }
    cout<<count<<endl;
}
