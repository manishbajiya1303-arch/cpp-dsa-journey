# include <iostream>
using namespace std;
int C(int a, int b){
    if(b==0)return 1;
    else if(a<b) return 0;
    else return a*C(a-1,b-1)/b;
}
int main (){
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            cout << C(i,j) << " ";
        }
        cout << endl;
    }
    return 0;
}