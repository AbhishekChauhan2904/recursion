#include<bits/stdc++.h>
using namespace std;
void tow(int n,char src,char des,char hel){
	if(n>0){
		tow(n-1,src,hel,des);
		cout<<src<<" "<<des<<endl;
		tow(n-1,hel,des,src);
	}
}
int main(){
	int n;
	cin>>n;
	tow(n,'a','b','c');
	return 0;
}