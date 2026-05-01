#include<iostream>
using namespace std;

int main(){

    int n , ele;
    cout << "Enter the size of array :";
    cin >> n;

    int arr[n];

    cout << "Enter the element "<< endl;
    for(int i = 0; i < n; i++){
        cout << "Index [" << i << "] :";
        cin >> arr[i] ;
    }
    cout << endl;

    cout << "Array element : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter Array element to Search : ";
    cin >> ele;
    
    int found = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == ele){
            cout << "Element " << ele << "Found at index [" << i << "]." << endl;
            found++;
        }
    }

    if(found == 0){
        cout << "Element " << ele << "Not found here.." << endl;
    }
    else{
        cout << "Total " << found << " match found." << endl;
    }

    return 0;
}