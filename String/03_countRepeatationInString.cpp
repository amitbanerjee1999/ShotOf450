#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_duplicates(string s,int n){
	map<char, int> mp;
	for(char c: s){
		mp[c]++;
	}
	for(auto i=mp.begin();i!=mp.end();i++){
		if(i->second>1){
			cout<<i->first<<"Count- "<<i->second<<endl;
		}
	}
}

int main(){
	string s;
	cin>>s;
	int n=s.length();
	// int arr[256];
	// memset(arr,0,sizeof(arr));
	// for(char c: s)	arr[c-'a']++;
	
	// for(int i=0;i<256;i++){
	// 	if(arr[i]>1){
	// 		cout<<char('a'+i)<<"Count: "<<arr[i]<<endl;
	// 	}
	// }
	print_duplicates(s,n);
	return 0;
}
