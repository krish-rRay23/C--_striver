#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=0;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<"  ";
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n){
        for(int i=0;i<=2*n;i++){
        for(int j=0;j<((i<=n)?(n-i):(i-n-1));j++){
            cout<<" ";
        }
        for(int j=0;j<((i<=n)?(2*i-1):(3*n-i-(i-n-1)));j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern10(int n){
    pattern1(n);
    pattern5(n);
}
void pattern11(int n){
    for(int i=0;i<n;i++){
        int start;
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
void pattern12(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*n-1; j++){
            if(j <= i || j >= 2*n-i){
                cout << min(j, 2*n-j);
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void pattern13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}
void pattern14(int n){
    char c='A';
    for(int i=1;i<=n;i++){
        for(char j=65;j<65+i;j++){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
}
void pattern15(int n){
    char c='A';
    for(int i=1;i<=n;i++){
            for(char j=65;j<65+n-i+1;j++){
            cout<<j<<" ";
            }
        cout<<endl;
    }
}
void pattern16(int n){
    char c='A';
    for(int i=1;i<=n;i++){
            for(char j=65;j<65+i;j++){
            cout<<c<<" ";
            }
        c+=1;
        cout<<endl;
    }
}

int main(){
    int n=5;
    pattern12(n);
    return 0;
}