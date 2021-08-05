#include<bits/stdc++.h>
using namespace std;

int equalCount(string s){
	int n = s.size();
	int count0 = 0;
	int count1 = 0;
	int cnt = 0;
	for(int i=0;i<n;i++){
		if(s[i]=='0')	count0++;
		else count1++;
		if(count0==count1)	cnt++;
	}
	
	if(cnt==0)	return -1;
	return cnt;
}

int main(){
	string s;
	cin>>s;
	cout<<"the number of pairs of Equal number of 0 and 1 is :"<<equalCount(s)<<endl;
	return 0;
} 
