#include<iostream>
using namespace std;

int main(){

    int n;
    int arr[100];

    cout << "Enter size :";
    cin >> n;

    for(int i = 0; i < n; i++){
        arr[i] = i + 1;
    }
    cout << endl;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    return 0;
}