#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int checkRotationofString(string a,string b){
	if(a.length() != b.length())	return -1;
	string temp = a+b;
	if(temp.find(b) != string::npos)	return 1;
}

bool checkRotation(string s1,string s2){
	if(s1.size()!=s2.size())	return false;
	queue<char> q1;
	for(int i=0;i<s1.size();i++){
		q1.push(s1[i]);
	}
	queue<char> q2;
	for(int i=0;i<s2.size();i++){
		q2.push(s2[i]);
	}
	int k = s2.size();
	while(k--){
		char ch=q2.front();
		q2.pop();
		q2.push(ch);
		if(q2==q1)	return true;
	}
	return false;
}

int main(){
	string s1,s2;
	cin>>s1>>s2;
	if(checkRotationofString(s1,s2)==1) cout<<"Substring is present!!!"<<endl;
	else cout<<"Substring is not present!!!"<<endl;
	
	if(checkRotation(s1,s2)) cout<<"Substring is present!!!"<<endl;
	else cout<<"Substring is not present!!!"<<endl;
	return 0;
}
