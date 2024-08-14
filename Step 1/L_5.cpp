#include<bits/stdc++.h>
using namespace std;
//  Recursion 
//N to 1 -> i<1

int myCount = 1, sum = 0;
void OneToN(int N){                          // 1 to N
        if(N<1) return;
        OneToN(N-1);
        cout<<N<<endl;
}
void NameN(int i, int n){                    // Name n times
    if(i>n){
        return;
    }
    cout<<"Krish"<<endl;
    NameN(i+1,n);
}
void NToOne(int N){                   // N to 1
        if(N<1) return;
        cout<<N<<" ";
        NToOne(N-1);
}
void OneToN_Backtracking(int i,int n){       // 1 to N using backtracking
    if(i<1) return;
    OneToN_Backtracking(i-1,n);
    cout<<i<<endl;
}
void NToOne_Backtracking(int n){             // N to 1 using backtracking
    if(n<=0) return;
    cout<<n<<endl;
    NToOne_Backtracking(n-1);
}
void SumOfN(int i,int sum){                  // Sum of first N numbers
    if(i<1){
        cout<<"Sum = "<<sum;
        return;
    }
    cout<<i<<endl;
    SumOfN(i-1,sum+i);
}
int SumOfArmstrongNumbers(int N){
        long double sum = 0;
        if(N<1) return 0;
        sum = SumOfArmstrongNumbers(N-1) + (N*N*N);
        return sum;
}
int factorial(int N){
        long double fact = 0;
        if(N<1) return 1;
        fact = N * factorial(N-1);
}
int ReverseArray(int arr[],int start, int end){
    if(start>=end) return 0;
    swap(arr[start],arr[end]);
    ReverseArray(arr,start+1,end-1);
}
string revstr(string s){
        if(s.length() == 0) return "";
        return revstr(s.substr(1)) + s[0];
    }
string removealn(string s){
    transform(s.begin(),s.end(),s.begin(),::tolower);
    s.erase(remove_if(s.begin(), s.end(), [](char c){ 
    return !isalpha(c); 
    }),s.end());
    return s;
}
bool isPalindrome(string s) {
    s = removealn(s);
    return s == revstr(s);
}
int main(){
    int n =5;
    string s = "race 4432&^$ a *$&$& car";
    int arr[] = {1,2,3,4,5};
    cout << boolalpha << isPalindrome(s);
}