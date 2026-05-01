#include<iostream>
using namespace std;

int main(){

    int n , pos, ele;

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

    cout << "Enter Element for Occurness :";
    cin >> ele;


    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == ele){
            count++;
        }
    }

    if(count == 0){
        cout << "Element " << ele << " is not in array...."<< endl;
    }
    else{
        cout << "Element " << ele << " occur "<< count << " time's in array." << endl; 
    }


    return 0;
}