#include <iostream>
using namespace std;

const int numsize = 10;
class DecimalArray {
private:
    int ms[numsize][numsize];
public:
    int& operator [](int d) {
        if (d < pow(numsize, 2)) {
            int i = d / numsize, j = d % numsize;
            return *(*(ms + i) + j);
        }
        else exit(1);
    }
};
int main()
{
    DecimalArray array;
    for (int i = 0; i < numsize * numsize; i++){
            array[i] = i * 5;
            cout << array[i] << " ";
            if ((i + 1) % 10 == 0) 
                cout << endl;     
    }
    return 0;
}

