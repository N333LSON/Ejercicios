#include <iostream>
#include <cmath>
using namespace std;

void p1(){
    int longi, anc, area;
    cout << "Ingrese la longitud: ";
    cin >> longi;
    cout << "Ingrese el ancho: ";
    cin >> anc;

    if (longi <= 0 || anc <= 0){
        cout << "No puede ser menor o igual a 0";
        return;
    }

    area = longi * anc;
    cout << "Area: " << area << endl;
}

void p2(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    if (n%2==0){
        cout << "Es par" << endl;
    } else {
        cout << "Es impar" << endl;
    }
}

void p3(){
    int x,y,z;
    int g1,g2;

    cout << "1er puntaje: ";
    cin >> x;
    cout << "2do puntaje: ";
    cin >> y;
    cout << "3er puntaje: ";
    cin >> z;

    if (x>y){
        g1 = x;
    } else{
        g1 = y;
    }

    if (g1>z){
        g2 = g1;
    } else{
        g2 = z;
    }

    cout << "El mayor valor es " << g2 << endl;
}

void p4(){
    int x;
    cout << "Edad: ";
    cin >> x;
    if (x < 0 || cin.fail()){
        cout << "No se aceptan letras o numeros negativos";
        return;
    }
    if (x < 17){
        cout << "Ud. tiene acceso" << endl;
    } else{
        cout << "Ud. no tiene acceso" << endl;
    }
}

void p5(){
    int h,s,t;
    cout << "Horas de trabajo: ";
    cin >> h;
    cout << "Ganancia por hora: ";
    cin >> s;

    t = (h * s)*7;
    cout << "Salario semanal: " << t << endl;
}

void p6(){
    double c,f;
    cout << "Ingresar grados celsius: ";
    cin >> c;
    f = (1.8 * c) + 32;
    cout << "En fahrenheit: " << f << endl;
}

void p7(){
    int n;
    cout << "Año: ";
    cin >> n;
    if ((n%4==0 && n%100!=0)|| n%400==0){
        cout << "El año es bisiesto";
    } else{
        cout << "El año no es bisiesto";
    }
}

void p8(){
    float n,r;
    cout << "Ingrese un numero: ";
    cin >> n;
    if (n<0){
        cout << "ERROR" << endl;
        return;
    }

    r = sqrt(n);
    cout << "Raiz cuadrada: " << r << endl;
}

void p9(){
    float p,d;
    cout << "Precio del producto: ";
    cin >> p;
    if (p>100){
        d = (p*10)/100;
    }
    p = p-d;
    cout << "Precio a pagar: " << p << endl;
}

void p10(){
    int x,y;
    cout << "Ingresar ganancias: ";
    cin >> x;
    cout << "Ingresar costos: ";
    cin >> y;

    if (x<0 && y<0){
        cout << "Ambos son negativos";
    } else if (x>0 && y>0){
        cout << "Ambos son positivos";
    } else {
        cout << "Uno es positivo y el otro negativo";
    }
}

void p11(){
    int n;
    cout << "Ingrese la nota: ";
    cin >> n;

    if (n==0 || n>100){
        cout << "ERROR";
        return;
    } else if (n<101 && n>89){
        cout << "A" << endl;
        return;
    } else if (n<90 && n>79){
        cout << "B" << endl;
        return;
    } else if (n<80 && n>69){
        cout << "C" << endl;
        return;
    } else if (n<70 && n>59){
        cout << "D" << endl;
        return;
    } else {
        cout << "F" << endl;
    }
}

void p12(){
    int n;
    cout << "Numero del dia: ";
    cin >> n;

    switch (n){
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
    }
}

void p13(){
    int v;
    cout << "Ingrese la velocidad: ";
    cin >> v;

    if (v<=0){
        cout << "Sin movimiento";
        return;
    } else if (v>0 && v<31){
        cout << "Lento" << endl;
        return;
    } else if (v>30 && v<61){
        cout << "Moderado" << endl;
        return;
    } else if (v>60 && v<101){
        cout << "Rapido" << endl;
        return;
    } else {
        cout << "Muy rapido" << endl;
    }
}

void p14(){
    int n;
    cout << "Uso de datos mensuales: ";
    cin >> n;

    if (n<=0){
        cout << "ERROR" << endl;
        return;
    } else if (n>0 && n <3){
        cout << "Plan basico" << endl;
        return;
    } else if (n>2 && n<6){
        cout << "Plan Estandar" << endl;
        return;
    } else if (n>5 && n<11){
        cout << "Plan premium" << endl;
        return;
    } else {
        cout << "Plan ilimitado" << endl;
    }
}

