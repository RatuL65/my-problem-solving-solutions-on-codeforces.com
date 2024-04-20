//============================================================================
//problem link:http://codeforces.com/problemset/problem/122/A
// Name        : .cpp
// Author      : mohand sakr
// Version     :2.0
// Copyright   : use it under your responsibility
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
bool flag=0;
int arr[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
 for(int i=0;i<14;i++){
	 if(n%arr[i]==0){
		 flag=true;
	 }
 }
 if(flag)
cout<<"YES";
else
	cout<<"NO";
return 0;
}



