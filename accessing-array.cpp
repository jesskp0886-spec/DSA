#include<iostream>
using namespace std;

int main (){

    int n;
    cout << "Enter the size :";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cout << "Enter the elements :";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Using Index :";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Using Pointer:";
    for(int i = 0; i < n; i++){
        cout << *(arr + i) << " " ;
    }
    cout << endl;

    cout << "Using Range Loop :";
    for(int x : arr ){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
