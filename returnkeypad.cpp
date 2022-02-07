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
void printseq(int n,string s){
	if(n==0){
		cout<<s<<endl;
		return;
	}
	int lastdigit=n%10;
	int smallinter=n/10;
	string option=getstring(lastdigit);
	for(int i=0;i<option.length();i++){
		printseq(smallinter, option[i] + s);
	}
}
int main(){
int input;
cin>>input;
printseq(input,"");
return 0;
}