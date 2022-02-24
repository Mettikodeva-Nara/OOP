#include <iostream>

using namespace std;
int hitung(int val ){
    return ((val*3)%5);

}   

int main(int argc, char **argv){

    cout<<hitung(0)<< endl;
    cout << hitung(1)<< endl;
    cout << hitung(2)<< endl;
    cout << hitung(3)<< endl;
    cout << hitung(4)<< endl;
}