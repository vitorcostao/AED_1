#ifndef _MY_MATRIX_HPP
#define _MY_MATRIX_HPP

//----------------------------------------------Bibliotecas

#include<iostream> //Para entrada e saida de dados
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

#include<fstream>  //Para manipulacao de arquivos
using std::ofstream;
using std::ifstream;

#include<string>   //Para cadeia de caracteres
using std::string;

#include<iomanip>  //Para escapamento
using std::setw;

//----------------------------------------------Fim Bibliotecas

//----------------------------------------------Classe

template <typename T>

class Matrix{

//Area privada
private:

    int   rows;
    int   cols;
    T optional;
    T**   data;

//Area publica
public:

    Matrix(){

        this->rows = 0;
        this->cols = 0;
        data       = nullptr;
    }

    //Construtor para inicializar Matrix com valor initial
    Matrix(int rows, int cols, T initial){

        if(rows <= 0 || cols <= 0) {

            data = nullptr;

        } else{

            this->rows     = rows;
            this->cols     = cols;
            this->optional = initial;
            data           = new T*[rows];

            if(data){

                for(int i = 0; i < rows; i++) {

                    data[i] = new T[cols];

                    if(!data[i]){

                          for(int j = 0; j < i; j++) {

                            delete[] data[j];
                        }

                        delete[] data;
                        data = nullptr;
                        break;
                    }
                }
            }
        }
    }

    //Destrutor
    ~Matrix(){

        if(data){
           for(int i = 0; i < rows; i++){

               delete[] data[i];
           }

           delete[] data;
        }
    }

    //Setar valor para a posicao passada como parametros
    void set(int row, int col, T value){

        if(row < 0     || col < 0 ||
           row >= rows || col >= cols){

           cout << "\nERROR: Dimensoes invalidas\n" << endl;

        } else {

            data[row][col] = value;
        }
    }

    //Pegar valor da posicao passada como parametro
    T get(int row, int col){

        T value = optional;

        if(row < 0     || col < 0 ||
           row >= rows || col >= cols){

           cout << "\nERROR: Dimensoes invalidas\n" << endl;

        } else {

            value = data[row][col];
        }
        return value;
    }

    void print(){

        if(rows <= 0 || cols <= 0){

            cerr << "\nERROR: Dimensoes invalidas\n" << endl;

        } else {

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < cols; j++){

                    cout << data[i][j] << "\t";
                }
                cout << endl;
            }
        }
    }

    void read(){

        cout << endl;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){

                cout << setw(2) << "[" << i   << ","
                     << setw(2) << j   << "]" << ":";

                cin  >> data[i][j];
            }
        }
    }

    void fprint(const string filename){

        ofstream file;
        file.open(filename);

        if(file.is_open()){

            cout << "\nArquivo " << filename << " aberto com sucesso\n" << endl;

            if(rows > 0 && cols > 0){

                file << rows << endl;
                file << cols << endl;

                for(int i = 0; i < rows; i++){
                    for(int j = 0; j < cols; j++){

                        file << data[i][j] << "\n";
                    }
                }

                file.close();

            } else{

                cerr << "\nERROR: Dimensoes invalidas\n" << endl;
                file.close();
                return;
            }

        } else {

            cerr << "\nERROR: Nao foi possivel abrir o arquivo\n" << endl;
        }
    }

    void fread(const string filename) {

         ifstream file;
         file.open(filename);

         if(!file.is_open()){

            cerr << "\nERROR: Nao foi possivel abrir o arquivo\n" << endl;
            return;
         }

         int m, n;
         if(!(file >> m >> n)){

            cerr << "\nERROR: Nao foi possivel ler as dimensoes\n" << endl;
            file.close();
            return;
         }

         if(m > 0 && n > 0){

             rows = m;
             cols = n;
             data = new T*[rows];

             if(data){

                 for(int i = 0; i < rows; i++){

                     data[i] = new T[cols];

                     if(!data[i]){

                         for (int j = 0; j < i; j++){

                             delete[] data[j];
                         }

                         delete[] data;
                         cerr << "\nERROR: Nao foi possivel alocar memoria\n" << endl;
                         file.close();
                         return;
                    }
                }


                for(int i = 0; i < rows; i++){
                    for(int j = 0; j < cols; j++){

                        if(!(file >> data[i][j])){

                            cerr << "\nERROR: Nao foi possivel ler os dados\n" << endl;

                            for(int k = 0; k <= i; k++){

                                delete[] data[k]; // Libera a memória alocada até agora
                            }

                            delete[] data;
                            file.close();
                            return;
                        }
                    }
                }

            } else {

                cerr << "\nERROR: Nao foi possivel alocar memoria\n" << endl;
            }

        } else {

            cerr << "\nERROR: Dimensoes invalidas\n" << endl;
        }

        file.close();
    }





};

#endif
