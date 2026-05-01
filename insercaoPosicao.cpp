/*  FUNÇÃO INSERÇÃO EM POSIÇÃO ESPECÍFICA 
    inseriPosicao(valor, posicao):
    se (lista.vazia()){
        inserirListaVazia(valor);
    } senao se (posicao = 0){
        inserirInicio(valor);
    } senao se (posicao = tamanho){
        inserirFim(valor);
    } senao {
        novo <- criar_noh(valor);
        aux <- inicio;
        posAux <- 
    }
*/
#include <iostream>
using namespace std;
struct No{
    int valor;
    No* proximo;
    No (int v) : valor(v), proximo(nullptr){}
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

    // FUNÇÃO INSERIR LISTA VAZIA 
    void inserirListaVazia(int valor){
        No* novo = new No(valor);
        inicio = novo;
        fim = novo;
        tamanho=1;
        cout << "Elemento " << valor << " inserido como primeiro da lista. " << endl;
    }

    // FUNÇÃO INSERIR INICIO
    void inserirInicio(int valor){
        if(tamanho==0){
            inserirListaVazia(valor);
        }else{
            No* novo = new No(valor);
            novo -> valor = valor;
            novo -> proximo = inicio;
            inicio = novo;
            tamanho++;
        }
        cout << "Elemento " << valor << "inserido no inicio" << endl;
    }

    // FUNÇÃO INSERIR FIM 
    void inserirFim(int valor){
        if(tamanho == 0){
            inserirListaVazia(valor);
        }else{
            No* novo = new No(valor);
            novo -> valor = valor;

            novo -> proximo = nullptr;
            fim -> proximo = novo;
            fim = novo;
            tamanho++;
        }
        cout << "Elemento " << valor << "inserido no fim da lista" << endl;
    }

    // FUNÇÃO INSERIR POSIÇÃO 
    void inserirPosicao(int valor, int posicao){
        if(tamanho == 0){
            inserirListaVazia(valor);
        }else if(posicao == 0){
            inserirInicio(valor);
        }else{
            No* novo = new No(valor);
            novo -> valor = valor;

            No* aux = inicio;
            for(int i=0; i < posicao - 1; i++){
                aux = aux -> proximo;
            }

            novo -> proximo = aux -> proximo;
            aux -> proximo = novo;
            tamanho++;
            cout << "Elemento inserido na posicao " << posicao << endl;
        }
    }

    void exibir(){
        No* temp = inicio;
        cout << "Lista: ";
        while(temp!=nullptr){
            cout << "[" << temp -> valor << "] -> ";
            temp = temp -> proximo;
        }
        cout << "NULL (Tamanho: " << tamanho << ")" << endl;
    }
};
int main (){
    Lista minhaLista;

    // inserção inicio
    cout << "INSERÇÃO INICIO " << endl;
    minhaLista.inserirInicio(10);
    minhaLista.inserirInicio(5);
    minhaLista.exibir();
    cout << endl;

    cout << "INSERCAO FIM" << endl;
    // insercao fim 
    minhaLista.inserirFim(20);
    minhaLista.inserirFim(30);
    minhaLista.exibir();
    cout << endl;

    // insercao posicao 
    cout << "INSERCAO EM POSICAO ESPECIFICA" << endl;
    minhaLista.inserirPosicao(99, 2);
    minhaLista.exibir();

    return 0;
}
