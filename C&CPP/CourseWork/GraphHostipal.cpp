#include <iostream>
#include <vector>
#include <limits>

using namespace std;

#define MAX 10
#define INF numeric_limits<int>::max()

struct MGraph {
    char vers[MAX];
    int arcs[MAX][MAX];
    int vernum, arcnum;
};

void InitMGraph(MGraph* pM);                                                   // 初始化图
vector<vector<int>> GetPathValueMatrixByFloyd(const MGraph& G);                // 得到最短路径矩阵
int GetHospitalIndex(const MGraph& G, const vector<vector<int>>& pathvalues);  // 计算最优医院地址

int main() {
    MGraph G;
    vector<vector<int>> pathvalues;

    InitMGraph(&G);
    pathvalues = GetPathValueMatrixByFloyd(G);

    int i = GetHospitalIndex(G, pathvalues);
    cout << "\n推荐医院地址：" << G.vers[i] << endl;

    return 0;
}

void InitMGraph(MGraph* pM) {
    cin >> pM->vernum;
    cin >> pM->arcnum;
    cin >> pM->vers;

    for (int i = 0; i < pM->vernum; i++) {
        for (int j = 0; j < pM->vernum; j++) {
            cin >> pM->arcs[i][j];
        }
    }
}

vector<vector<int>> GetPathValueMatrixByFloyd(const MGraph& G) {
    vector<vector<int>> pathvalue(G.vernum, vector<int>(G.vernum));

    for (int i = 0; i < G.vernum; i++) {
        for (int j = 0; j < G.vernum; j++) {
            pathvalue[i][j] = G.arcs[i][j];
        }
    }

    for (int v = 0; v < G.vernum; v++) {
        for (int i = 0; i < G.vernum; i++) {
            if (v == i)
                continue;
            for (int j = 0; j < G.vernum; j++) {
                if (v == j)
                    continue;
                if (pathvalue[i][j] > pathvalue[i][v] + pathvalue[v][j]) {
                    pathvalue[i][j] = pathvalue[i][v] + pathvalue[v][j];
                }
            }
        }
    }

    return pathvalue;
}

int GetHospitalIndex(const MGraph& G, const vector<vector<int>>& pathvalues) {
    int hosp = -1;
    int hospMin, hospSum;
    int v, max, sum;
    int w;
    int goBackValue;

    for (v = 0; v < G.vernum; v++) {
        max = -1;
        sum = 0;

        for (w = 0; w < G.vernum; w++) {
            if (v == w)
                continue;
            goBackValue = pathvalues[v][w] + pathvalues[w][v];
            sum += goBackValue;
            if (max == -1) {
                max = goBackValue;
            } else if (goBackValue > max) {
                max = goBackValue;
            }
        }

        if (hosp == -1) {
            hosp = v;
            hospMin = max;
            hospSum = sum;
        } else {
            if (hospMin > max || (hospMin == max && hospSum > sum)) {
                hosp = v;
                hospMin = max;
                hospSum = sum;
            }
        }
    }

    return hosp;
}
/* 5
15
12345
0 13 1000000 4 1000000
13 0 15 1000000 5
1000000 1000000 0 12 1000000
4 1000000 12 0 1000000
1000000 1000000 6 3 0 */