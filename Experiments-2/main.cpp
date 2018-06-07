#include <iostream>

using namespace std;

int main()
{
    int TestCase , CN  = 0, RN = 0 , SN = 0 ,Total = 0;
    float CP,RP,SP;
    cin >> TestCase;
    while(TestCase--)
    {
         int Number;
         char Kind;
         cin >> Number >> Kind;
         if(Kind == 'C')
         {
             Total += Number;
             CN += Number;
         }
         else if(Kind == 'R')
         {
             Total += Number;
             RN += Number;
         }
         else if(Kind == 'S')
         {
             Total += Number;
             SN += Number;
         }
    }
      CP = CN;
      SP  = SN ;
      RP = RN;
    CP = (CP/Total)* 100;
    RP = (RP/Total)*100;
    SP = (SP/Total)*100;
    cout<<"Total "<<Total<<" Cabaias\n";
    cout<<"Total da Coalhos " <<CN<<endl;
    cout<<"Total da Ratos " <<RN<<endl;
    cout<<"Total da Sapos " <<SN<<endl;
    cout<<"Percentual de coalhos : "<<CP<<"%\n";
    cout<<"Percentual de Ratos : "<<RP<<"%\n";
    cout<<"Percentual de Sapos : "<<SP<<"%\n";
}
