#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
double coor[8];
double coordinate[16][8] = {
    //T: x1,y1,x2,y2,x3,y3,x4,y4 
    237,620,237,620,237,120,237,120, //1
    237,120,237, 35,226, 24,143, 19, //2
    143, 19,143, 19,143,  0,143,  0, //3
    143,  0,143,  0,435,  0,435,  0, //4
    435,  0,435,  0,435, 19,435, 19, //5
    435, 19,353, 23,339, 36,339,109, //6
    339,109,339,108,339,620,339,620, //7
    339,620,339,620,393,620,393,620, //8
    393,620,507,620,529,602,552,492, //9
    552,492,552,492,576,492,576,492, //10
    576,492,576,492,570,662,570,662, //11
    570,662,570,662,  6,662,  6,662, //12
      6,662,  6,662,  0,492,  0,492, //13
      0,492,  0,492, 24,492, 24,492, //14
     24,492, 48,602, 71,620,183,620, //15
    183,620,183,620,237,620,237,620  //16
};
int N = 16;
void getInterPoint(int n,double t) {
    if (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            double x1 = coor[i*2 + 0];
            double y1 = coor[i*2 + 1];
            double x2 = coor[i*2 + 2];
            double y2 = coor[i*2 + 3];
            coor[i*2] = x1 + (x2 - x1)*t;
            coor[i*2 + 1] = y1 + (y2 - y1)*t;
        }
        n--;
        getInterPoint(n, t);
    }
}
int main() {
    HDC hdc = GetDC(nullptr);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 8; j++) {
            coor[j] = coordinate[i][j];
        }
        double t = 0.0;
        while (t <= 1.0) {
            getInterPoint(4, t);
            t = t + 0.0001;
            SetPixel(hdc, ((coor[0]+0.6)/5+200), 200-coor[1]/5, RGB(255, 255, 255));
        }
    }
    cout<<"aa";
    cin.get();
    return 0;
}

