    #include <iostream>
    using namespace std;

    class text{
        private:
            string teks;
            int jumlah;
        public:
            text(){ 

            }
            text(string teks, int jumlah){
                this->teks = teks;
                this->jumlah = jumlah;
            }

            void cetak(){
                for(int i=0; i<jumlah; i++){
                    cout<< i+1 <<" "<<teks<<endl;
                }
            }

            void get_input(){
                cout<< " masukkan teks : ";
                getline(cin, this->teks);
                cout << " masukkan jumlah : ";
                cin>>this->jumlah;
            }
    };

    int main(){
        // input menggunakan method
        text data;
        data.get_input();
        data.cetak();
        // langsung input ke dalam method constructor
        text data2("awokawoawo", 5);
        data2.cetak();
    }