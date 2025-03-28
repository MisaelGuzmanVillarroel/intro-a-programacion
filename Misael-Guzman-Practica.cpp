/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <limits>
using namespace std;

int main() {
    char dlg_1, dlg_2, dlg_3, dlg_4;
    
    // INICIO DEL JUEGO
    cout << "Bienvenido a la historia titulada: En Misapatos." << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Usted será el protagonista de esta historia, en la que en base a sus decisiones obtendrá un final diferente." << endl;
    cout << "La historia está ambientada principalmente en una Vida Universitaria." << endl;
    cout << "Sin mas charla, comencemos..." << endl;
    cout << "----------------------------------------------------" << endl;

    // PRIMERA DECISIÓN
    while (true) {
        cout << "En un amanecer tranquilo con el cantar de los pájaros, un joven ex estudiante de la Secundaria (recientemente graduado.)" << endl;
        cout << "Despiertas de una desvelada hermosa (con 3 kilos de ojeras en los ojos), pero hermosa.\n" << endl;
        cout << "Te das cuenta que es lunes son las 6 am pero aun es temprano para ir a la universidad.\n ¿Qué piensas hacer?\n" << endl;
        cout << "a) PONTE LOS ZAPATOS SE TE HACE TARDE" << endl;
        cout << "b) Con calma después de todo tienes tiempo para llegar" << endl;
        cout << "c) 15 minutos maaaaas...\n" << endl;
        
        cin >> dlg_1;
        
        if (dlg_1 == 'a' || dlg_1 == 'b' || dlg_1 == 'c') {
            break;
        } else {
            cout << "\nOpción no válida. Por favor ingresa a, b o c.\n" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    switch(dlg_1) {
        // RAMA IR DIRECTO A LA U
        case 'a':
            while(true) {
                cout << "\nTras correr hasta la parada del micro quedas muerto, subes al micro y tiempo después llegas a la uni\n" << endl;
                cout << "a) he llegado temprano, me voy al aula a esperar" << endl;
                cout << "b) meh... desayunito en la u" << endl;
                cout << "c) voy a la biblioteca\n" << endl;
                cin >> dlg_2;
                
                if(dlg_2 == 'a' || dlg_2 == 'b' || dlg_2 == 'c') {
                    break;
                } else {
                    cout << "\nOpción no válida. Por favor ingresa a, b o c.\n" << endl;
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
            }
            
            switch(dlg_2) {
                case 'a': // Final 1
                    cout << "\nPasas tus clases y al final de estas sales con Eito y Eduardo a almorzar" << endl;
                    cout << "FELICIDADES SACASTE EL FINAL NORMAL \"ALMUERZITO FELIZ\"\n" << endl;
                    break;
                    
                case 'b':
                    while(true) {
                        cout << "\nVas a desayunar, pero, ¿qué vas a desayunar?" << endl;
                        cout << "a) Sandwich" << endl;
                        cout << "b) Empanadas\n" << endl;
                        cin >> dlg_3;
                        
                        if(dlg_3 == 'a' || dlg_3 == 'b') {
                            cout << "\nDespués de desayunar vas al aula y empiezas tus clases de manera normal\n" << endl;
                             cout << "\nPasas tus clases y al final de estas sales con Eito y Eduardo a almorzar" << endl;
                             cout << "FELICIDADES SACASTE EL FINAL NORMAL \"ALMUERZITO FELIZ\"\n" << endl;
                            break;
                        } else {
                            cout << "\nOpción no válida. Por favor ingresa a o b.\n" << endl;
                            cin.clear();
                            cin.ignore(10000, '\n');
                        }
                    }
                    break;
                    
                case 'c':
                    while(true) {
                        cout << "\nVas a la Biblioteca y te topas con coleguitaaaaa(uno de mis primeros amigos de la u)" << endl;
                        cout << "a) HABLAS CON EL(Se desaparecio hace mucho tiempo)" << endl;
                        cout << "b) Te sientas con el\n" << endl;
                        cin >> dlg_3;
                        
                        if(dlg_3 == 'a' || dlg_3 == 'b') {
                            cout << "\nDespués de una charla muy muy muuuuuy reflexiva te dice que ira a la misma clase que tu y bueno lo acompañas\n" << endl;
                             cout << "\nPasas tus clases y al final de estas sales con Eito, Eduardo y Fabian a almorzar" << endl;
                             cout << "FELICIDADES SACASTE EL FINAL MEDIO \"LOS CUATRO MOSQUETEROS\"\n" << endl;
                            break;
                        } else {
                            cout << "\nOpción no válida. Por favor ingresa a o b.\n" << endl;
                            cin.clear();
                            cin.ignore(10000, '\n');
                        }
                    }
                    break;
            }
            break;
            
        // RAMA CON CALMA A LA U
        case 'b':
            while(true) {
                cout << "\nTu calma es realmente estresante... pero que más da, sigues en casa que \"bien\" ¿qué harás ahora?\n" << endl;
                cout << "a) hmmm... realmente nada" << endl;
                cout << "b) alistarme con calma" << endl;
                cout << "c) meter mis cosas en la mochila, no se me vaya olvidar nada\n" << endl;
                cin >> dlg_3;
                
                if(dlg_3 == 'a' || dlg_3 == 'b' || dlg_3 == 'c') {
                    break;
                } else {
                    cout << "\nOpción no válida. Por favor ingresa a, b o c.\n" << endl;
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
            }
            switch (dlg_3) {
                case 'a': ////dramatismo
                    cout << "\n...";
                    cout << "\n..."; 
                    cout << "\n...";
                    cout << "\n\n¿En serio no harás nada? (Presiona Enter)";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cin.get();  
                    
                    cout << "La universidad te espera, pero recuerdas que tienes libre albedrio" << endl;
                    cout << "FELICIDADES SACASTE UN FINAL... \"PROCRASTINACION MAESTRA\"\n" << endl;
                    break;
                    
                case 'b':
                    cout << "\n\nTe alistas con calma y te das cuenta que dejaste dinero en la cocina lo tomas ahora tienes +10bs en total llevas en la cartera 30";
                    cout << "Terminas llegando a la universidad, pasas tus clases y sales a almorzar con Eito y Eduardo\n";
                    cout << "Gracias a que tomaste el tiempo de verificar tus cosas ahora te alcanza para un buen almuerzo y una soda...me das celos\n";
                    cout << "FELICIDADES SACASTE EL FINAL FELIZ... \"TENGO QUE COCINAR Y TRAER MI ALMUERZO DESDE AHORA\"\n" << endl;
                     break;
                    
                case 'c':
                    cout << "\n\nAl alistarte con calma haz olvidado tu cargador de la computadora (osea que descubres que tu mente funciona al reves) ajajjaj" << endl;
                    cout << "Terminas llegando a la universidad, pasas tus clases ahora sin la computadora y haz hecho tus trabajos en la computadora de la universidad y al terminar sales a almorzar con Eito y Eduardo\n";
                    cout <<  "FELICIDADES SACASTE EL FINAL NORMAL \"ALMUERZITO FELIZ\"\n" << endl;
                     break;
            }
            break;
            
        // TERCERA RAMA
        case 'c': 
        {
            int intentos = 0;
            const int maxintentos = 3;
            char opcion;
            
            // Primer menú
            while(true) {
                cout << "\nTe terminas durmiendo pero todavía no es tarde\n";
                cout << "a) 10 minutos no harán daño\n";
                cout << "b) levántate\n";
                cout << "Opción: ";
                cin >> dlg_4;
                
                if(dlg_4 == 'a' || dlg_4 == 'b') {
                    break;
                } else {
                    cout << "\nOpción no válida. Por favor ingresa a o b.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
            }

            // Si eligió dormir más
            if(dlg_4 == 'a') {
                while(intentos < maxintentos) {
                    cout << "\nTe quedaste dormido (" << intentos+1 << "/" << maxintentos << ")\n";
                    cout << "a) Seguir durmiendo\n";
                    cout << "b) Levantarse\n";
                    cout << "Opción: ";
                    cin >> opcion;
                    
                    if(opcion == 'a') {
                        intentos++;
                        if(intentos >= maxintentos) {
                            cout << "\n¡Te quedaste dormido completamente!\n";
                            cout << "FELICIDADES SACASTE UN FINAL MALO... \"SUEÑOS MALOS\"\n";
                            break;
                        }
                    } else if(opcion == 'b') {
                        cout << "\nLograste levantarte a tiempo\n";
                        cout << "Llegaste a la universidad temprano, pasaste clases hasta la hora del almuerzo\n";
                        cout << "Después vas a almorzar con Eito y Eduardo\n";
                        cout << "FELICIDADES SACASTE EL FINAL NORMAL \"ALMUERZITO FELIZ\"\n";
                        break;
                    } else {
                        cout << "\nOpción no válida. Por favor ingresa a o b.\n";
                        cin.clear();
                        cin.ignore(10000, '\n');
                    }
                }
            } else {
                // Si eligió levantarse inmediatamente
                cout << "\nLograste levantarte a tiempo\n";
                cout << "Llegaste a la universidad temprano, pasaste clases hasta la hora del almuerzo\n";
                cout << "Después vas a almorzar con Eito y Eduardo\n";
                cout << "FELICIDADES SACASTE EL FINAL NORMAL \"ALMUERZITO FELIZ\"\n";
            }
            break;
        }
    }
    
    return 0;
}