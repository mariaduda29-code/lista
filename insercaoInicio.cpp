/* FUNÇÃO INSERÇÃO NO INICIO 
    inseriInicio(valor):
        se (lista.vazia()){ // se tiver vazia 
            inserirListaVazia(valor); // funcao insere em  vazia 
        }senao{ // se ja tiver elementos 
            novo <- criar_noh(valor); // cria o novo no com o novo valor 
            novo.proximo <- inicio; // o novo aponta para o proximo do inicio 
            inicio <- novo; // incio aponta para o proximo
            tamanho++;
        }
*/
#include <iostream>
using namespace std;
struct No{
    int valor;
    No* proximo;
    No(int v) : valor(v), proximo(nullptr) {} // construtor 
};
class Lista{
private:
    No* inicio;
    No* fim;
    int tamanho;
public: 
    Lista (){
        inicio = nullptr;
        fim = nullptr;
        tamanho = 0;
        cout << "Lista vazia criada! " << endl;
    }

    // FUNÇÃO INSERIR LISTA VAZIA 
    void inserirListaVazia(int valor){
        No* novo = new No(valor);
        inicio = novo;
        fim = novo;
        tamanho = 1;
        cout << "Elemento " << valor << " inserido como primeiro da lista" << endl;
    }

    void inserirInicio(int valor){
        if(tamanho==0){
            inserirListaVazia(valor);
        }else{
            No* novo = new No(valor);
            novo -> valor = valor;

            // o novo aponta para o proximo do inicio
            novo -> proximo = inicio; 
            inicio = novo; // inicio é o novo 
            tamanho++; // atualiza 
        }
        cout << "Elemento " << valor << " inserido no inicio " << endl;
    }

    void exibir(){
        No* temp = inicio; //começa no topo 
        cout << "Lista: ";
        while(temp != nullptr){
            // valor do nó onde o topo esta 
            cout << "[" << temp -> valor << "] -> ";
            // temp agora aponta para o seu proximo 
            temp = temp->proximo;
        }
        cout << "NULL (Tamanho: " << tamanho << ")" << endl;
    }
};
int main (){
    Lista minhaLista;

    minhaLista.inserirInicio(10);
    minhaLista.inserirInicio(20);
    minhaLista.inserirInicio(30);

    minhaLista.exibir();

    return 0;
}
