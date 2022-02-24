#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#define LOW 0
#define HIGH 1
using namespace std;

class LineFollower{
    private:
    bool line[3];
    time_t timer;

    public:
    LineFollower(){
        while (true)
        {
            update_sensor();
            cout << "\n\n\n";
            printf("\
            kiri     tengah      kanan\n\
           ___________________________\n\
          /                           \\ \n\
         / line[0]    line[1]  line[2] \\ \n\
        |                               |\n\
        |   %d           %d         %d     |\n\
        |                               |\n\
        |                               |\n\
        |         line[x] == high       |\n\
        |    jika membaca garis hitam   |\n\
        |                               |\n\    
     _ _|_______________________________|_ _\n\
    |/ /|_______________________________| / |\n\
    | / |                               |/ /|\n\
    |/ /|                               | / |\n\
    | / |                               |/ /|\n\
    |/_/|_______________________________|_/_|\n\
        |_______________________________|\n\n",
                   line[0], line[1], line[2]);
            cout << " \t=========== SENSOR ===========\n"
                 << endl;
            cout << "\t kiri \t\t tengah \t kanan" << endl;
            cout << "\t   " << line[0] << " \t\t   " << line[1] << " \t\t   " << line[2] << "\n\n";

            if(line[0] == LOW && line[1] ==LOW && line[2] == LOW ){
                // 0 0 0 
                cout<<"\tno line found! (berputar mencari garis)"<<endl;
                motor_update(50, 25);
            }
            else if(line[0] == LOW && line[1] == LOW && line[2] == HIGH){
                // 0 0 1
                cout << "\tbelok ke kanan sedikit" << endl;
                motor_update(75, 25);
            }
            else if(line[0] == LOW && line[1] == HIGH && line[2] == LOW){
                // 0 1 0 
                cout<<"\tgerak maju"<<endl;
                motor_update(100,100);
            }
            else if(line[0] == LOW && line[1] == HIGH && line[2] == HIGH){
                // 0 1 1
                cout<<" \tbelok ke kanan" <<endl;
                motor_update(50,-25);
            }
            else if (line[0] == HIGH && line[1] == LOW && line[2] == LOW){
                // 1 0 0 
                cout << " \tbelok ke kiri sedikit" << endl;
                motor_update(25, 75);
            }
            else if (line[0] == HIGH && line[1] == LOW && line[2] == HIGH){
                // 1 0 1
                cout << " \tkondisi tidak jelas ===> mundur" << endl;
                motor_update(-25, -25);
            } 
            else if (line[0] == HIGH && line[1] == HIGH && line[2] == LOW){
                // 1 1 0
                cout << " \tbelok ke kiri" << endl;
                motor_update(-25, 50);
            }
            else if (line[0] == HIGH && line[1] == HIGH && line[2] == HIGH){
                // 0 1 1
                cout << " \t================" << endl;
                cout << " \t===  FINISH  ===" << endl;
                cout << " \t================" << endl;
                motor_update();
            }

            Sleep(2000);
            // system("pause");
            system("cls");  // uncommand untuk tampilan yang lebih baik
            
        }
        
    }

    void motor_update(int t_kiri, int t_kanan){
        cout<< "\t motor kiri \t motor kanan" <<endl;
        printf("\t   %d     \t     %d \n\n",t_kiri,t_kanan);
    }

    void motor_update(){
        cout << "\t motor kiri \t motor kanan" << endl;
        cout << "\t     0                 0\n"<< endl;
    }

    void update_sensor(){
        time(&timer);
        srand(timer);
        for(int i=0; i<3; i++){
            line[i] = rand()%2;
        }
    }
};

int main(int argc, char **argv){
    LineFollower robot;
    return 0;
}