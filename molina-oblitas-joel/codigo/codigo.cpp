#include <iostream>
#include <vector>
#include <limits>
#include<string>
using namespace std;

//Struct para los datos de registro
struct registro{
    string nombre;
    string especie;
    string raza;
    string estado_salud;
    string descripcion;
     int edad;
};

//Inicialozar funcion para mostrar registro completo 
void printvector(vector<registro> v);

int main() {
    //Preguntar cuantas mascotas se registran para asi tener un fin al bucle para los registros
    int cantidad_m;
    cout << "Cuantas mascotas va a registrar" << endl;
    cin >> cantidad_m;
    
    //Para que consuma el salto de linea y no utilice el bucle
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    
    //Vector para almacenar el registro
    vector<registro> Almacenar_registro ={};
    
    //Bucle para los registros
    int cantidad = 0;
    while(cantidad < cantidad_m){
        //Nueva instancia para nuevos registros
        registro registro_g;
        
        //Para guardar en la variable dentro de la struct y que luego se almacene en el vector
        cout <<"Nombre de la mascota "<<cantidad + 1<<endl;
        getline(cin, registro_g.nombre);
        
        cout <<"Especie de la mascota "<<cantidad + 1<<endl;
        getline(cin, registro_g.especie);
        
        cout <<"Raza de la mascota "<<cantidad + 1<<endl;
        getline(cin, registro_g.raza);
        
        cout <<"Estado de salud de la mascota "<<cantidad + 1<<endl;
        getline(cin, registro_g.estado_salud);
    
        
        cout <<"Descripcion de la mascota "<<cantidad + 1<<endl;
        getline(cin, registro_g.descripcion);
        
        cout <<"Edad de la mascota "<<cantidad + 1<<endl;
        cin >> registro_g.edad;
        
        //Para que consuma el salto de linea y no utilice el bucle
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        
        //Almacenar la struct de registro_g al vector
        Almacenar_registro.push_back(registro_g);
    
        cantidad++;
    }
    
    //Llamar a la funcion
    printvector(Almacenar_registro);
    return 0;
}

//Cuerpo de la funcion para mostrar registro completo 
void printvector(vector<registro> v){
        int numero_registro = 1;
        for (const auto& registro_actual : v) {
            cout << "Grupo #" << numero_registro++ << ":" << endl;
            cout << "Nombre: " <<registro_actual.nombre
                 << "\nEspecie: " << registro_actual.especie
                 << "\nRaza: " << registro_actual.raza
                 << "\nEstado de salud: " << registro_actual.estado_salud 
                 << "\nDescripcion: " << registro_actual.descripcion 
                 << "\nEdad: " << registro_actual.edad << endl;
            }
}






