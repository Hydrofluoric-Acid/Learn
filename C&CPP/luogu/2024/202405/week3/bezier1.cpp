#include<bits/stdc++.h>
#include <afxwin.h> // 包含 MFC 核心头文件
struct Point {
    double x, y;
};

int fac(int n) {
    if (n == 1 || n == 0)
        return 1;
    else
        return n * fac(n - 1);
}

double powi(double base, int n) {
    double res = 1;
    for (int i = 1; i <= n; ++i)
        res *= base;
    return res;
}

void DrawBezierCurve(Point* p, int n, CDC* pDC, int color) {
    double a, b;
    double temp, temp1, temp2, bi;
    for (double t = 0.0; t <= 1; t += 0.01) {
        a = 0.0;
        b = 0.0;
        for (int i = 0; i <= n; ++i) {
            temp = double(fac(n) / fac(i) / fac(n - i));
            temp1 = powi(t, i);
            temp2 = powi(1 - t, n - i);
            bi = temp * temp1 * temp2;
            a = a + bi * p[i].x;
            b = b + bi * p[i].y;
        }
        CPen m_newPen, *m_oldPen;
        // 创建新画笔
        m_newPen.CreatePen(PS_SOLID, 2, color);
        // 将新画笔选入设备上下文，并且保存旧画笔
        m_oldPen = pDC->SelectObject(&m_newPen);
        if (t == 0) {
            pDC->MoveTo(a, b);
        } else {
            pDC->LineTo(a, b);
        }
        pDC->SelectObject(m_oldPen);
    }
}