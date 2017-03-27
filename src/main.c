#include "deposit.h"
int main(){
       int a;
       float p, c;
       double sv;
       cout << "Vvedite summu vklada ";
       cin>>sv;
       cout<<"Vvedite srok ";
       cin>>c;
       proverka(sv,c);
       sv = dohod(sv,c);
       cout<<"Summa vklada na konech sroka "<<sv<<endl;
       return 0;
}
