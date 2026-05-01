<<<<<<< HEAD
#include<iostream>
using namespace std;

int main(){

    int n, target, closest, mindiff, diff ;

    cout << "Enter the size : ";
    cin >> n;

    int arr[n];

    cout << "Enter Element : "<< endl;
    for(int i = 0; i < n; i++){
        cout << "Index [" << i << "] : ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Enter Target Number : ";
    cin >> target;


    closest = arr[0];
    mindiff = arr[0] - target;
    if(mindiff < 0) mindiff = -mindiff;

    for(int i = 0; i < n; i++){
        diff = arr[i] - target;
        if(diff < 0) diff = -diff;

        if(diff < mindiff){
            mindiff = diff;
            closest  =arr[i];
        }
    }

    cout << "Closest Number : " << closest;

    return 0;
=======
#include<iostream>
using namespace std;

int main(){

    int n, target, closest, mindiff, diff ;

    cout << "Enter the size : ";
    cin >> n;

    int arr[n];

    cout << "Enter Element : "<< endl;
    for(int i = 0; i < n; i++){
        cout << "Index [" << i << "] : ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Enter Target Number : ";
    cin >> target;


    closest = arr[0];
    mindiff = arr[0] - target;
    if(mindiff < 0) mindiff = -mindiff;

    for(int i = 0; i < n; i++){
        diff = arr[i] - target;
        if(diff < 0) diff = -diff;

        if(diff < mindiff){
            mindiff = diff;
            closest  =arr[i];
        }
    }

    cout << "Closest Number : " << closest;

    return 0;
>>>>>>> c2bd637 (Saving current work before pull)
}