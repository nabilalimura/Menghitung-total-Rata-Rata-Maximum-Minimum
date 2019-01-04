#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    int i,bil[5],jumlah,max,min;
    float rata2;

    for(i=0; i<5; i++)
    {
        cout<<"Masukan data ke :"<<i+1<<" = ";
        cin>>bil[i];
    }

    cout<<"Seluruh elemen array adalah :"<<endl;
    jumlah=0;
    min=bil[0];
    max=bil[0];
    for(i=0; i<5; i++)
    {
        cout<<bil[i]<<endl;
        jumlah = jumlah+bil[i];
        if(bil[i] < min)
        {
            min = bil[i];
        }
        else if (bil[i] > max)
        {
            max = bil[i];
        }
    }

    rata2 = jumlah/5;

    cout<<"Jumlah total elemen array = "<<jumlah<<endl;
    cout<<"Nilai Minimum array = "<<min<<endl;
    cout<<"Nilai Maximum array = "<<max<<endl;
    cout<<"Nilai rata-rata = "<<rata2<<endl;
    return 0;
}
