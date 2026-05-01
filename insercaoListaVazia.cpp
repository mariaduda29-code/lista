/* FUNÇÃO INSERÇÃO EM LISTA VAZIA
    inserirListaVazia(valor):
        novo <- criar_noh(valor); // novo = nó com o valor 
        inicio <- novo; // inicio aponta para novo
        fim <- novo; // fim aponta para novo
        tamanho <- 1; // atualiza tamanho 
*/
#include <iostream>
using namespace std;
struct No{
   int valor;
   No* proximo;
   No(int v) : valor(v), proximo(nullptr){}
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
        cout << "Lista vazia criada!" << endl;
    }
    // FUNÇÃO QUE INSERE EM LISTA VAZIA 
    void inserirListaVazia(int valor){
        No* novo = new No(valor);
        inicio = novo;
        fim = novo;
        tamanho = 1;
        cout << "Elemento " << valor << " inserido como primeiro elemento da lista" << endl;
    }

    void exibir(){
        if(inicio != nullptr){
            cout << "Inicio aponta para: " << inicio -> valor<< endl;
            cout << "Fim aponta para: " << fim -> valor << endl;
            cout << "Tamanho atual: " << tamanho;
        }
    }
};
int main (){
    Lista minhaLista;

    int num;
    cout << "Elemento a ser inserido: ";
    cin >>  num;
    minhaLista.inserirListaVazia(num);
    minhaLista.exibir();

    return 0;
}
