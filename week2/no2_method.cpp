#include <iostream>
#include <string>
using namespace std;

class Calculator{
    private:
        double *val;
        string m_perhitungan;        

        float hitung(){
            float hasil;
            string temp = "", temp2 = "";
            char opr;
            bool state = false;

            for(int i=0; i<m_perhitungan.length();i++){
                if(m_perhitungan[i] == '+' || m_perhitungan[i] == '-' || m_perhitungan[i] == '*' || m_perhitungan[i] == '/'){
                    opr = m_perhitungan[i];
                    state = true;
                }
                else if (m_perhitungan[i] == ' ' || m_perhitungan[i] == ')')
                {
                    continue;
                }
                else if(m_perhitungan[i] == '('){
                    if(state == true){
                        temp2 += m_perhitungan[i+1];
                    }
                    else{
                        temp += m_perhitungan[i+1];
                    }
                    i++;
                }
                else{
                    if(state == true){
                        temp2 += m_perhitungan[i];
                    }
                    else{
                        temp += m_perhitungan[i];
                    }
                }
            }
            switch (opr)
            {
            case '+':
                hasil = stof(temp) + stof(temp2);
                break;
            case '-':
                hasil = stof(temp) - stof(temp2);
                break;
            case '*':
                hasil = stof(temp) * stof(temp2);
                break;
            case '/':
                hasil = stof(temp) / stof(temp2);
                break;
            default:
                break;
            }
            return hasil;
        }

    public:
        Calculator(){
            cout<< " Program untuk mengihtung operasi antar 2 bilangan"<<endl;
            cout << "operator yang dapat di gunakan : (+)(-)(*)(/)"<<endl;
        }
        void run(){
            float hasil;
            cout<< "input misal : x+y atau x/y"<<endl;
            getline(cin, m_perhitungan);
            hasil = hitung();
            cout<< " hasil dari "<< m_perhitungan << " = " << hasil<<endl;
        }
};

int main(){
    Calculator calc;
    while(true)
        calc.run();
}