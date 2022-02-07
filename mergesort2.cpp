#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int start,int mid,int end){
	int m=mid-start+1;
	int n=end-mid;
	int c[m];
	int b[n];
	for(int i=0;i<m;i++){
		c[i]=a[start+i];
	}
	for(int j=0;j<n;j++){
		b[j]=a[mid+1+j];
	}
	int d=0,e=0,f=start;
	while(d<m&&e<n){
		if(c[d]<b[e]){
			a[f]=c[d];
			d++;
		}
		else{
			a[f]=b[e];
			e++;
		}
		f++;
	}
	while(d<m){
		a[f]=c[d];
		d++;
		f++;
	}
	while(e<n){
		a[f]=b[e];
		f++;
		e++;
	}
}
void mergesort(int a[],int start,int end){
	if(start>=end){
		return;
	}
	int mid=(start+end)/2;
	mergesort(a,start,mid);
	mergesort(a,mid+1,end);
	merge(a,start,mid,end);
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	mergesort(a,0,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}