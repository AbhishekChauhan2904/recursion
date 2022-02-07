#include<bits/stdc++.h>
using namespace std;
 int binaryhelp(int a[],int start,int end,int x){
 	if(start>end){
 		return -1;
 	}
 	int mid=(start+end)/2;
 	if(x==a[mid]){
 		return mid;
 	}
 	else if(a[mid]>x){
 		return binaryhelp(a,start,mid-1,x);
 	}
 	else{
 		return binaryhelp(a,mid+1,end,x);
 	}
 }
int binary(int a[],int end,int x){
	int ans;
	ans=binaryhelp(a,0,end-1,x);
	return ans;
}
 int main(){
 	int n;
 	cin>>n;
 	int a[n];
 	for(int i=0;i<n;i++){
 		cin>>a[i];
 	}
 	int x;
 	cin>>x;
 	int numb=binary(a,n-1,x);
   cout<<numb<<endl;
   return 0;
 }