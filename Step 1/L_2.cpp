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
        for(int i=0;i<=(2*n-1);i++){
        for(int j=0;j<((i<=n)?(i):(2*n-i));j++){
            cout<<"*";
        }
        cout<<endl;
    }
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
    int spaces = 2*(n-1);
      for(int i=1;i<=n;i++){
          for(int j=1;j<=i;j++){
              cout<<j;
          }
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          for(int j=i;j>=1;j--){
              cout<<j;
          }
          cout<<endl;
          spaces-=2;
      }
}
void pattern13(int n){
    int count =1;
    for(int i=0;i<=n;i++){
      for (int j = 0; j < i; j++) {
        cout << count << " ";
        count++;
      }
      cout<<endl;
    }
}
void pattern14(int n){
    for(int i=0;i<=n;i++){
        char c ='A';
        for(int j=0;j<i;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}
void pattern15(int n){
    for(int i=0;i<=n;i++){
        char c = 'A';
        for(int j=n;j>i;j--){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}
void pattern16(int n){
        char c = 'A';
        for(int i=0;i<n;i++){
        
        for(int j=0;j<=i;j++){
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }
}
void pattern17(int n) {
    int l = n/2+1;
    for(int i=1;i<=n;i++){
        char c = 'A';
        for(int j=n;j>=i;j--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n=3;
    pattern17(n);
    return 0;
}