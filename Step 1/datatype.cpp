#include<bits/stdc++.h>
using namespace std;
int main(){
	string dt;
    cout<<"enter dt : ";
	cin>>dt;  
	if(dt=="integer"){
		cout<<sizeof(int);}
	else if(dt=="long"){
		cout<<sizeof(long);
	}
	else if(dt=="double"){
		cout<<sizeof(double);
	}
	else if(dt=="float"){
		cout<<sizeof(float);
	}
	else if(dt=="character"){
		cout<<sizeof(char);
	}
	return 0;
}


    