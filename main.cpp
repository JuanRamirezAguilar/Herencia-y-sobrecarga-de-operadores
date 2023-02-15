#include <iostream>

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

using namespace std;

class Fecha {

    private:

        int dia;
        int mes;
        int anio;

    public:

        void setFecha(int d, int m, int a) {
            dia = d; mes = m; anio = a;
        }
        void getFecha(){
            cout << dia << " / " << mes << " / " << anio <<endl;
        }

        Fecha operator + (Fecha x) {
            Fecha aux;
            aux.dia += x.dia;
            aux.mes += x.mes;
            aux.anio += x.anio;

            return aux;
        }
        bool operator == (const Fecha x){
            if ((dia == x.dia) && (mes == x.mes) && (anio == x.anio)){
                return true;
            }
            else {
                return false;
            }
        }
        bool operator != (const Fecha x){
            if ((dia != x.dia) && (mes != x.mes) && (anio != x.anio)){
                return true;
            }
            else {
                return false;
            }
        }
        bool operator < (const Fecha x){
            if ((dia < x.dia) && (mes < x.mes) && (anio < x.anio)){
                return true;
            }
            else {
                return false;
            }
        }
        bool operator > (const Fecha x){
            if ((dia > x.dia) && (mes > x.mes) && (anio > x.anio)){
                return true;
            }
            else {
                return false;
            }
        }

};

class Mamifero : public Fecha {

    private:
        
        char genero;
        string dieta;
        Fecha fechaDeNacimiento;

    public:

        Mamifero(){
            genero = ' '; dieta = "";
        }
        void setDieta(string aux) {
            dieta = aux;
        }
        void setGenero (char aux) {
            genero = aux;
        }
        string getDieta () {
            return dieta;
        }
        char getGenero () {
            return genero;
        }

        Mamifero operator + (Mamifero x){
            Mamifero aux;
            aux.dieta += x.dieta;
            aux.genero += x.genero;
            return aux;
        }
        bool operator == (const Mamifero x){
            if ((genero == x.genero) && (dieta == x.dieta)){
                return true;
            }
            else{
                return false;
            }
        }
        bool operator != (const Mamifero x){
            if ((genero != x.genero) && (dieta != x.dieta)){
                return true;
            }
            else{
                return false;
            }
        }
        bool operator < (const Mamifero x){
            if ((dieta < x.dieta) && (genero < x.genero)){
                return true;
            }
            else {
                return false;
            }
        }
        bool operator > (const Mamifero x){
            if ((dieta > x.dieta) && (genero > x.genero)){
                return true;
            }
            else {
                return false;
            }
        }
    
};

class Felino : public Mamifero {

    private:

        string raza;
        string apodo;
        string nombreDelCirco;

    public:

        void constructor (string r, string a, string nDC, char g, string d){
            setRaza(r); setApodo(a); setNombreDelCirco(nDC); setGenero(g); setDieta(d); 
        }
        Felino(){
            raza = apodo = "";
        }
        void setRaza (string aux) {
            raza = aux;
        }
        void setApodo (string aux) {
            apodo = aux;
        }
        void setNombreDelCirco(string aux) {
            nombreDelCirco = aux;
        }
        string getRaza () {
            return raza;
        }
        string getApodo () {
            return apodo;
        }
        string getNombreDelCirco() {
            return nombreDelCirco;
        }

        Felino operator + (Felino x){
            Felino aux;
            aux.raza += x.raza;
            aux.apodo += x.apodo;
            aux.nombreDelCirco += x.nombreDelCirco;
            return aux;
        }
        bool operator == (const Felino x){
            if ((raza == x.raza) && (apodo == x.apodo) && (nombreDelCirco == x.nombreDelCirco)){
                return true;
            }
            else{
                return false;
            }
        }
        bool operator != (const Felino x){
            if ((raza != x.raza) && (apodo != x.apodo) && (nombreDelCirco != x.nombreDelCirco)){
                return true;
            }
            else{
                return false;
            }
        }
        bool operator < (const Felino x){
            if ((raza < x.raza) && (apodo < x.apodo) && (nombreDelCirco < x.nombreDelCirco)){
                return true;
            }
            else {
                return false;
            }
        }
        bool operator > (const Felino x){
            if ((raza > x.raza) && (apodo > x.apodo) && (nombreDelCirco > x.nombreDelCirco)){
                return true;
            }
            else {
                return false;
            }
        }

};

class GatoDomestico : public Felino {

    private:

        string nombre;
        string nombreDelDuenio;
        int edad;

    public:

        void constructor(string n, string nD, int e, string r, string a, string nDC, char g, string d){
            nombre = n; nombreDelDuenio = nD; edad = e; setRaza(r); setApodo(a); setNombreDelCirco(nDC); setGenero(g); setDieta(d); 
        }
        GatoDomestico(){
            nombre = nombreDelDuenio = ""; edad = 0;
        }
        void setNombre(string aux) {
            nombre = aux;
        }
        void setNombreDelDuenio(string aux) {
            nombreDelDuenio = aux;
        }
        void setEdad(int aux) {
            edad = aux;
        }
        string getNombre() {
            return nombre;
        }
        string getNombreDelDuenio(){
            return nombreDelDuenio;
        }
        int getEdad(){
            return edad;
        }

