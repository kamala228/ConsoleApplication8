//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//void printMatrix(const vector<vector<int>>& matrix) {
//    for (const auto& row : matrix) {
//        for (int val : row) {
//            cout << val << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//}
//
//vector<vector<int>> sortByColumns(vector<vector<int>> matrix) {
//    int rows = matrix.size();
//    int cols = matrix[0].size();
//
//    for (int col = 0; col < cols; ++col) {
//        vector<int> column;
//        for (int row = 0; row < rows; ++row) {
//            column.push_back(matrix[row][col]);
//        }
//        sort(column.begin(), column.end());
//        for (int row = 0; row < rows; ++row) {
//            matrix[row][col] = column[row];
//        }
//    }
//    return matrix;
//}
//
//vector<vector<int>> sortWholeMatrix(vector<vector<int>> matrix) {
//    vector<int> flatMatrix;
//    for (const auto& row : matrix) {
//        for (int val : row) {
//            flatMatrix.push_back(val);
//        }
//    }
//    sort(flatMatrix.begin(), flatMatrix.end());
//
//    int rows = matrix.size();
//    int cols = matrix[0].size();
//    int index = 0;
//
//    for (int row = 0; row < rows; ++row) {
//        for (int col = 0; col < cols; ++col) {
//            matrix[row][col] = flatMatrix[index++];
//        }
//    }
//    return matrix;
//}
//
//int main() {
//    system("chcp 1251>null");
//    vector<vector<int>> matrix = {
//        {3, 7, 5, 6, 2},
//        {1, 9, 8, 4, 0},
//        {6, 2, 1, 8, 7},
//        {4, 5, 3, 9, 1}
//    };
//
//    cout << "Початковий масив:\n";
//    printMatrix(matrix);
//
//    cout << "Оберіть тип сортування:\n1. Сортування по стовпцях\n2. Сортування всього масиву\n";
//    int choice;
//    cin >> choice;
//
//    if (choice == 1) {
//        matrix = sortByColumns(matrix);
//        cout << "Масив після сортування по стовпцях:\n";
//    }
//    else if (choice == 2) {
//        matrix = sortWholeMatrix(matrix);
//        cout << "Масив після сортування всього масиву:\n";
//    }
//    else {
//        cout << "Невірний вибір!\n";
//        return 1;
//    }
//
//    printMatrix(matrix);
//    return 0;
//}



//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void printMatrixWithSums(const vector<vector<int>>& matrix) {
//    int rows = matrix.size();
//    int cols = matrix[0].size();
//    vector<int> colSums(cols, 0);
//    int totalSum = 0;
//
//    for (int row = 0; row < rows; ++row) {
//        int rowSum = 0;
//        for (int col = 0; col < cols; ++col) {
//            cout << matrix[row][col] << " ";
//            rowSum += matrix[row][col];
//            colSums[col] += matrix[row][col];
//        }
//        totalSum += rowSum;
//        cout << "| " << rowSum << endl;
//    }
//
//    cout << string(cols * 3, '-') << endl;
//
//    for (int col = 0; col < cols; ++col) {
//        cout << colSums[col] << " ";
//    }
//    cout << "| " << totalSum << endl;
//}
//
//int main() {
//    system("chcp 1251>null");
//    vector<vector<int>> matrix = {
//        {3, 5, 6, 7},
//        {12, 1, 1, 1},
//        {0, 7, 12, 1}
//    };
//
//    cout << "Матриця з підрахунком сум:\n";
//    printMatrixWithSums(matrix);
//
//    return 0;
//}


//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//void printMatrix(const vector<vector<int>>& matrix) {
//    for (const auto& row : matrix) {
//        for (int val : row) {
//            cout << val << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//}
//
//vector<vector<int>> generateRandomMatrix(int rows, int cols, int minVal, int maxVal) {
//    vector<vector<int>> matrix(rows, vector<int>(cols));
//    for (int row = 0; row < rows; ++row) {
//        for (int col = 0; col < cols; ++col) {
//            matrix[row][col] = rand() % (maxVal - minVal + 1) + minVal;
//        }
//    }
//    return matrix;
//}
//
//vector<vector<int>> generateSummedMatrix(const vector<vector<int>>& bigMatrix) {
//    int rows = bigMatrix.size();
//    int smallCols = bigMatrix[0].size() / 2;
//    vector<vector<int>> smallMatrix(rows, vector<int>(smallCols));
//
//    for (int row = 0; row < rows; ++row) {
//        for (int col = 0; col < smallCols; ++col) {
//            smallMatrix[row][col] = bigMatrix[row][2 * col] + bigMatrix[row][2 * col + 1];
//        }
//    }
//    return smallMatrix;
//}
//
//int main() {
//    system("chcp 1251>null");
//    srand(time(0));
//
//    vector<vector<int>> bigMatrix = generateRandomMatrix(5, 10, 0, 50);
//
//    cout << "Великий масив (5x10):\n";
//    printMatrix(bigMatrix);
//
//    vector<vector<int>> smallMatrix = generateSummedMatrix(bigMatrix);
//
//    cout << "Малий масив (5x5):\n";
//    printMatrix(smallMatrix);
//
//    return 0;
//}

