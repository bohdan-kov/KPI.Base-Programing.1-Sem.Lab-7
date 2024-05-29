#include <iostream>
using namespace std;


int cout_row, cout_colums;
int matric_base[100][100];


void input() {
    srand(time(NULL));
    cout << "Input cout numbers row (<=100): ";
    cin >> cout_row;
    cout << "Input cout numbers colums (<=100): ";
    cin >> cout_colums;
    for (int i = 0; i < cout_row; i++) {
        for (int j = 0; j < cout_colums; j++) {
            matric_base[i][j] = 0 + rand() % 35; // Генерація чисел від 1 до 35
        }
    }
}

void out_row(int index_elem) {
    int i = 0;
    cout << "Row with maximum element: ";
    for (auto& elem : matric_base[index_elem]) {
        if (i < cout_colums)
            cout << elem << " ";
        else
            break;
        i++;
    }
}

int main()
{   
    input();
    int all_sum = 0, cout_zero = 0;
    int row_max_elem[2] = {0, 0}; 
    for (int i = 0; i < cout_row; i++) {
        float row_sum = 0;
        for (int j = 0; j < cout_colums; j++) {
            cout << matric_base[i][j] << " ";
            row_sum += matric_base[i][j];
            all_sum += matric_base[i][j];
            if (matric_base[i][j] > row_max_elem[0]) {
                row_max_elem[0] = matric_base[i][j]; 
                row_max_elem[1] = i;
            }
                

            if (matric_base[i][j] == 0)
                cout_zero++;
        }
        cout << endl << "Arithmetic mean of the row: " << row_sum / cout_colums << endl << endl;
    }

    cout << "The sum of matrix elements: " << all_sum << endl;
    out_row(row_max_elem[1]);

    cout << endl << "The number of zero elements: " << cout_zero << endl;
}
