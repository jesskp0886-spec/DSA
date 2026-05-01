#include<iostream>
using namespace std;

int main (){

    int pos, ele, n;

    cout << "Enter the size :";
    cin >> n;

    int arr[n + 1];

    for(int i = 0; i < n; i++){
        cout << "Enter the elements :";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Enter the Position :" ;
    cin >> pos;

    cout << "Enter the Element :";
    cin >> ele;

    for(int i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos] = ele;
    n++;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}