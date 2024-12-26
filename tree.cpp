// Q1.: Implemente as operações Remove e Contains. Use como referência o exemplo abaixo:

#include <iostream>
#include <string>

using namespace std;

class Tree {
    private:
        struct Node {
            int key;
            Node* left;
            Node* right;
        };
    public:    
        Tree() : root(0) {
 
        }
       
        void Insert(int key) {
            Node* novo = new Node();
            novo->key = key;
            novo->left = 0;
            novo->right = 0;
           
            if (root == 0) {
                root = novo;    
            } else {
                Node *p = Parent(key);
                if (p == 0)
                    return;
               
                if (p->key > key)
                    p->left = novo;    
                else
                    p->right = novo;
            }
        }
        
       bool Contain(int key){
       	Node* it = root;
       	   while (it != 0) {
       	   	 	if(it->key == key){
                //	cout << "Contem o elemento!"<< endl;
                	return 1;
				}
                if (it->key > key) {
                    it = it->left;
                }
				else if (it->key < key) {
                    it = it->right;
                }                     
            }
            
			//cout << "Não contem elemento" << endl;
            return 0;    
                   
	   }
	   
       void Remove(int key){
       Node* it = root;
	   Node* aux = 0;
        while (it != 0 and Contain(key) == 1) {
          if(it->key == key){ //achou
          	if(it->right == 0 && it->left == 0){ //caso seja uma folha
          		aux = pai(key);
          		if(aux-> right == it){  
          		aux->right = 0;
          		delete it;
          		return;
          		}
          		
          		if(aux-> left == it){  
          		aux->left = 0;
          		delete it;
          		return;
          		}
          		if(key == root->key){  //caso queira tirar a raiz
          			root = 0;
				  }
			  }
			else if(it-> right == 0 && it->left != 0){ //caso tenha apenas uma sub árvore na esquerda    //caso 2 parte 1
				aux = pai(key);
				if((aux->left)->key == key){//é o filho da esquerda do pai q vamos tirar
					aux -> left = it->left;
					delete it;
					return;
				}
				else if((aux->right)->key == key){//é o filho da direita do pai q vamos tirar
					aux -> right = it->left;
					delete it;
					return;
				}
				else if(key == root->key){  //caso seja a raiz
					root = it->left;
					delete it;
				}
			}
			
			else if(it-> right != 0 && it->left == 0){ //caso tenha apenas uma sub árvore na direita    //caso 2 parte 2
				aux = pai(key);
				if((aux->left)->key == key){//é o filho da esquerda do pai q vamos tirar
					aux -> left = it->right;
					delete it;
					return;
				}
				else if((aux->right)->key == key){//é o filho da direita do pai q vamos tirar
					aux -> right = it->right;
					delete it;
					return;
				}
				else if(key == root->key){  //caso seja a raiz
					root = it->right;
					delete it;
				}
			}
			
			else if(it-> right != 0 && it->left != 0){ //caso 3 sendo da direita tudo para a esquerda
				Node* aux2;
				Node* aux;
				Node* aux3;
				aux = it->right;
				while(aux->left!=0){
					aux = aux -> left;  //aux está valendo o mais extremo da esquerda na direita
				}
				aux2 = it;
				it-> key = aux-> key;
				aux -> key = aux2->key;
				it -> right = aux -> right;
				delete aux;
				return;
			}
			
		  }
		  	if (it->key < key) {
                    it = it->right;
                } 
            if (it->key > key) {
                    it = it->left;
                } 
			
        }
        
	   }
	   
        void Print() {
            InOrder(root);  
        }
                   
        ~Tree() {
            Free(root);
            root = 0;
        }
    private:
        void InOrder(Node* root) {
            if (root == 0)
                return;
               
            InOrder(root->left);
            cout << root->key << endl;
            InOrder(root->right);
        }
                     
        void Free(Node* root) {
            if (root == 0)
                return;
               
            Free(root->left);
            Free(root->right);
            delete root;
        }

        Node* Parent(int key) { 
            Node* it = root;
            Node *p = root;
            while (it != 0) {
                p = it;
                if (it->key > key) {
                    it = it->left;
                } else if (it->key < key) {
                    it = it->right;
                } else {
                    return p;    
                }                
            }
           
            return p;
        }
       
       Node* pai(int key){ //variável aux vai andar 1 na frente da it
       		Node* it = root;
       		Node* aux;
       		if(it->key > key)
       			aux = it->left;
       		else if(it->key == key)
       			return it;   
       		else
       			aux = it-> right;
       		
       		while(aux != 0){
       			if (aux->key > key) {
       				it = aux;
                    aux = aux->left;
                } 
				else if (aux->key < key) {
					it = aux;
                    aux = aux->right;
			   }
			   else{
			   		break;
			   }
       		 }
       		return it;
       	}
       	
    private:
        Node *root;
};


int main()
{
    Tree t;
    t.Insert(20);
    t.Insert(10);
    t.Insert(5);
    t.Insert(15);
    t.Insert(25);
    t.Insert(16);
    t.Insert(50);
    t.Insert(-1);
    //t.Print();
   // cout << endl;
    t.Remove(10);
    t.Print(); 
    return 0;
}
