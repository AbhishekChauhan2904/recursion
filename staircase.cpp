#include<bits/stdc++.h>
using namespace std;
int stair(int n){
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}
	return (stair(n-1)+stair(n-2)+stair(n-3));

}
 int main(){
 	int n;
 	cin>>n;
 	int all=stair(n);
 	cout<<all<<endl;
 	return 0;
 }