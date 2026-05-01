<<<<<<< HEAD
#include<iostream>
using namespace std;

int main(){

    int odd = 0, even = 0;
    int n;
    cout << "Enter the size of array :" ;
    cin  >> n;

    int arr[n];


    for(int i = 0; i < n; i++){
        cout << "Enter elemnt of Index " << i << " : ";
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] %2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    cout << "Even Numbers :" << even << endl;
    cout << "Odd Numbers :" << odd << endl;

    return 0;
=======
#include<iostream>
using namespace std;

int main(){

    int odd = 0, even = 0;
    int n;
    cout << "Enter the size of array :" ;
    cin  >> n;

    int arr[n];


    for(int i = 0; i < n; i++){
        cout << "Enter elemnt of Index " << i << " : ";
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] %2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    cout << "Even Numbers :" << even << endl;
    cout << "Odd Numbers :" << odd << endl;

    return 0;
>>>>>>> c2bd637 (Saving current work before pull)
}