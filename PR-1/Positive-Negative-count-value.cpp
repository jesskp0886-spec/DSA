#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the size of array :";
    cin >> n;

    int arr[n];

    cout << "Enter array element :"<< endl;
    for(int i = 0; i < n; i++){
        cout << "Index of ["<< i <<"] is : ";
        cin >> arr[i];
    }

    cout << "Entered array :";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int positive = 0 , negative = 0, zero = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }

        cout << "Positive number Count :" << positive << endl;
        cout << "Negative number Count :" << negative << endl;
        cout << "Zero number Count :" << zero << endl;

    return 0;
}