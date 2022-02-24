#include <iostream>
using namespace std;

void bagi(int a, int b){
    float x = (float)a/b;
    cout<< "hasil : " << x<<endl;
}

void bagi(float a, float b){
    float x = a / b;
    cout << "hasil : " << x<<endl;
}
void bagi(double a, double b){
    float x = a / (float)b;
    cout << "hasil : " << x << endl;
}

int main(){
    bagi(4.8f,2.2);
}   