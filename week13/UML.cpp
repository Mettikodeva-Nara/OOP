#include <iostream>
using namespace std;
class Bentuk {
    float Lebar;
    float Panjang;
    float Luas;

    public:
        Bentuk(){}
        Bentuk(float, float);
        void setLebar(float);
        void setPanjang(float);
        float getLebar();
        float getPanjang();
        float getLuas();
};
Bentuk::Bentuk(float l, float p) {
    Lebar = l;
    Panjang = p;
}

void Bentuk::setLebar(float L) {
    Lebar = L;
}
void Bentuk::setPanjang(float P) {
    Panjang = P;
}
float Bentuk::getLebar() {
    return Lebar;
}
float Bentuk::getPanjang() {
    return Panjang;
}
float Bentuk::getLuas() {
    return Lebar * Panjang;
}

int main(){
    Bentuk b(3,4);
    Bentuk a;
    a.setLebar(5);
    a.setPanjang(10);
    cout << "Luas a : " << a.getLuas() << endl;
    cout << "Luas b : " << b.getLuas() << endl;
    return 0;
}