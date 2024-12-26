//q1) Implemente uma Min-Heap de forma iterativa. Use o esqueleto abaixo:

#include <iostream>
#include <vector>

using namespace std;

class Heap {
public:
    Heap(int size) : size(size), tam(0) {
        data = new int[size];
    }   
    
    void Insert(int value) {
		data[tam] = value;
		Upheap(tam);
		tam++;
		
    }

    int Remove() {
    	if(tam == 0) //caso não tenha nada na árvore
          return 0;
          
        tam--;
	 	int aux;
	 	aux = data[tam]; //coloca o último elemento em uma variável
	 	data[tam] = data[0]; //coloca a raiz no último elemento 
	 	data[0]= aux; //a raiz recebe o último elemento
	 	Downheap(0); //chama a função para arrumar a árvore    
    }
    
    void Upheap(int j){
    	if(j==0)
    		return;
    	if(data[Father(j)] > data[j]){  //caso o pai seja maior, vai trocar, levando o menor valor pra cima
    		int aux;
    		aux = data[Father(j)];
    		data[Father(j)] = data[j];
    		data[j] = aux;
		}
    	Upheap(Father(j));
	}
    
    void Downheap(int i){
    	if(i == tam)
    		return;
    	
    	int menor = i;
    	if(Left(i) < tam && data[Left(i)] < data[menor]) //caso o filho da esquerda seja menor
    		menor = Left(i);
    	if(Right(i) < tam && data[Right(i)] < data[menor]) // caso o filho da direita seja menor 
    		menor = Right(i);
		
		if(menor != i){ //caso o menor seja igual i, significa que não é mais necessário relaizar trocas
			int aux = data[i];
			data[i] = data[menor];
			data[menor] = aux;
			Downheap(menor); //cria uma recursividade para abranger toda a árvore
		}
	}
    
    void Print() {
        cout << "digraph G {" << endl;
        for (int i = 0; i < tam; i++) {
            int l = Left(i);
               
            if (l < tam) {
                cout << "\t" << data[i] <<" -> " << data[l] << endl;
               
                int r = Right(i);
                if (r < tam)
		      cout << "\t" << data[i] <<" -> " << data[r] << endl;
            } else {
                  cout << "\t" << data[i] << ";" << endl;
            }
        }
        cout << "}";
    }
    
    inline int Left(const int i) const {
        return i * 2 + 1;
    }
    
    inline int Right(const int i) const {
        return i * 2 + 2;
    }
	
    inline int Father(const int i) const {
        return (i - 1)/ 2;
    }
    ~Heap() {
        delete[] data;
    }
private: 
    int *data; 
    int size;
    int tam; 
};

int main(){
	Heap a(10);
	a.Insert(8);
    a.Insert(5);
    a.Insert(7);
    a.Insert(3);
    a.Insert(2);
    a.Insert(1);
    //a.Remove();
    a.Print();
}
