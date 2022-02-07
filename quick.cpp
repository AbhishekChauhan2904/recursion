#include <iostream>
using namespace std; 
int partitionArray(int input[], int start, int end) { 
    int pivot = input[start];
    int count = 0;
    for(int i = start+1; i <= end; i++) {
        if(input[i] <= pivot) {
            count++;
        }
    }
    int pivotIndex = start + count;
    swap(input[start],input[pivotIndex]);
      int i = start, j = end;
    while(i <= pivotIndex && j >= pivotIndex) {
        if(input[i] <= pivot) {
            i++;
        }
        else if(input[j] > pivot) {
            j--;
        }
        else{
            swap(input[i],input[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quickSort(int input[], int start, int end) {
    if(start >= end) {
        return;
    }
    int pivotIndex = partitionArray(input, start, end);
    quickSort(input, start, pivotIndex-1);
    quickSort(input, pivotIndex+1, end);
} int main(){
 	int n;
 	cin>>n;
 	int a[n];
 	for(int i=0;i<n;i++){
 		cin>>a[i];
 	}
 	quickSort(a,0,n-1);
 	for(int i=0;i<n;i++){
 		cout<<a[i]<<" ";
 	}
 	cout<<endl;
 	return 0;
 }