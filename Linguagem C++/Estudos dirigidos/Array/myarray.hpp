#ifndef _MYARRAY_HPP_
#define _MYARRAY_HPP_

//-----------------------Bibliotecas

#include<iostream>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

#include<string>
using std::string;

#include<fstream>
using std::ofstream;
using std::ifstream;

#include<iomanip>
using std::setw;

#include<cstdlib>
#include<ctime>


//-----------------------Classe

template <typename T>

class Array{

private:

    T optional;
    int len;
    T* data;

public:

//---------------------------------------------------------Construtores e Operadores

    Array(T value, int tam){

          len  = 0;
          data = nullptr;

          if(tam > 0){

             len      = tam;
             data     = new T[len];
             optional = value;

             if(data){

                for(int i = 0; i < len; i++){

                    data[i] = optional;
                }

             } else {

                cerr << "\nERROR: Missing data" << endl;
             }

          } else {

                cerr << "\nERROR: Missing data" << endl;
          }
    }

    //Construtor Padrao
    Array(){

        //Valores iniciais
        len  = 0;

        //Reservar area
        data = nullptr;
    }

    //Construtor baseado em copia de array padrao
    Array(int tam, int other[]){

        if(tam > 0){

            //Valor inicial
            len  = tam;
            //Reservar area
            data = new T[len];

            for(int i = 0; i < len; i++){

                data[i] = other[i];
            }


        } else {

            cerr << "\nERROR: Missing data" << endl;
        }
    }

    //Array baseado em copia de Classe implementada
    Array(const Array& other){

        if(other.len > 0){

            //Definir valores iniciais
            len = other.len;

            //Reservar area
            data = new T[len];

            if(data){

                for(int i = 0; i < len; i++){

                    data[i] = other.data[i];
                }

            } else {

                cout << "\nERROR: Missing data" << endl;
            }

        } else {

            cerr << "\nERROR: Missing data" << endl;
        }
    }

    //Operador de atribuicao entre arranjos
    Array& operator= (const Array <T> other){

        if(other.len > 0){

            //Definir valores iniciais
            len  = other.len;

            //Reservar area
            data = new T[len];

            if(data){

                for(int i = 0; i < len; i++){

                    data[i] = other.data[i];
                }

            } else {

                cerr << "\nERROR: Missing data" << endl;

            }

        } else {

            cerr << "\nERROR: Missing data" << endl;
        }

        return *this;
    }

    //Operador logicos de igualdade entre Arrays
    bool operator== (const Array <T> other){

        bool result;
        int i = 0;

        if(other.len > 0 || other.len == len){

            result = true;
            while(i < other.len && result){

                result = result && (data[i] == other.data[i]);
                i++;
            }

        } else {

            result = false;
        }

        return result;
    }

    Array operator+ (const Array <T> other){

        static Array <T> result(other);

        if(other.len < 0 || other.len != len){

            cerr << "\nERROR: Missing data" << endl;

        } else {

            for(int i = 0; i < len; i++){

                result.data[i] = data[i] + other.data[i];
            }
        }

        return result;
    }

    //Destrutor
    ~Array(){

        if(data){

            delete data;
            data = nullptr;
        }
    }

//---------------------------------------------------------Fim Construtores e Operadores

//---------------------------------------------------------Funcoes da Classe

    void free(){

        if(data){

            delete data;
            data = nullptr;
        }
    }

    void print(){

        for(int i = 0; i < len; i++){

            cout << setw(3) << i << ": "
                 << setw(9) << data[i]
                 << endl;
        }
    }

    void read(){

        if(data){

            for(int i = 0; i < len; i++){

                cin >> data[i];
            }

        } else {

           cerr << "\nERROR: Missing data" << endl;
        }
    }

    void fprint(string filename){

        ofstream file;
        file.open(filename);

        if(file.is_open()){

            file << len << endl;
            for(int i = 0; i < len; i++){

                file << data[i] << endl;
            }

            cout << "\nDados guardados com sucesso em " << filename << endl;
            file.close();

        } else {

            cerr << "\nERROR: File cannot be open" << endl;
        }
    }

    void fread(string filename){

        ifstream file;
        file.open(filename);

        if(file.is_open()){

            int n;
            file >> n;
            if(n > 0){

                free();
                data = new T[n];
                len  = n;

                for(int i = 0; i < len; i++){

                    file >> data[i];
                }

                file.close();
            }

        } else {

            cerr << "\nERROR: File cannot be open" << endl;
        }
    }

