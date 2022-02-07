#include<bits/stdc++.h>
using namespace std;
int partation(int a[],int start,int end){
	int k=a[start];
	int count=0;
	for(int i= start+1 ; i <= end;i++){
		if(a[i]<=k){
			count++;
		}
	}
	int index=start+count;
	swap(a[start],a[index]);
	int i=start;int j=end;
	while(i<=index&&j>=index){
		if(a[i]<=k){
			i++;
		}
		else if(a[j]>k){
        j--;
		}
		else{
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	return index;
}
void quicksort(int a[],int si,int en){
	if(si>=en){
		return ;
	}
	int k=partation(a,si,en);
	quicksort(a,si,k-1);
	quicksort(a,k+1,en);
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}