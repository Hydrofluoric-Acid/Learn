#include <iostream>
using namespace std;

int main() {
    int a[5] = {5, 4, 3, 2, 1};
    
    for(int i=1;i<5;i++){
        int now=a[i];
        for(int j=i-1;j>=0;j--){
            if(now<a[j]){
                a[j+1]=a[j];
                a[j]=now;
            }else{break;}
        for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }   
    cout<<endl;
        }
    }

    
    cout << endl;

    return 0;
}
