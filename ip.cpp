
Input 1:

std::cin >> height >> width;
std::vector<std::vector<int>> vec;
vec.resize(height, vector<int>(width)); // resize
for(int i {0}; i < height; ++i)
{
    for(int j {0}; j < width; ++j)
    {
        std::cin >> vec[i][j];
    }
}

Input 2: 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;  // Read dimensions

    vector<vector<int>> matrix(rows, vector<int>(cols)); 

   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    
    cout << "Matrix received:\n";
    for (auto &row : matrix) {
        for (auto &num : row) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
