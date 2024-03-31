

#include <iostream>
using namespace std;

int main() {
    int opcion, resp;
    string nombre, nacionalidad, equipo, mensaje; 
    int edad;

    do {
        cout << "Bienvenido aficionado del futbol y a la liga mx, por favor escoge que quieres saber\n";
        cout << "\nDigite lo que quiere realizar: \n";
        cout << "\n1.- Registrarme \n";
        cout << "2.- Saber si puedo pasar al estadio con descuento\n";
        cout << "3.- Saber si hay descuentos en mercancia de mi equipo\n";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Escogio ingresar sus datos\n";
            cin.ignore(); // Limpiar el buffer antes de leer la cadena
            cout << "Ingrese su nombre: ";
            getline(cin, nombre);
            cout << "Ingrese su edad: ";
            cin >> edad;
            cin.ignore(); 
            cout << "Ingrese su nacionalidad: ";
            cin >> nacionalidad;
            cin.ignore(); 
            cout << "Ingrese el equipo de futbol al que apoya: ";
            getline(cin, equipo);
            cout << nombre << " tiene " << edad << " anios, su nacionalidad es " << nacionalidad << " y apoya a " << equipo << "\n Has sido registrado(a)!" << endl;
            break;

        case 2:
            cout << "Descuento de boleto \n";
            cout << "Ingrese su edad: ";
            cin >> edad;
            if (edad >= 17) {
                mensaje = "No tiene descuento, aficionado(a).";
            } else if (edad > 13 && edad <= 16) {
                mensaje = "Aficionado chiquito, tiene usted descuento del 15%. =) ";
            } else {
                mensaje = "Aficionado chiquito, tiene usted descuento del 25%. =) ";
            }
            cout << mensaje << endl;
            break;

        case 3:
            cout << "Descuento en mercancia \n";
            cout << "Ingrese su equipo: ";
            cin >> equipo;
            if (equipo == "chivas" || equipo == "guadalajara" || equipo == "america" || equipo == "cruz azul" || equipo == "pumas" || equipo == "san luis" || equipo == "atlas") {
                mensaje = "Si hay descuentos en mercancia de tu equipo \n";
                cout << mensaje << endl;

                int descuento, playeras, shorts, gorras, calcetas;

                cout << "Que desea comprar?\n";
                cout << "\n1) Playeras" "\n2) Shorts" "\n3) Gorras" "\n4) Calcetas\n";
                cin >> descuento;

                switch (descuento) {
                    case 1:
                        cout << "Las playeras tienen un 10% de descuento" << endl;
                        break;
                    case 2:
                        cout << "Las shorts tienen un 15% de descuento" << endl;
                        break;
                    case 3:
                        cout << "Las gorras tienen 25% de descuento" << endl;
                        break;
                    case 4:
                        cout << "Las calcetas tienen 30% de descuento" << endl;
                        break;
                    default:
                        cout << "Opcion invalida\n";
                        break;
                }
            } else {
                mensaje = "No hay descuentos en mercancia de tu equipo";
                cout << mensaje << endl;
            }
            break;

        default:
            cout << "Opcion invalida\n";
            break;
        }

        cout << "Desea realizar algo mas? 1) Si  2) No\n";
        cin >> resp;

    } while (resp == 1);

    return 0;
}

			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		//	do{
		//		cout "estos son tus datos"
		//	}
			
			
	
	

