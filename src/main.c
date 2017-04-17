#include "deposit.h"
int main(){
       int a,b;
       float p, c;
       double sv;
       cout << "Vvedite summu vklada ";
       cin>>sv;
       cout<<"Vvedite srok ";
       cin>>c;
       b=proverka(sv,c);
       if (b==1){ 
       cout<<"Takoy vklad ne vozmozhen"<<endl;
       return 0;}
       else {
            sv = dohod(sv,c);
            if (sv>0) cout<<"Summa vklada na konech sroka "<<sv<<endl;}
       return 0;
}
