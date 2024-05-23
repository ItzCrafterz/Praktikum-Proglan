#include <iostream>
using namespace std;

class Car {
    public: 
            int kecepatan ;
            int bensin ;
            int bensinmax ;
            int penumpang ;
        Car(){
            kecepatan = 10;
            bensin = 100;
            bensinmax = 100;
            penumpang = 4;
        }

    void jalan(){
        bensin -= kecepatan;
        cout<<"Mobil ini berjalan sejauh"<<kecepatan<<"km/jam"<<endl; 
    }
};

class SuperCar : public Car{
    public :
        SuperCar(){
            kecepatan = 100;
            bensin = 1000;
            bensinmax = 1000;
        }
};

class Truk : public Car{
    public :
        int kapasitas;
        int kapasitasmax;

        Truk(){
            kapasitas = 1;
            kapasitasmax = 100;
        }

        void angkut(int barang){           
            if(kapasitas <= kapasitasmax){
                kapasitas = kapasitas + barang;
            }
            cout<<"Truk ini mengangkut "<<kapasitas<<"kg"<<endl;
        }
        void jalan(){
            bensin = kecepatan + (kapasitas/2);
            cout<<"Mobil ini berjalan sejauh"<<kecepatan<<"<km/jam dengan kapasitas terpakai"<<kapasitas<<"kg";
        }        
};

int main(){
    Car mobil;
    SuperCar lambo;
    Truk pickup;
    mobil.jalan();
    lambo.jalan();
    pickup.jalan();
    pickup.angkut(10);
    pickup.jalan();
    return 0;
}