#include <iostream>
using namespace std;

class lingkaran{
    public:

    double jarijari;
    double luaslingkaran;

    void InputData(){
        cout << "masukan jarijari " << endl;
        cin >> jarijari;
        
    }

    double hitungluas(){
        return 3.14*jarijari*jarijari;
    }
};

int main(){
    lingkaran bulat;
    bulat.InputData();
    bulat.jarijari;
    cout << endl;
    cout << "luasnya adalah = " << bulat.hitungluas() << endl;
    cout << endl;
}