void p15(){
    int n;
    cout << "Edad: ";
    cin >> n;

    if (n<0){
        cout << "ERROR" << endl;
        return;
    } else if (n>=0 && n<4){
        cout << "Infante" << endl;
        return;
    } else if (n>3 && n<13){
        cout << "Niño" << endl;
        return;
    } else if (n>12 && n<18){
        cout << "Adolescente" << endl;
        return;
    } else if (n>17 && n<65){
        cout << "Adulto" << endl;
        return;
    } else {
        cout << "Adulto mayor" << endl;
    }
}

void p16(){
    int x;
    string ent;
    bool pasa=false;
    cout << "Tienes una entrada?" << endl;
    cin >> ent;

    if (ent=="si" || ent =="Si"){
        pasa = true;
    }

    if (pasa){
        cout << "Tienes permitida la entrada" << endl;
        if (x<18){
            cout << "Pero, no puedes ver esta pelicula" << endl;
            return;
        } else {
            cout << "Y puedes ver la entrada";
        }
    } else {
        cout << "No tienes permitida la entrada";
    }
}

void p17(){
    int n,p;
    string est;

    cout << "Estado civil?" << endl;
    cin >> est;

    cout << "Ingreso anual: ";
    cin >> n;

    if (est=="Soltero" || est=="soltero"){
        if (n<=50000){
            p = (n*10)/100;
        } else if (n>50000 && n<=100000){
            p = (n*20)/100;
        } else {
            cout << "ERROR" << endl;
            return;
        }
    } else {
        if (n<=50000){
            p = (n*8)/100;
        } else if (n>50000 && n<=100000){
            p = (n*15)/100;
        } else {
            cout << "ERROR" << endl;
            return;
        }
    }
    cout << "Impuestos a pagar: " << p << endl;
}

void p18(){
    int x,y,z;
    cout << "1er lado: ";
    cin >> x;
    cout << "2do lado: ";
    cin >> y;
    cout << "3er lado: ";
    cin >> z;

    if ((x+y>z) && (x+z>y) && (y+z>x)){
        if (x==y && y==z){
            cout << "Equilatero" << endl;
            return;
        } else if (x==y || y==z || z==x){
            cout << "Isosceles" << endl;
            return;
        } else {
            cout << "Escaleno" << endl;
        }
    } else {
        cout << "Este no es un triangulo valido" << endl;
    }
}

void p19(){
    int x,y;
    cout << "Ingrese puntaje en Matematicas: ";
    cin >> x;
    cout << "Ingrese puntaje en Lectura: ";
    cin >> y;

    string s,n;

    if (x<71 || y<66){
        cout << "No tienes el puntaje requerido." << endl;
        return;
    } else {
        cout << "Tienes el puntaje requerido" << endl;
        cout << "Cuentas con las actividades extracurriculares?" << endl;
        cin >> s;
        cout << "Cuentas con cartas de recomendacion?" << endl;
        cin >> n;

        if ((s!="Si" || s!="si") || (n!="Si" || n!="si")){
            cout << "Solo cuentas con uno de los criterios" << endl;
            return;
        } else {
            cout << "No cuentas con ninguno de los criterios" << endl;
        }
    }
}

void p20(){
    float t,d;
    string m;

    cout << "Ud. Cuenta con una membresia?" << endl;
    cin >> m;
    cout << "Precio total de la compra: ";
    cin >> t;

    if (m=="si" || m=="Si"){
        if (t<=0){
            cout << "No ha realizado compras" << endl;
            return;
        } else if (t<101){
            d = (t*10)/100;
            t = t-d;
        } else {
            d = (t*20)/100;
            t = t-d;
        }
    } else {
        if (t<=0){
            cout << "No ha realizado compras" << endl;
            return;
        } else if (t<101){
            d = (t*5)/100;
            t = t-d;
        } else {
            d = (t*10)/100;
            t = t-d;
        }
    }
    cout << "Tiene que pagar: " << t << endl;
}

int main() {
    cout << "pregunta 1" << endl;
    p1();
    cout << "pregunta 2" << endl;
    p2();
    cout << "pregunta 3" << endl;
    p3();
    cout << "pregunta 4" << endl;
    p4();
    cout << "pregunta 5" << endl;
    p5();
    cout << "pregunta 6" << endl;
    p6();
    cout << "pregunta 7" << endl;
    p7();
    cout << "pregunta 8" << endl;
    p8();
    cout << "pregunta 9" << endl;
    p9();
    cout << "pregunta 10" << endl;
    p10();
    cout << "pregunta 11" << endl;
    p11();
    cout << "pregunta 12" << endl;
    p12();
    cout << "pregunta 13" << endl;
    p13();
    cout << "pregunta 14" << endl;
    p14();
    cout << "pregunta 15" << endl;
    p15();
    cout << "pregunta 16" << endl;
    p16();
    cout << "pregunta 17" << endl;
    p17();
    cout << "pregunta 18" << endl;
    p18();
    cout << "pregunta 19" << endl;
    p19();
    cout << "pregunta 20" << endl;
    p20();
}