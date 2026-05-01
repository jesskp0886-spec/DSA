#include<iostream>
using namespace std;

int main(){

    int n;
    int arr[10];

    cout << "Enter The Number For It's Multiplication Table : ";
    cin >> n;

    for(int i = 0; i < 10; i++){
        arr[i] = n * (i + 1);
    }

    for(int i = 0; i < 10; i++){
        cout << n << " x " << (i + 1) << " = " << arr[i] << endl;
    }

    return 0;
}