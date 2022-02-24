#include <iostream>
#include <conio.h>

using namespace std;

class Urutan
{
	private:
		int bil[5];
	public:

		int getBilangan()
		{
			return bil[5];
		}
		int setBilangan(int b[5])
		{
			for(int i = 0; i < 5; i++){
				bil[i] = b[i];
			}
		}
		float avg()
		{
			float sum = 0;
			for(int i = 0; i < 5; i++){
				sum += bil[i];
			}
			return sum/5.0;
		}	
		int max(){
			int max,temp;
			for(int i = 0; i < 5; i++){
				temp = bil[i];
				if(i == 0)
					max = bil[i];
				else if(temp > max)
					max = temp;
			}
			return max;
		}
		int min()
		{
			int min, temp;
			for (int i = 0; i < 5; i++)
			{
				temp = bil[i];
				if (i == 0)
					min = bil[i];
				else if (temp < min)
					min = temp;
			}
			return min;
		}

		int getIndex(int value) { 
			for(int i = 0; i < 5; i++){
				if( value == bil[i]){
					return i;
				}
					
			} 
		}
};

int main()
{
	Urutan Bilangan;
	float min, max, indeks, avg; 
	int bil[5] = {-5,-3,-6,-3,-4};
	Bilangan.setBilangan(bil);
	avg = Bilangan.avg();
	max = Bilangan.max();
	min = Bilangan.min();
	indeks = Bilangan.getIndex(-3);
	cout<< "avg " << avg<< endl;
	cout<< "max " << max<< endl;
	cout<< "min " << min<< endl;
	cout<< "indeks dari -3 : " << indeks<<endl;


}
