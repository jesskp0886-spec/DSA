include<iostream>
using namespace std;

int main(){

    int n , pos, ele;

    cout << "Enter the size of array :";
    cin >> n;#

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

    cout << "Enter position for Update :";
    cin >> pos;



    if(pos < 0 || pos >= n){
        cout << "Invalid Choice...!";
    }

    cout << "Enter Element to Update :";
    cin >> ele;


    arr[pos] = ele;

    cout << "After Updating Array List :";
    for(int  i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}