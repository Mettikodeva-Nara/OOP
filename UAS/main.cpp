#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Convert{
    public:
        Convert(){}
        string getBinary(int decimal){
            string binary = "";
            while(decimal > 0){
                binary = to_string(decimal % 2) + binary;
                decimal = decimal / 2;
            }
            return binary;
        }
        string getHex(int decimal){
            string hex = "";
            while (decimal>0)
            {
                int temp = decimal % 16;
                if(temp<10){
                    hex = to_string(temp) + hex;
                }
                else{
                    hex = (char)(temp+55) + hex;
                }
                decimal = decimal/16;
            }
            return hex;
            
        }
};

int main(){
    Convert convert;
    int decimal = rand();
    for(int i = 0; i <10;i++){
        cout << "Decimal: " << decimal << endl;
        cout << "Binary: " << convert.getBinary(decimal) << endl;
        cout << "Hex: " << convert.getHex(decimal) << endl;
        decimal =rand();
    }
    
    return 0;
}