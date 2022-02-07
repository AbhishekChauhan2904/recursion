#include <bits/stdc++.h>
using namespace std;

int subset(int a[],int length,int output[][20]){
  return subset(a,length,0,output);
}
int main() {
  int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) { 
    for( int j = 1; j <= output[i][0]; j++) { 
        cout << output[i][j] << " ";
    }
    cout << endl;
  }
}