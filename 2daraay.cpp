#include <iostream>
using namespace std;
int main()
{

    int arr[4][4]{
        {1, 2, 3, 4},
        {2, 3, 4, 5},
        {3, 4, 5, 6},
        {4, 5, 6, 7}};

    int arr2[4][4]{
        {0, 9, 8, 7},
        {9, 8, 7, 6},
        {8, 7, 6, 5},
        {7, 6, 5, 4},
    };
    int arr3[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr3[i][j] = arr[i][j] + arr2[i][j]; //for add
        };
};
        for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr3[i][j]<<" ";
        };
    };
};

#include <iostream>
using namespace std;
int main()
{

    int arr[4][4]{
        {1, 2, 3, 4},
        {2, 3, 4, 5},
        {3, 4, 5, 6},
        {4, 5, 6, 7}};

    int arr2[4][4]{
        {0, 9, 8, 7},
        {9, 8, 7, 6},
        {8, 7, 6, 5},
        {7, 6, 5, 4},
    };
    int arr3[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr3[i][j] = arr[i][j] - arr2[i][j]; //fpr subtract
        };
};
        for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr3[i][j]<<" ";
        };
    };
};