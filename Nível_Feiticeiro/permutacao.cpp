#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int count = 0;
    
    if (a[0] <= n && a[0] > 0){
            count++;
    }
    
    for (int i = 1; i < n; i++){
        if (a[i] <= n && a[i] != a[i-1] && a[i] > 0){
            count++;
        }
    }
    
    if (count == n){
        cout << "sim\n";
    }
    else {
        cout << "não\n";
    }
    return 0;
}