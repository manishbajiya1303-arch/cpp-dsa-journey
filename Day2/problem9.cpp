//check if array is sorted using recursion
# include <iostream>
using namespace std;
int check_array(int* a,int size){
    if(size <= 1) return 1;
    else if(a[size-1] < a[size-2]) return 0;
    else return check_array(a,size-1);
}
int main (){
    cout << "enter size of array : ";
    int n;
    cin >> n;
    int a[n];
    cout << "enter array elements : ";
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(check_array(a,n) == 1) cout << "the array is sorted" << endl;
    else cout << "the array is not sorted" << endl;
    return 0;
}