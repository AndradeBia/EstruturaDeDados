#include <iostream>
#include <string>
#include <stdint.h>
using namespace std;

class BitSet {
public:
	
    BitSet(int size) : size(size) { 
        data = new unsigned[size]; 
        for (int i = 0; i < size; i++)
            data[i] = 0;
    }

    void Insert(int a) {
    	int pos = a % GetBlockSize();
        int index = a / GetBlockSize();
        data[index] |= (1 << pos); 
    }

    bool Contains(int b) {
        int pos = b %  GetBlockSize();
        int index = b /  GetBlockSize();
        return data[index] & (1 << pos);
    }

    void Remove(int a) {
    	int pos = a % GetBlockSize();
        int index = a / GetBlockSize();
        if(Contains(a)==true)
        data[index] = data[index] ^ (1 << pos);
        else{
        	cout << "Nao tem" << endl;
        	return;
		}
    }

    void Print() {
        int total= size * GetBlockSize();
        for (int i = 0; i < total; i++) {
            if (Contains(i))
                cout  << i << ", ";
        }
        cout << endl;
    }

    int pegaMaior(BitSet &p,BitSet &o){
        int maior;
        if(p.getSize()>= o.getSize())
            maior = p.getSize();
        else
            maior = o.getSize();
        return maior;
    }
    
    int pegaMenor(BitSet &p,BitSet &o){
    	int menor;
        if(p.getSize()<= o.getSize())
            menor = p.getSize();
        else
            menor = o.getSize();
        return menor;
	}

    void Uni(BitSet &p,BitSet &o){
        int maior = this->pegaMaior(p,o);
        for (int i = 0; i < maior; i++){
            this->data[i] = p.data[i] | o.data[i]; 
        }
    }
    
    void Intersec(BitSet &p,BitSet &o){
         int maior = this->pegaMaior(p,o);
        for (int i = 0; i < maior; i++){
            this->data[i] = p.data[i] & o.data[i]; 
        }
    }
    
     void Diferenca(BitSet &p,BitSet &o){
        int maior = this->pegaMaior(p,o);
        for (int i = 0; i < maior; i++){
            this->data[i] = p.data[i] & o.data[i];
            this->data[i] = this->data[i] ^ p.data[i];
        }
    }
    
    void resize(int newsize){
    	BitSet* res = new BitSet(newsize);
    	for (int i = 0; i < size; i++){
            res->data[i] = res->data[i] | this->data[i]; 
        }
        delete[] this->data;
        this->data=res->data;
        this->size=res->size;
	}

    int getSize(){
        return this->size;
    }

    ~BitSet() {
        delete[] data;
    }

private:
    inline const unsigned GetBlockSize() const {
        return sizeof(data)*sizeof(unsigned); 
    }
private:
    int size;
    unsigned* data; 
};

int main()
{
    BitSet bit1(8);
    BitSet bit2(3);
    bit2.Insert(1);
    bit2.Insert(6);
    bit2.Insert(2);
	bit1.Print();
    bit2.Print();
}
