//find max in array using recursion
# include <iostream>
using namespace std;

int findmax(int *a,int n){
    if(n == 1) return a[0];
    else return max(a[n-1],findmax(a,n-1));
}
int main(){
    cout << "enter size of array : ";
    int n;
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "max of given elements is : " << findmax(arr,n) << endl;
}