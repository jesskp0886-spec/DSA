#include<iostream>
using namespace std;

int main(){

    int n , max, min;

    cout << "Enter the size of array :";
    cin >> n;

    int arr[n];
    cout << "Enter the Element of " << endl;
    for(int i = 0; i < n; i ++){
        cout << "Index [" << i << "] :";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Array List :";
    for(int  i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    max = arr[0];
    min = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "Maximum number is : " << max << endl;
    cout << "Minimum number is : " << min << endl;

    return 0;
}