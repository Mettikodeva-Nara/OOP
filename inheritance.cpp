#include <iostream>
using namespace std;

class Animal{
    public:
    void Sound(){
    }
    void nama(){
        cout << " nama dari Animal \n";
    }
};

class Dog : public Animal{
    public:
    void Sound(){
        cout<< "GUk GUK\n";
    }

    void SoundAnimal(){
        Animal::Sound();
    }

};

class Cat : public Animal{
public:
    void Sound()
    {
        cout << "Miew~~\n";
    }

    void SoundAnimal()
    {
        Animal::Sound();
    }
};

int main(int argc, char **argv){

    Animal *k = new Dog();
    Animal *n = new Cat();
    Animal *p[2] = {k,n};
    // p[0] = &k;
    // p[1] = &n;
    // p.Sound();
    // k.Sound();
    // k.nama();
    // k.SoundAnimal();
    // p = ;

    // k.Sound();
    // n.Sound();
    for(int i = 0 ; i<2;i++){
        Animal *x;
        x = p[i];
        x->Sound();
    }
    delete k;
    delete n;
    return 0;

}