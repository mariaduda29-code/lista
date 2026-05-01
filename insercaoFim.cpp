/* FUNÇÃO INSERIR NO FIM 
    inserirFim(valor):
    se (lista.vazia()){
        inserirListaVazia(valor);
    }senao{
        novo <- criar_noh(valor);
        fim.proximo <- novo; // o proximo do fim aponta para o novo
        fim <- novo; // fim aponta para o novo; 
        tamanho++;
    }
*/
#include <iostream>
using  namespace std;
struct No{
    int valor;
    No* proximo;
    No(int v) : valor (v), proximo (nullptr){} 
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
        tamanho = 0;
        cout << "Lista criada! " << endl;
    }

    // FUNÇÃO INSERIR EM LISTA VAZIA
    void inserirListaVazia(int valor){
        No* novo = new No(valor);
        inicio = novo;
        fim = novo;
        tamanho = 1;
        cout << "Elemento  " << valor << " inserido como primeiro da lista." << endl;
    }

    // FUNÇÃO INSERIR NO FIM DA LISTA 
    void inserirFim(int valor){
        if(tamanho==0){
            inserirFim(valor);
        }else{
            No* novo = new No(valor);
            novo -> valor = valor;

            novo -> proximo = nullptr; // novo fim aponta para nulo 
            fim -> proximo = novo;
            fim = novo; 
            tamanho++;
        }
        cout << "Elemento " << valor << " inserido no fim" << endl;
    }

    void exibir(){
        No* temp = inicio;
        cout << "Lista: ";
        while(temp != nullptr){
            cout << "[" << temp -> valor << "] -> ";
            temp = temp -> proximo;
        }
        cout << "NULL (Tamanho: " << tamanho << ")" << endl;
    }
};

int main (){
    Lista minhaLista;

    minhaLista.inserirFim(10);
    minhaLista.inserirFim(20);
    minhaLista.inserirFim(30);

    minhaLista.exibir();

    return 0;
}
