#include <iostream>

int main(){
    int list[5] = {1,2,3,4,5};
    int list2[5]= {1,2,3,4,5};
    // int a;
    // int b=9;
    // a=b;
    for(int i=0; i<5;i++)
        list2[i] = list[i];
    // cout<<list2<<endl;
    return 0;
}