#include<bits/stdc++.h>
using namespace std;
int* indexof(int i){
    int zero[5][3]={
        {1,1,1},
        {1,0,1},
        {1,0,1},
        {1,0,1},
        {1,1,1}
    };
    int one[5][3]={
        {0,0,1},
        {0,0,1},
        {0,0,1},
        {0,0,1},
        {0,0,1}
    };
    int two[5][3]={
        {1,1,1},
        {0,0,1},
        {1,1,1},
        {1,0,0},
        {1,1,1}
    };
    int three[5][3]={
        {1,1,1},
        {0,0,1},
        {1,1,1},
        {0,0,1},
        {1,1,1},
    };
    int four[5][3]={
        {1,0,1},
        {1,0,1},
        {1,1,1},
        {0,0,1},
        {0,0,1}
    };
    int five[5][3]={
        {1,1,1},
        {1,0,0},
        {1,1,1},
        {0,0,1},
        {1,1,1}
    };
    int six[5][3]={
        {1,1,1},
        {1,0,0},
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };
    int seven[5][3]={
        {1,1,1},
        {1,0,1},
        {0,0,1},
        {0,0,1},
        {0,1,1}
    };
    int eight[5][3]={
        {1,1,1},
        {1,0,1},
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };
    int nine[5][3]={
        {1,1,1},
        {1,0,1},
        {1,1,1},
        {0,0,1},
        {1,1,1}
    };
    switch (i){
    case 0:return *zero;break;
    case 1:return *one;break;
    case 2:return *two;break;
    case 3:return *three;break;
    case 4:return *four;break;
    case 5:return *five;break;
    }
}
int main(){
    
    int space[5][1]={
        {0},
        {0},
        {0},
        {0},
        {0}
    };
    int n;
    cin>>n;
    int ans[5][n*4-1]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){

        }
    }

}