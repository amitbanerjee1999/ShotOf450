#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void stringReverse(vector<char> &s){
    reverse(s.begin(),s.end());
}

void stringReverse(vector<char> &s){
	int len = s.size();
	for(int i=0;i<len/2;i++){
		swap(s[i],s[len-i-1]);
	}
}

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
        vector<char> S;
		char ch;
			for(int i=0;i<n;i++){
				cin>>ch;
				S.push_back(ch);
			}
		stringReverse(S);
		for(int i=0;i<n;i++){
			cout<<S[i]<<" ";
		}
        cout<<endl;
    }
    return 0;
}
