#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // na2sly qanon reca w traa :D
    float pi = 3.14159;
    float a , b , c ;
    cin>> a >> b >> c;
    float reca = a * c;
    float cira = c * c * pi;
    float traa = 0;
    float squa = b * b;
    float recca = a * b;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<reca<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<cira<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<traa<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<squa<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<recca<<endl;
    return 0;
}
