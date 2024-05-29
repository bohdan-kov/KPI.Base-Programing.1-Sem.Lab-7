#include <iostream>
using namespace std;

int cout_lines, cout_colums;
int matric_base[101][101];

void input() {
    srand(time(NULL));
    cout << "Input cout numbers lines (<=101 and only odd ones): ";
    cin >> cout_lines;
    cout << "Input cout numbers colums (<=101 and only odd ones): ";
    cin >> cout_colums;
    for (int i = 0; i < cout_lines; i++) {
        for (int j = 0; j < cout_colums; j++) {
            matric_base[i][j] = 1 + rand() % 9; // Генерація чисел від 1 до 9
        }
    }
}

int main()
{
    int res = 0;
    input();
    for (int i = 0; i < cout_lines; i++) {
        for (int j = 0; j < cout_colums; j++) {
            if (i == 0 || j == 0 || i == j && (i + j - cout_lines < 1) || (i + j == cout_lines - 1)) {
                res += matric_base[i][j];
                cout << matric_base[i][j] << " ";
            }
            else 
            cout << 0 << " ";
        }
        cout << endl;
    }
    cout << endl << "Result: " << res << endl;
}
