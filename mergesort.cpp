#include<bits/stdc++.h>
using namespace std;
void maergesorting(int input1[],int size1,int input2[],int size2, int a[]){
	int i=0,j=0,k=0;
	while(i<size2&&j<size2){
	if(input1[i]<input2[j]){
		a[k]=input1[i];
		i++;
		k++;
	}
	else{
		a[k]=input2[j];
		j++;
		k++;

	}
}
while(i<size1){
	a[k]=input1[i];
	i++;
	k++;
}
while(j<size2){
	a[k]=input2[j];
	j++;
	k++;
}
}
 void mergesort(int a[],int n){
 	if(n<=1){
 		return ;
 	}
 	int mid=n/2;
 	int a1[500],a2[500];
 	int size1=mid,size2=n-mid;
 	for(int i=0;i<mid;i++){
         a1[i]=a[i];
 	}
 	int k=0;
 	for(int i=mid;i<n;i++){
 		a2[k]=a[i];
 	    k++;
 	}
 	mergesort(a1,size1);
 	mergesort(a2,size2);
 	maergesorting(a1,size1,a2,size2,a);
 }
int main(){
	int n;
	cin>>n;
	int * p=new int[n];
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	mergesort(p,n);
	for(int i=0;i<n;i++){
		cout<<p[i]<<" ";
	}
	cout<<endl;
	delete []p;
	return 0;
}