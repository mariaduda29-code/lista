/* CRIAÇÃO DA LISTA 
 criarLista(): // começa vazia
    incio <- NULO;
    fim <- NULO;
    tamanho <- 0;
*/
#include <iostream>
using namespace std;
struct No{
    int valor; 
    No* proximo;
    No* anterior;
};
class Lista{
private:
    No* inicio;
    No* fim;
    int tamanho;

public: 
    Lista(){
        inicio = nullptr;
        fim = nullptr;
        tamanho =0;
        cout << "Lista criada! " << endl;
    }
};
int main (){
    Lista minhaLista;

    
    return 0;
}
 
