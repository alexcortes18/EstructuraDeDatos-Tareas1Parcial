#include <iostream>
#include <list>

using namespace std;

void imprimir(list<int> lista)
{
    for(list<int>:: iterator i = lista.begin(); i!= lista.end();i++)
    {
        cout<<*i<<endl;
    }
}

int main()
{
    int conta=0;

    list<int> lista2;
    list<int> lista1;
    lista1.push_back(5);
    lista1.push_back(5);
    lista1.push_back(13);
    lista1.push_back(5);
    lista1.push_back(1);
    lista1.push_back(8);
    lista1.push_back(9);
    lista1.push_back(7);
    lista1.push_back(7);
    lista1.push_back(2);
    lista1.push_back(12);
    lista1.push_back(6);
    lista1.push_back(9);
    lista1.push_back(1);
    lista1.push_back(5);
    lista1.push_back(10);

    imprimir(lista1);
    for(list<int>:: iterator i = lista1.begin(); i!= lista1.end();i++)
    {
        int numactual= *i;
        for(list<int>:: iterator j = lista2.begin(); j!= lista2.end();j++)
        {
            if(numactual==*j)
                conta++;
        }
        if(conta==0)
            lista2.push_back(*i);
        conta=0;
    }
    //eliminarduplicados(lista1,lista2);
    cout<<"------------SIN DUPLICADOS:"<<endl;
    imprimir(lista2);

}



