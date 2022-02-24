#include <iostream>
#include <cstdlib>

using namespace std;

class Segitiga
{
	private:
		double alas;
		double tinggi;
		double sisi;
	public:
		double luas, keliling;
		
		double getSisi()
		{
			return sisi;
		}
		double getAlas()
		{
			return alas;
		}	
		double getTinggi()
		{
			return tinggi;	
		}
		
		void setAlas(double a)
		{
			alas = a;
		}	
		void setTinggi(double t)
		{
			tinggi = t;
		}
		void setSisi(double s)
		{
			sisi = s;
		}
		void kalkulasiLuas()
		{
			luas = (alas*tinggi)/2;
			cout << "Luas: " << luas << endl;
		}	
		void kalkulasiKeliling()
		{
			keliling = 3 * sisi;
			cout << "Keliling"	<< keliling << endl;
		}
};

int main()
{
    double a;
	system("Color 0E");
	Segitiga Program;
	cout << "+++ Program Luas & Keliling Segitiga +++\n";
	cout << "=========================================\n";
	// Program.getAlas();
	// Program.getSisi();
	// Program.getTinggi();
	cout << "Input Alas: ";
    cin>>a;
    // Program.alas = alas;
	Program.setAlas(a);
    cout<<"alas : "<< Program.getAlas()<<endl;
	// //cout << "Input Tinggi: ";
	// Program.setTinggi(5);
	// //cout << "Input Sisi: ";
	// Program.setSisi(5);
	
	// Program.kalkulasiLuas();
	// Program.kalkulasiKeliling();
	
	cout << "=========================================\n";
}
