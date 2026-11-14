
#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    
    do {
        cout << "Enter number of rows (1-3): ";
        cin >> rows;
    } while (rows < 1 || rows > 3);

    
    do {
        cout << "Enter number of columns (1-3): ";
        cin >> cols;
    } while (cols < 1 || cols > 3);

    
    double **arr = new double*[rows];

    for (int i = 0; i < rows; i++)
    {
        arr[i] = new double[cols];
    }


    cout << "\nEnter array elements:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter value [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    
    cout << "\nThe 2D array is:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}
