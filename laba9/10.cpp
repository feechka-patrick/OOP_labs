#include <iostream>
using namespace std;


int main()
{
    const int numarrays = 10;
    int maxisize = 10;
    int* ap[numarrays];

    for (int i = 0; i < numarrays; i++) {
        *(ap + i) = new int[maxisize];
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            *(*(ap + i) + j) = i + j;
            cout << ap[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

