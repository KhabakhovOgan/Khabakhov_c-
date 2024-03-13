#include <iostream>

struct Particle{
    int radius = 1;
    int mass = 1;
    float x = 0, y = 0;
    float v_x = 0, v_y = 0;

    Particle(float radius, float mass, float x_coord, float y_coord, float v_x, float v_y)
    : radius(radius), mass(mass), x(x_coord){

    }
}electron, positron[10];

struct Empty{};

void coilder(Particle* electron, Particle muon){
    //electron->v_y
    //muon->v_y
}

union Data{
    int i;
    float f;
    double d;

};

using namespace std;

int main(){
    Data unioned_data;
    unioned_data.i = 12;
    cout << unioned_data.i;
    Particle electron = Particle(1, 1, 2, 3, 3, 4);
    Particle *muons = new Particle[100];
    char name = 'e';
    electron.x = 12;
    electron.v_x = -2.5;
    positron[0].v_y = 12;
    positron->v_x = 14;
    cout << positron[0].v_y <<' ' << positron->v_x << endl;
    cout << electron.x << ' ' << electron.y<< endl ;
    cout << sizeof(electron) << endl;
    cout << sizeof(Empty) << endl;
    cout << sizeof(positron) << endl;
    cout << sizeof(*positron) << endl;
    //print(::electron); выводит глобальное значение переменной
    //print(electron);   выводит заданное в main значение переменной

    return 0;
}
