#include<iostream>
using namespace std;

int main(){

    int n ;

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

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    float avg = (float)sum/n;

    cout << "Sum of numbers : " << sum << endl; 
    cout << "Avg of numbers : " << avg << endl; 


    return 0;
}