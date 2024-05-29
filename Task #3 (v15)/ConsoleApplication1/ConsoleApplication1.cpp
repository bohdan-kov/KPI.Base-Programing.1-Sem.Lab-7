#include <iostream>
using namespace std;

int cout_lines, cout_colums;
int matric_base[21][21];

void input() {
    srand(time(NULL));
    cout << "Inp cout nums lines (<=21 and only odd ones): ";
    cin >> cout_lines;
    cout << "Inp cout nums colums (<=21 and only odd ones): ";
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
            if (j == 0 || (i == cout_lines - 1) || (i == j && i + j - cout_lines < 1) || (i + j == cout_lines - 1 && i > j) || (i == cout_colums / 2) && (j >= cout_colums / 2)) {
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



