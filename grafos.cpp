#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class Graph {
public:
    Graph(int size) : size(size) {
        vertices = new vector<int>[size];
    }

  void Connect(int src, int dst) {
        vertices[src].push_back(dst);
    }
    
  void Print() {
        cout << "digraph G {" << endl;
        for (int s = 0; s < size; s++) {
            vector<int> v = vertices[s];
            int totalEdges = v.size();
            if (totalEdges == 0)
                cout << StrVertice(s)  << ";" << endl; 
                    
            for (int d = 0; d < totalEdges; d++) {
                cout << StrVertice(s) 
                << " -> " <<  StrVertice(v[d]) 
                << ";" << endl;  
            }            
        }
        
        cout << "}" << endl;
    }
    
    void Disconnect(int font, int dest) {
        vertices[font].erase(vertices[font].begin() + (dest-1));
    }

    string BuscaProfundidade(int font, int dest) {
        bool visitado[size] = {};
        stack<int> queue;
        int ix = font;
        queue.push(ix);
        while(!queue.empty()){
            if(ix == dest)
                return "tem caminho ";
            ix = queue.top();
            queue.pop();
            if(visitado[ix] == false){
                visitado[ix] = true;
                for(int i=0; i<vertices[ix].size(); i++){
                    vector<int> v = vertices[ix];
                    queue.push(v[i]);
                }
            }
        }
        return "nao tem caminho";
    }
    
    string BuscaLargura(int font, int dest) {
        bool visitado[size] = {};
        queue<int> fila;
        int ix = font;
        fila.push(ix);
        while(!fila.empty()){
            if(ix == dest){
                return "tem caminho";
            }
            ix = fila.front();
            fila.pop();
            if(visitado[ix] == false){
                visitado[ix] = true;
                for(int i=0; i<vertices[ix].size(); i++){
                    vector<int> v = vertices[ix];
                    fila.push(v[i]);
                }
            }
        }
        return "nao temcaminho";
    }

    ~Graph() {
        delete[] vertices;            
    }
private:    
    inline char StrVertice(const int b) {
        return (char) ('a' + b);
    }
    
private:
    vector<int>* vertices;
    int size;
};

int main()
{
    Graph g(7);
    g.Connect(0,6);   
    g.Connect(0,1);    
    g.Connect(5,3);
    g.Connect(4,2);
    g.Print();

    cout << g.BuscaProfundidade(4,2);
    return 0;
}
