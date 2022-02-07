#include<bits/stdc++.h>
using namespace std;
string getstring(int n){
	if(n==2){
		return "abc";
	}
	if(n==3){
		return "def";
	}
	if(n==4){
		return "ghi";
	}
	if(n==5){
		return "jkl";
	}
	if(n==6){
		return "mno";
	}
	if(n==7){
		return "pqrs";
	}
	if(n==8){
		return "tuv";
	}
	if(n==9){
		return "wxyz";
	}
	return " ";
}
int seq(int n,string s[]){
	if(n==0){
		s[0]="";
		return 1;
	}
	int lastdigit=n%10;
	int smallinteger=n/10;
	int samlloutput=seq(smallinteger,s);
	string option=getstring(lastdigit);
	for(int i=0;i<option.size();i++){
		for(int j=0;j<samlloutput;j++){
			s[(j)+((i+1)*samlloutput)]=s[j];
		}
	}
	int k=0;
	for(int i=0;i<option.size();i++){
		for(int j=0;j<samlloutput;j++){
			s[k]=s[k]+option[i];
			k++;
		}
	}
	return (samlloutput*option.size());
}
int main(){
	int n;
	cin>>n;
	string s[1000];
	int count=seq(n,s);
	for(int i=0;i<count;i++){
		cout<<s[i]<<endl;
	}
	return 0;
}