#include <iostream>
using namespace std;

const int maxisize = 100;

float fmemory[maxisize];
int fmem_top = 0;
int pmemory[maxisize];
int pmem_top = 0;

class Float{
protected:
    int addr;
public:
    Float(float newnum) {
        addr = fmem_top;
        *(fmemory + addr) = newnum;
        fmem_top++;
    }
    int operator& (){
        return addr;
    }
};
class ptrFloat {
private:
    int pmem_ind;
public:
    ptrFloat(int newp) {
        pmem_ind = pmem_top;
        *(pmemory + pmem_ind) = newp;
        pmem_top++;
    }
    float& operator* () {
        return fmemory[pmemory[pmem_ind]];
    }
};
int main()
{
    Float var1 = -1.234;	//	определяем и инициализируем
    Float var2 = 5.678;	//	две вещественные переменные
    ptrFloat ptr1 = &var1;	// определяем и инициализируем
    ptrFloat ptr2 = &var2;	// два указателя
    cout << "*ptr1 = "	<< *ptr1;	//	получаем значения переменных
    cout << "\n*ptr2 = " << *ptr2;	//	и выводим на экран
    *ptr1 = -7.123;	//	присваиваем новые значения
    *ptr2 = 8.456;	//	переменным, адресованным через указатели
    cout << "\n*ptr1 = " << *ptr1;	//	снова получаем значения
    cout << "\n*ptr2 = " << *ptr2;	//	и выводим на экран
    cout << endl << fmem_top;
    return 0;
}

