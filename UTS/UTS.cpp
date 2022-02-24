#include <iostream>
using namespace std;
class kelas
{
public:
    int x[8];
    int y[2][4];
    kelas(int x[8])
    {
        for (int i = 0; i < 8; i++)
            this->x[i] = x[i];
    }
    void sort()
    {
        for (int i = 0; i < 8 - 1; i++)
            for (int j = 0; j < 8 - i - 1; j++)
                if (x[j] > x[j + 1])
                    swap(x[j], x[j + 1]);
    }
    void convert()
    {
        for (int i = 0; i < 8; i++)
        {
            if (i < 8 / 2)
            {
                y[0][i] = x[i];
                cout << x[i];
            }
            else
            {
                if (i == 8 / 2){
                    cout <<endl;
                }
                y[1][i - 4] = x[i];
                cout << x[i];
            }
        }
    }
    int getMax()
    {
        int max = 0;
        for (int i = 0; i < 8; i++)
        {
            if (x[i] > max)
            {
                max = x[i];
            }
        }
        return max;
    }
};

int main(int argc, char **args)
{
    int x[8] = {3, 1, 5, 4, 2, 6, 8, 7};
    kelas k(x);
    k.sort();
    k.convert();
    cout << "\nmax : " << k.getMax() << endl;
    return 0;
}
