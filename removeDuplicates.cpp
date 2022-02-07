#include<bits/stdc++.h>
using namespace std;
void remove(char a[]){
	if(a[0]=='\0'||a[1]=='\0'){
		return;
	}
if(a[0]!=a[1]){
    remove(a+1);
}
else{
    int i;
    for(i=1;a[i]!='\0';i++){
        a[i-1]=a[i];
    }
    a[i-1]=a[i];
    remove(a);
}
}
 int main(){
 	char s[100];
 	cin>>s;
 	remove(s);
 	cout<<s<<endl;
 	return 0;
 }