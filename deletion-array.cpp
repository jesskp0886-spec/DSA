#include<iostream>
using namespace std;


int main(){

    int n , pos,ele;

    cout << "Enter the size of array :";
    cin >> n;
    cout << endl;
    
    int arr[n];

    cout << "Enter the element of ";
    for(int i = 0; i < n; i++){
        cout << "Index [" << i << "] : ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Array elements :";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    cout << "Enter Position for Delete Element :";
    cin >> pos;

    for(int i = pos; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "After deletion Array elements :";
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }




    return 0;
}