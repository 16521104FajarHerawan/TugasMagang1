#include <iostream>
#include "inteface.h"
#include "peta.h"
using namespace std;
int main(){
    int panjang;
    datakorban korban1;
    datakorban korban2;
    datalilin lilin1;
    datalilin lilin2;
    input_panjang(&panjang);
    peta_awal(panjang);
    cout<<"\n";
    input_korban(&korban1,1);
    input_korban(&korban2,2);
    input_lilin(&lilin1,1);
    input_lilin(&lilin2,2);
    cout<<"\n";
    cout<<"Tampilan Peta dari Berbagai Sudut Pandang"<<endl;
    cout<<"\n";
    peta_depan(panjang,korban1,korban2,lilin1,lilin2);
    cout<<"\n";
    peta_kiri(panjang,korban1,korban2,lilin1,lilin2);
    cout<<"\n";
    peta_kanan(panjang,korban1,korban2,lilin1,lilin2);
    return 0;
}
