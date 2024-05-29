#include <iostream>
using namespace std;

int cout_lines, cout_colums;
int matric_base[100][100];

void input() {
    srand(time(NULL));
    cout << "Input cout numbers lines (<=100): ";
    cin >> cout_lines;
    cout << "Input cout numbers colums (<=100): ";
    cin >> cout_colums;
    for (int i = 0; i < cout_lines; i++) {
        for (int j = 0; j < cout_colums; j++) {
            matric_base[i][j] = 1 + rand() % 35; // Генерація чисел від 1 до 35
        }
    }

    for (int i = 0; i < cout_lines; i++) {
        for (int j = 0; j < cout_colums; j++) {
            cout << matric_base[i][j] << " ";
        }
        cout << endl;
    }
    
}

int main()
{
    input();
    int result[3] = {0, 0, 0}; // Масив, що зберігає розташування макс. елем. серед мінім. елем.  в рядках
    for (int i = 0; i < cout_lines; i++) {
        int min_elem_lines[3] = { matric_base[i][0], 0, 0 }; // Масив, що зберігає мінім елем. та його позицію
        for (int j = 0; j < cout_colums; j++) {
            if (min_elem_lines[0] > matric_base[i][j]) {
                min_elem_lines[0] = matric_base[i][j];
                min_elem_lines[1] = i;
                min_elem_lines[2] = j;
            }
        }
        if (min_elem_lines[0] > result[0]) {
            result[0] = min_elem_lines[0];
            result[1] = min_elem_lines[1];
            result[2] = min_elem_lines[2];
        }
    }
    cout << endl << "Result: " << endl << "Numbers: " << result[0] << endl << "Lines pos.: " << result[1] + 1 << endl << "Row pos.: " << result[2] + 1 << endl << endl;
}
