#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int arr[n];
    for(int i=0;i<=n;i++){
        int count=1;
        for(int j=0;j<(i);j++){
            cout<<count;
            count = count + (-n+i);
        }
        cout<<endl;
    }
    return 0;
}
