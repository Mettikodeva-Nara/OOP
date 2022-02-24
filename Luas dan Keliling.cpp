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
	system("Color 0E");
	Segitiga Program;
	cout << "+++ Program Luas & Keliling Segitiga +++\n";
	cout << "=========================================\n";
	Program.getAlas();
	Program.getSisi();
	Program.getTinggi();
	//cout << "Input Alas: ";
	Program.setAlas(a);
	//cout << "Input Tinggi: ";
	Program.setTinggi(t);
	//cout << "Input Sisi: ";
	Program.setSisi(s);
	
	Program.kalkulasiLuas();
	Program.kalkulasiKeliling();
	
	cout << "=========================================\n";
}
