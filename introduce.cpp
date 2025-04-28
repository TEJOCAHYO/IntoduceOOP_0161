#include <iostream>
using namespace std;

class Hewan{
    private:
    string jeniskelamin;
    public:
    string tipe;
    string umur;

    void InputData(){
        cout << "masukan jenis kelamin =" << endl;
        cin >> jeniskelamin;
        cout << "masukan tipe = " << endl;
        cin >> tipe;
        cout << "masukan umur = " << endl;
        cin >> umur;
    }

    void TampilHewan(){
        cout << "jeniskelaminnya adalah " << jeniskelamin << endl;
    }
 
};

int main(){
    Hewan ambon;
    ambon.InputData();
    cout << "umurnya adalah " << ambon.umur << endl;
    cout << "tipenya adalah " << ambon.tipe << endl;
}