        GatoDomestico operator + (GatoDomestico x){
            GatoDomestico aux;
            aux.nombre += x.nombre;
            aux.nombreDelDuenio += x.nombreDelDuenio;
            aux.edad += x.edad;
            return aux;
        }
        bool operator == (const GatoDomestico x){
            if ((nombre == x.nombre) && (nombreDelDuenio == x.nombreDelDuenio) && (edad == x.edad)){
                return true;
            }
            else{
                return false;
            }
        }
        bool operator != (const GatoDomestico x){
            if ((nombre != x.nombre) && (nombreDelDuenio != x.nombreDelDuenio) && (edad != x.edad)){
                return true;
            }
            else{
                return false;
            }
        }
        bool operator < (const GatoDomestico x){
            if ((nombre < x.nombre) && (nombreDelDuenio < x.nombreDelDuenio) && (edad < x.edad)){
                return true;
            }
            else {
                return false;
            }
        }
        bool operator > (const GatoDomestico x){
            if ((nombre > x.nombre) && (nombreDelDuenio > x.nombreDelDuenio) && (edad > x.edad)){
                return true;
            }
            else {
                return false;
            }
        }

};


void pausa() {
    cout<<endl << "Presiona \"Enter\" para continuar...";
    cin.clear(); cin.sync(); cin.ignore();
}

int main () {

    GatoDomestico Minino;
    Minino.constructor("Peluche", "Juan", 5, "Persa", "", "", 'F', "Carnivoro");
    Minino.setFecha(12, 04, 1997);

    Felino EstrellaCirco;
    EstrellaCirco.constructor("Tigre Indio", "Tonio", "Circo Ataide", 'M', "Carnivoro");
    EstrellaCirco.setFecha(22, 10, 2023);

    int opcMenu;

    do {

        system(CLEAR);
        cout << "Que quieres hacer?" <<endl<<endl;
        cout << "1)._ Cambiar el nombre del duenio del minino." <<endl;
        cout << "2)._ Cambiar el nombre del circo de la Estrella de Circo." <<endl;
        cout << "3)._ Imprimir informacion del Minino." <<endl;
        cout << "4)._ Imprimir informacion de la Estrella de Circo." <<endl;
        cout << "0)._ Salir." <<endl<<endl;
        cout << "Tu respuesta: ";
        cin >> opcMenu;

        switch (opcMenu) {
            
            case 1:{

                string auxNombre;

                system(CLEAR);
                cout << "Nombre del Duenio del Minino: " << Minino.getNombreDelDuenio() << " ." <<endl<<endl;
                cout << "Que nombre quieres cambiarle?" <<endl;
                cout << "Tu respuesta: ";
                fflush(stdin);
                getline(cin, auxNombre);
                Minino.setNombreDelDuenio(auxNombre);
                cout << endl << "Nombre cambiado...";
                pausa();
            }
                break;

            case 2:{

                string auxNombre;
                system(CLEAR);
                cout << "Nombre del Circo del Felino: " << EstrellaCirco.getNombreDelCirco() << " ." <<endl<<endl;
                cout << "Que nombre quieres cambiarle?" <<endl;
                cout << "Tu respuesta: ";
                fflush(stdin);
                getline(cin, auxNombre);
                EstrellaCirco.setNombreDelCirco(auxNombre);
                cout << endl << "Nombre cambiado...";
                pausa();
            }
                break;

            case 3:

                system(CLEAR);
                cout << "***Datos del Minino***" <<endl<<endl;
                cout << "Nombre:"  << Minino.getNombre() <<endl;
                cout << "Nombre del Duenio: " << Minino.getNombreDelDuenio() <<endl;
                cout << "Edad del Minino: " << Minino.getEdad() <<endl;
                cout << "Raza del Minino: " << Minino.getRaza() <<endl;
                cout << "Apodo del Mamifero: " << Minino.getApodo() <<endl;
                cout << "Nombre del Circo: " << Minino.getNombreDelCirco() <<endl;
                cout << "Genero del Minino: " << Minino.getGenero() <<endl;
                cout << "Dieta del Minino: " << Minino.getDieta() <<endl;
                cout << "Fecha de Nacimiento del Minino: "; Minino.getFecha();
                pausa();
                break;
        
            case 4:

                system(CLEAR);
                cout << "***Datos de la Estrella del Circo***" <<endl<<endl;
                cout << "Apodo de la Estrella del Circo: " << EstrellaCirco.getApodo() <<endl;
                cout << "Raza de la Estrella de Circo: " << EstrellaCirco.getRaza() <<endl;
                cout << "Nombre del Circo: " << EstrellaCirco.getNombreDelCirco() <<endl;
                cout << "Genero de la Estrella: " << EstrellaCirco.getGenero() <<endl;
                cout << "Dieta de la Estrella: " << EstrellaCirco.getDieta() <<endl;
                cout << "Fecha de Nacimiento de la Estrella: "; EstrellaCirco.getFecha();
                pausa();
                break;

            case 0:
                break;

            default:
                
                system(CLEAR);
                cout << "Opcion equivocada, intentelo de nuevo...";
                cin.clear(); cin.sync(); cin.ignore();
                break;

        }

    } while (opcMenu != 0);

    return 0;

}