    T get(int position){

        if(position > 0 && position < len){

            T value = data[position];
            return value;

        } else {

            cerr << "\nERROR: Missing data" << endl;
            return optional;
        }
    }

    void set(int position, T value){

        if(position >= 0 && position < len){

            data[position] = value;

        } else {

            cerr << "\nERROR: Missing data" << endl;
        }
    }

    const int getLength(){

        return len;
    }

    T& operator[] (const int position){

        static T value = optional;

        if(position < 0 || len <= position){

            cerr << "\nERROR: Invalid position" << endl;

        } else {

            value = data[position];
        }

        return value;
    }

    void randomIntGenerate(int inf, int sup){

        if(len <= 0){

            cerr << "\nERROR: Missing data" << endl;

        } else {

            srand(time(0));
            for(int i = 0; i < len; i++){

                data[i] = rand() % 101;
            }
        }
    }

    T searchFirstEven(){

        T maior = -99999;

        for(int i = 0; i < len; i++){

            if(data[i] % 2 == 0 && data[i] > maior){

                maior = data[i];
            }
        }

        return maior;
    }

    T searchLowestOdd(){

        T menor = 99998;

        for(int i = 0; i < len; i++){

            if(data[i] % 2 != 0 && data[i] < menor){

                menor = data[i];
            }
        }

        return menor;
    }

    T addArrayInterval(int a, int b){

        if(a < 0 || b > len){

            cerr << a << " " << b << " : Intervalos invalidos" << endl;
            return optional;

        } else {

            T soma = 0;
            for(int i = a; i <= b; i++){

                soma = soma + data[i];
            }

            return soma;
        }
    }

    T avaregeInterval(int a, int b){

        if(a < 0 || b > len){

            cerr << a << " " << b << " : Intervalos invalidos" << endl;
            return optional;

        } else {

            T soma = 0.0;
            int contador = 0;
            for(int i = a; i <= b; i++){

                soma = soma + data[i];
                contador++;
            }

            if(contador == 0){

                cout << "\nERROR: No numbers" << endl;
                return optional;

            } else {

                return soma / contador;
            }
        }
    }

    bool Allnegatives(){

        bool result = true;
        int cont = 0;

        while(cont < len && result){

            if(data[cont] > 0){

                result = false;
                return result;
            }

            cont++;
        }

        return result;
    }

    bool isDecrescent(){

        bool result = true;
        int cont    = 0;

        while(cont < len - 1 && result){

            if(data[cont] < data[cont + 1]){

                result = false;
            }
            cont++;
        }

        return result;
    }

    bool searchInterval(T value, int inicio, int fim){

        if(inicio < 0 || fim > len){

            cerr << "\nERROR: Missing data" << endl;

        } else {

            for(int i = inicio; i <= fim; i++){

                if(value == data[i]){

                    return true;
                }
            }
        }

        return false;
    }

    void scalar(T k, int inicio, int fim){

        if(inicio < 0 || fim > len){

            cerr << "\nERROR: Missing data" << endl;

        } else {

            for(int i = inicio; i <= fim; i++){

                data[i] = k * data[i];
            }
        }
    }

    void sortDown(){

        for(int i = 0; i < len - 1; i++){
            for(int j = i; j < len; j++){

                if(data[i] < data[j]){

                    int tmp = data[i];
                    data[i] = data[j];
                    data[j] = tmp;
                }
            }
        }
    }

    bool Distinct(const Array <T> arr1){

        if(this->len != arr1.len){

            cout << "\nOs Arrays tem tamanhos distintos" << endl;
            return true;

        } else {

            for(int i = 0; i < len; i++){

                if(arr1.data[i] != this->data[i]){

                    return true;
                }
            }
        }

        return false;
    }

    void differencesIntervals(const Array <T> other){

        if(this->len != other.len){

            cerr << "\nERROR: Invalid length" << endl;

        } else {

            for(int i = 0; i < len; i++){

                T difference = this->data[i] - other.data[i];
                cout << "A diferenca entre os arrays na posicao " << i << " e: " << difference << endl;
            }
        }
    }
};

#endif // _MYARRAY_HPP_
