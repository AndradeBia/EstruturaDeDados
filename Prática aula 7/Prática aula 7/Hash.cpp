#include <iostream>
#include <string>
using namespace std;

class HashTable {
private:
	struct Node {
		Node *prox;
		int key;
		string texto;
	};

public:
	HashTable(int size) : size(size) {
		dados = new Node*[size];
		for (int i = 0; i < size; i++)
			dados[i] = 0;
	}
	void Set(int key, string texto) {
		int aux;	
		if(dados[aux]==0){
			Node* nodee = new Node;
			nodee->prox = 0;
			nodee->texto = texto;
			dados[aux] = nodee;
		}
		
		else{
			Node* nodedois = new Node;
			nodedois->texto = texto;
			nodedois->prox = dados[aux];
			dados[aux] = nodedois;
		}
	}

	bool HasKey(int key) {
		int aux;
		if(dados[aux]!=0){
			cout << "Chave usada" << endl;
			return true;
		}
		
		else{
			cout << "Chave livre" << endl;
			return false;
		}
	}

	string Get(int key) {
		int aux;
		Node* aux2 = new Node();
		if (dados[aux] == 0){
			
            return "Nao tem valor";
        }
        aux2 = dados[aux];
        
        do{
            if (aux2->key == key)
                return aux2->texto;
            aux2 = aux2->prox;
        }while(aux2 != 0);
        
		return "Nao tem valor";
	}
	
	~HashTable() {
		for (int i = 0; i < size; i++) {
			if (dados[i])
				delete dados[i];
		}

		delete dados;
	}
private:
	int size;
	Node** dados;
};


int main() {
	HashTable table(97);

	table.Set(123456, "Joao Pedro");
	cout << table.HasKey(123456) << endl;

	cout << table.HasKey(123456) << endl;
	cout << table.Get(123456) << endl;

	table.Set(123456, "Maria");
	cout << table.Get(123456) << endl;
	
	for (int i = 0; i < 300; i++)
		cout << table.Get(i) << endl;

	return 0;
}
