#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    int candidatos;

    cout<<"Ingrese numero de candidatos:"<<endl;
    cin>>candidatos;
    cout<<endl<<endl;

    string nombre[candidatos];

    double percentage[candidatos];

    int votes[candidatos];

    double average = 0;


    for(int i=0;i<candidatos;i++){

        cout<<"Ingresa el nombre del candidato: "<<endl;
        cin>>nombre[i];
        cout<<endl;



        cout<<"Ingresa el numero de votos: "<<endl;
        cin>>votes[i];

        cout<<endl<<endl;

    }

    for(int i=0;i<candidatos;i++){ //Parte de la funcion de porcentaje, suma todos los votos juntos

        average = average + votes[i];

    }

    for(int i=0;i<candidatos;i++){ //Ganador

        if(votes[0] < votes[i]) votes[-1] = votes[i];

    }

    cout<<"El ganador es el candidato con:   "<<votes[-1]<<endl<<endl;

    cout<<"Datos:"<<endl;

    cout<<"Nombre"<<"     "<<"Votos"<<"     "<<"Porcentaje"<<endl; //Encabezamiento

    for(int i=0;i<candidatos;i++){

        cout<<nombre[i]<<"          ";

        cout<<votes[i]<<"          ";

        percentage[i] = votes[i] / average*100; //Obtener el porcentaje en el momento, para no crear otro loop.

        cout<<round(percentage[i])<<"          "<<endl;

    }

    return 0;
}
