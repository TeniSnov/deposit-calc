#include <math.h>
#nclude <iostream>
using namespace std;
main(){
       int a;
       float p, c;
       double sv;
       cout<<"Vvedite summu vklada ";
       cin>>sv;
       cout<<"Vvedite srok ";
       cin>>c;
       p=c/365;
       if (sv<100000) a=1;
       else a=2;
       if (c<31){
           sv=sv-sv*0.1;
           cout<<"Summa vklada na konech sroka "<<sv<<" shtraf"<<endl;
           system ("PAUSE");
           return 0;
       }
       switch(a){
           case 1:{
               if (c<121) sv=sv+p*sv*0.02;
               if (c<240) sv=sv+p*sv*0.06;
               else sv=sv+p*sv*0.12;
               break;
           }
           case 2:{
               if (c<121) sv=sv+p*sv*0.03;
               if (c<240) sv=sv+p*sv*0.08;
               else sv=sv+p*sv*0.15;
               break;
           }
       }
       cout<<"Summa vklada na konech sroka "<<sv<<endl;
       system("PAUSE");
       return 0;
}