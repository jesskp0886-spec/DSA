#include<iostream>
using namespace std;

int main (){

    int n;
    cout << "Enter the size of an array :";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cout << "Enter the element of Index " << i << " : " ;
        cin >> arr[i];
    }

    int positive = 0;
    int negative = 0;
    int zero = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else zero++;
    }

    cout << "Positive numbers :" << positive << endl;
    cout << "Negative numbers :" << negative << endl;
    cout << "Zeros :" << zero << endl;

    return 0;
}