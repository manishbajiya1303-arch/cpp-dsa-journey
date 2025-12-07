#include <iostream>
#include <climits>
using namespace std;

int main (){
    cout << "enter number of elements : ";
    int size;
    cin >> size;

    int a[size];
    cout << "enter array elements : ";
    for(int i=0; i<size; i++){
        cin >> a[i];
    }

    int largest = INT_MIN, second_largest = INT_MIN;
    int smallest = INT_MAX, second_smallest = INT_MAX;

    for(int i=0; i<size; i++){
        // finding largest & second largest
        if(a[i] > largest){
            second_largest = largest;
            largest = a[i];
        } else if(a[i] > second_largest && a[i] != largest){
            second_largest = a[i];
        }

        // finding smallest & second smallest
        if(a[i] < smallest){
            second_smallest = smallest;
            smallest = a[i];
        } else if(a[i] < second_smallest && a[i] != smallest){
            second_smallest = a[i];
        }
    }

    cout << "Second Largest: " << second_largest << endl;
    cout << "Second Smallest: " << second_smallest << endl;

    return 0;
}
