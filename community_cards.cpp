/*Luis Alfredo Carmona Martínez - A01707658 */
#include <bits/stdc++.h>
#define fore(i, l, r) for (long long i = (l); i < (r); i++)
#define ll long long
#define ull unsigned long long
#define nl cout<<"\n"
#define cnl "\n"
#define rfc "\033[31;1m"
#define gfc "\033[32;1m"
#define yfc "\033[33;1m"
#define bfc "\033[34;1m"
#define pfc "\033[35;1m"
#define cfc "\033[36;1m"
#define nfc "\033[0m"
using namespace std;

class Tarjetas {
    int id;

int idSeleccion(){
    id = rand() % 16;

    return id;
}

    void CommunityChestCards(){
        switch(id){
            case 1: {
                cout<<"Avance a caseta. Recibe $200."<<endl;
                jugadores[idJugador].modificarDinero(200);

                break;
            }

            case 2:{
                cout<<"Eres foráneo y tus papása te acaban de depositar. Recibe $200."<<endl;
                jugadores[idJugador].modificarDinero(200);

                break;
            }
            case 3:{
                cout<<"Te caíste de una bicicleta, te salió un morete y TecMed te cobró el hielo. Paga $50."<<endl;
                jugadores[idJugador].modificarDinero(-50);

                break;
            }

            case 4:{
                cout<<"Decidiste emprender y vendiste brownies. Fueron un éxito. Recibe $50."<<endl;
                jugadores[idJugador].modificarDinero(50);

                break;
            }
            case 5:{
                cout<<"Ahórrate un ETHOS. Sal del Centro de Dignidad Humana gratis."<<endl;
                jugadores[idJugador].setStatusSalirCarcel(1);
                

                break;
            }

            case 6:{
                cout<<"Dirígete al Centro de Dignidad Humana. Ve directamente, no pases a Caseta, no cobres $200."<<endl;
                jugadores[idJugador].setStatusCarcel(true);
                jugadores[idJugador].mover(10);


                break;
            }
            case 7:{
                cout<<"La salud mental es primero. Diste de baja una materia. Recibe $100."<<endl;
                jugadores[idJugador].modificarDinero(100);

                break;
            }

            case 8:{
                cout<<"Decidiste llevar lonche en vez de comprar en campus. Recibe $20."<<endl;
                jugadores[idJugador].modificarDinero(20);

                break;
            }
            case 9:{
                cout<<"Salvaste al equipo de reprobar. Recibe $10 de cada jugador."<<endl; //no estoy muy seguro de este caso
                jugadores[idJugador].modificarDinero(-jugadores.size());
                jugadores[idJugador].modificarDinero(-(jugadores.size()*50));
                for (int i=0; jugadores.size();i++){
                    jugadores[i].modificarDinero(+50);
                }

                break;
            }

            case 10:{
                cout<<"Después de semana 5 requieres ayuda psiquiátrica. Tu seguro de gastos médicos mayores lo cubre. Recibe $100."<<endl;
                jugadores[idJugador].modificarDinero(100);

                break;        
            }
            case 11:{
                cout<<"La maquina expendedora se tragó tu billete. Paga $50"<<endl;
                jugadores[idJugador].modificarDinero(-50);

                break;
            }

            case 12:{
                cout<<"Hora de cubrir tu seguro de gastos médicos mayores. Paga $100."<<endl;
                jugadores[idJugador].modificarDinero(-100);

                break;
            }
            case 13:{
                cout<<"Ganaste un termo de Linda REVO. Recibe $25."<<endl;
                jugadores[idJugador].modificarDinero(25);

                break;
            }

            case 14:{
                cout<<"Ser foráneo sale caro. Paga $40 por cada piso, $150 por cada edificio."<<endl;

                break;
            }
            case 15:{
                cout<<"Es Jueves de 2x1 en Dolphy y te ahorraste dinero. Recibe $10."<<endl;
                jugadores[idJugador].modificarDinero(10);

                break;
            }

            case 16:{
                cout<<"Te graduaste de administración de empresas. Heredas el negocio de tu papá. Recibe $100."<<endl;
                jugadores[idJugador].modificarDinero(100);

                break;
            }
        }
    };
};

int main(){
    
    nl;
    return 0;
}