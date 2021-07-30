#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int searchPallindrome(string s){
	int len = s.length();
//	int count = 0;
	for(int i=0;i<len;i++){
		if(s[i]!=s[len-i-1]){
			return 0;
		}
	}
	return 1;
}

int searchPallindrome2(string s){
	string s1=s;
	reverse(s1.begin(),s1.end());
	return(s1==s);
}

int main(){
    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	cout<<searchPallindrome2(s)<<endl;
    }
    return 0;
}
