#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int main(){

    //Console in

    int year;
    int price;
    int calc;

    //internal
    
    int depr;
    int acum = 0;
    int anualant;

    double percentage = 20;

    bool debug = false;

    //math

    percentage = percentage/100;

    //assignments

    cout << "Entre el año del vehiculo (ej. 2015) " << endl;
    cin >> year;

    cout << "Entre valor del vehiculo (ej. 100000) " << endl;
    cin >> price;

    cout << "Entre el año a calcular (ej. 2050) " << endl;
    cin >> calc;

    //1st year maths

    depr = price * percentage;
    acum = acum + depr;

    cout << " " << endl; //Nueva linea

    cout << "Año: " << year << endl;
    cout << "Depreciacion: " << depr << endl;
    cout << "Depreciacion acumulada: " << acum << endl;
    cout << "Valor actual: " << price << endl;

    anualant = price - acum;

    while (year < calc){

        //math

        if (depr == 0){

            cout << " " << endl; //Nueva linea
            cout << "Terminado!";
            return 0; //Termina si depreciacion toca 0
        }

        cout << " " << endl; //Nueva linea

        year = year + 1;
        depr = anualant * percentage;
        acum = acum + depr;
        anualant = price - acum;

        //console outs

        cout << "Año: " << year << endl;
        cout << "Depreciacion: " << depr << endl;
        cout << "Depreciacion acumulada: " << acum << endl;
        cout << "Valor actual: " << price << endl;

        sleep_for(milliseconds(50));

    }

    cout << " " << endl; //Nueva linea
    cout << "Terminado!";

    return 1;
}