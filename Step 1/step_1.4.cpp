#include<bits/stdc++.h>
using namespace std;

//      digits
void sumdigits(int n){
    int m,count=0,sum=0;
        while(n>0){
        m=n%10;
        cout<<"digit = "<<m<<endl;
        count++;
        sum+=n%10;
        n/=10;      //no. of limes dividing n/t is time complexity O(logt(n))
    }
    cout<<"sum = "<<sum<<endl;
    cout<<"count = "<<count<<endl;
    cout<<(log10(n)+1);
}

//      reverse a number
void rev_num(int n){
    int m,count=0,rev_num=0;
        while(n>0){
        m=n%10;
        rev_num=rev_num*10+m;
        n/=10;
    }
    cout<<"rev num = "<<rev_num<<endl;
}

//      palindrome
void palindrome(int n){
    int m,count=0,rev_num=0;
    int num=n;
        while(n>0){
        m=n%10;
        rev_num=rev_num*10+m;
        n/=10;
    }
    cout<<"org num = "<<num<<endl;
    cout<<"rev num = "<<rev_num<<endl;
    if(num==rev_num){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
}

//      Armstron Number
void armstrong(int n){
    int m,count=0,sum=0;
    int num=n;
        while(n>0){
        m=n%10;
        sum=sum+(m*m*m);
        n/=10;
    }
    cout<<"Armstrong Number = "<<sum;
}

//      Divisors
void divisors(int n){
    int i,num=n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<", ";
            i++;
        }
    }
}

//      Divisors list
void DivisorList(int n){
    vector<int> ls;
    for(int i=0;i<sqrt(n);i++){
        if(n%i==0){
            ls.push_back(i);}
        if((n/i) != 1){
            ls.push_back(n/i);}
        }
        sort(ls.begin(),ls.end());
        for(auto it : ls){
            cout<<(it)<<" ";
        }
    }

//      Prime No
void CheckPrime(int n){
    int flag=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            flag++;
    }
    }
    if(flag==2){
            cout<<"Prime";
        }
        else cout<<"Not prime ";
}

int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    sumdigits(n);
    rev_num(n);
    palindrome(n);
    armstrong(n);
    divisors(n); 
    CheckPrime(n);
    return 0;
}