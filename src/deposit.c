#include "deposit.h"
double proverka (double sv,float c){
if ((c>365)||(c<0)||(sv<10000)){
           cout<<"Takoy vklad ne vozmozhen"<<endl;
           return 1;
       }
       if (c<31){
           sv=sv-sv*0.1;
           cout<<"Summa vklada na konech sroka "<<sv<<" shtraf"<<endl;
           return 0;
       }
	if ((c>365)||(c<0)||(sv<10000)){
           cout<<"Takoy vklad ne vozmozhen"<<endl;
           return 1;
       }}
double dohod (double sv,float c){
int a;
float p;
    p=c/365;
	if (sv<100000) a=1;
       else a=2;
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
       return sv;
}
