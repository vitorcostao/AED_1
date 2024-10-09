/**

    Arrays C++ -> ESTUDOS DIRIGIDOS THELDO
    Aluno: Vitor Costa Oliveira Rolla
*/

#include<iostream>     // Para entrada e saidas
#include<string>       // Para trabalhar cadeia de caracteres
#include<fstream>      // Para trabalhar arquivos
#include "myarray.hpp" // Para trabalhar arrays

using namespace std;

//----------------------------------------------

void pause(string text){

    string dummy;
    cin.clear();
    cout << endl << text;
    cin.ignore();
    getline(cin, dummy);
    cout << endl << endl;
}

//----------------------------------------------

void metodo_01(){

    cout << "\nExercicio_01 - v0.0\n" << endl;

    //Declarando variavel
    Array <int> arranjo(0, 5);

    //Funcoes a serem aplicadas
    arranjo.set(0, 1);
    arranjo.set(1, 2);
    arranjo.set(2, 3);
    arranjo.set(3, 4);
    arranjo.set(4, 5);
    arranjo.print();

    pause("Aperte ENTER para continuar");
}


void metodo_02(){

    cout << "\nExercicio_02 - v0.0\n" << endl;

    //Declarando variavel
    Array <int> arranjo(0, 5);

    //Funcoes a serem aplicadas
    arranjo.read();
    arranjo.print();

    pause("Aperte ENTER para continuar");
}


void metodo_03(){

    cout << "\nExercicio_03 - v0.0\n" << endl;

    //Declarando variavel
    Array <int> arranjo(0, 5);

    //Funcoes a serem aplicadas
    arranjo.read();
    arranjo.fprint("DADOS.TXT");
    arranjo.print();

    pause("Aperte ENTER para continuar");
}

void metodo_04(){

    cout << "\nExercicio_04 - v0.0\n" << endl;

    //Declarando variavel
    Array <int> arranjo(0, 5);

    //Funcoes a serem aplicadas
    arranjo.fread("DADOS.TXT");
    arranjo.print();

    pause("Aperte ENTER para continuar");
}

void metodo_05(){

    cout << "\nExercicio_05 - v0.0\n" << endl;

    //Declarando variaveis
    int other[] = {1, 2, 3, 4, 5};
    Array <int> arranjo(5, other);

    //Funcoes a serem aplicadas
    arranjo.print();

    pause("Aperte ENTER para continuar");
}

void metodo_06(){

    cout << "\nExercicio_06 - v0.0\n" << endl;

    //Declarando variaveis
    Array <int> arranjo1(0, 5);
    arranjo1.fread("DADOS.TXT");
    Array <int> arranjo2(arranjo1);

    //Funcoes a serem aplicadas

    cout << "\nArray original: " << endl;
    arranjo1.print();
    cout << "\nArray de copia: " << endl;
    arranjo2.print();

    pause("Aperte ENTER para continuar");
}

void metodo_07(){

    cout << "\nExercicio_07 - v0.0\n" << endl;

    //Declarando variaveis
    Array <int> arranjo1(0, 5);
    arranjo1.fread("DADOS.TXT");
    Array <int> arranjo2(0, 1);

    //Funcoes e operadores a serem aplicadas
    arranjo2 = arranjo1;

    cout << "\nArray original: " << endl;
    arranjo1.print();
    cout << "\nArray de copia: " << endl;
    arranjo2.print();

    pause("Aperte ENTER para continuar");
}

void metodo_08(){

    cout << "\nExercicio_08 - v0.0\n" << endl;

    //Declarando variaveis
    Array <int> arranjo1(0, 5);
    arranjo1.fread("DADOS.TXT");
    Array <int> arranjo2(0, 5);
    arranjo2.read();

    if(arranjo1 == arranjo2){

        cout << "\nSao arranjos iguais" << endl;

        cout << "\nArray original: " << endl;
        arranjo1.print();
        cout << "\nArray de copia: " << endl;
        arranjo2.print();


    } else {

        cout << "\nSao arranjos diferentes" << endl;

        cout << "\nArray original: " << endl;
        arranjo1.print();
        cout << "\nArray de copia: " << endl;
        arranjo2.print();
    }

    pause("Aperte ENTER para continuar");
}

void metodo_09(){

    cout << "\nExercicio_09 - v0.0\n" << endl;

    //Declarando variaveis
    Array <int> arranjo1(0, 5);
    arranjo1.fread("DADOS.TXT");
    Array <int> arranjo2(0, 1);
    Array <int> arranjo3(0, 5);

    //Funcoes e operadores a serem aplicadas
    arranjo2 = arranjo1;
    arranjo3 = arranjo1 + arranjo2;
    arranjo3.print();


    pause("Aperte ENTER para continuar");
}

void metodo_10(){

    cout << "\nExercicio_10 - v0.0\n" << endl;

    //Definir dados
    int other[] = {1, 2, 3, 4, 5};
    Array <int> arranjo1 (5, other);

    //Funcoes a serem aplicadas
    cout << "\nAcesso externo" << endl;
    for(int i = 0; i < arranjo1.getLength(); i++){

        cout << endl << setw(3) << i << ":" << arranjo1[i];
    }

    cout << endl << "\nFora dos limites";
    cout << endl << "[-1]" << arranjo1.get(-1) << endl;
    cout << endl << "["    << arranjo1.getLength() << "]:"
                           << arranjo1[arranjo1.getLength()] << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_11(){

    cout << "\nExercicio_11 - v0.0\n" << endl;

    //Definir dados
    int n;

    //Funcoes a serem aplicadas
    cout << "\nDigite o valor de numeros aleatorios" << endl;
    cin  >> n;
    Array <int> arranjo2(0, n);
    Array <int> arranjo(0, n);

    arranjo.randomIntGenerate(1, 100);
    arranjo2 = arranjo;
    arranjo2.fprint("RANDOM.TXT");


    pause("Aperte ENTER para continuar");
}

void metodo_12(){

    cout << "\nExercicio_12 - v0.0\n" << endl;

    //Definir dados
    Array <int> arranjo(0, 1);
    int maior;

    //Funcoes a serem aplicadas
    arranjo.fread("RANDOM.TXT");
    arranjo.print();
    maior = arranjo.searchFirstEven();

    if(maior % 2 != 0){

        cout << "\nNao ha valores pares" << endl;

    } else {

        cout << "\nMaior valor par: " << maior << endl;
    }

    pause("Aperte ENTER para continuar");
}

void metodo_13(){

    cout << "\nExercicio_13 - v0.0\n" << endl;

    //Definir dados
    Array <int> arranjo(0, 1);
    int menor;

    //Funcoes a serem aplicadas
    arranjo.fread("RANDOM.TXT");
    arranjo.print();
    menor = arranjo.searchLowestOdd();

    if(menor % 2 == 0){

        cout << "\nNao ha valores impares" << endl;

    } else {

        cout << "\nMenor valor impar: " << menor << endl;
    }

    pause("Aperte ENTER para continuar");
}

void metodo_14(){

    cout << "\nExercicio_14 - v0.0\n" << endl;

    //Definir dados
    Array <int> arranjo(0, 1);
    int a, b, soma = 0;

    //Funcoes a serem aplicadas
    arranjo.fread("RANDOM.TXT");
    arranjo.print();

    cout << "\nDefina o inicio do intervalo" << endl;
    cin  >> a;

    cout << "\nDefina o fim do intervalo" << endl;
    cin  >> b;

    soma = arranjo.addArrayInterval(a, b);

    cout << "\nSoma: " << soma << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_15(){

    cout << "\nExercicio_15 - v0.0\n" << endl;

    //Definir dados
    Array <float> arranjo(0.0, 1);
    int a, b;
    float media;

    //Funcoes a serem aplicadas
    arranjo.fread("RANDOM.TXT");
    arranjo.print();

    cout << "\nDefina o inicio do intervalo" << endl;
    cin  >> a;

    cout << "\nDefina o fim do intervalo" << endl;
    cin  >> b;

    media = arranjo.avaregeInterval(a, b);

    cout << "\nMedia: " << media << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_16(){

    cout << "\nExercicio_16 - v0.0\n" << endl;

    //Definir dados
    Array <int> arranjo(0, 1);
    int a, b, soma = 0;

    //Funcoes a serem aplicadas
    arranjo.fread("DADOS.TXT");

    if(arranjo.Allnegatives()){

        cout << "\nExistem apenas valores negativo no Array" << endl;

    } else {

        cout << "\nExistem valores positivos no Array" << endl;
    }

    arranjo.print();

    pause("Aperte ENTER para continuar");
}

void metodo_17(){

    cout << "\nExercicio_17 - v0.0\n" << endl;

    //Definir dados
    Array <int> arranjo(0, 1);

    //Funcoes a serem aplicadas
    arranjo.fread("RANDOM.TXT");
    arranjo.print();

    if(arranjo.isDecrescent()){

        cout << "\nO Array e decrescente" << endl;

    } else {

        cout << "\nO Array nao esta ordenado em ordem decrescente" << endl;
    }

    pause("Aperte ENTER para continuar");
}

void metodo_18(){

    cout << "\nExercicio_18 - v0.0\n" << endl;

    //Definir dados
    Array <int> arranjo(0, 1);
    int procurado, in, fim;

    //Funcoes a serem aplicadas
    arranjo.fread("RANDOM.TXT");

    cout << "\nQual valor deseja procurar: " << endl;
    cin  >> procurado;

    cout << "\nDefina o inicio do intervalo: " << endl;
    cin  >> in;

    cout << "\nDefina o fim do intervalo: " << endl;
    cin  >> fim;

    if(arranjo.searchInterval(procurado, in, fim)){

        cout << "\nO valor " << procurado << " existe no intervalo definido no array" << endl;
        arranjo.print();

    } else {

        cout << "\nO valor " << procurado << " nao existe no intervalo definido no array" << endl;
        arranjo.print();
    }


    pause("Aperte ENTER para continuar");
}

void metodo_19(){

    cout << "\nExercicio_19 - v0.0\n" << endl;

    //Definir dados
    Array <int> arranjo(0, 1);
    int k, in, fim;

    //Funcoes a serem aplicadas
    arranjo.fread("RANDOM.TXT");

    cout << "\nDefina uma constante k para escalar o Array: " << endl;
    cin  >> k;

    cout << "\nDefina o inicio do intervalo: " << endl;
    cin  >> in;

    cout << "\nDefina o fim do intervalo: " << endl;
    cin  >> fim;

    arranjo.scalar(k, in, fim);
    cout << "\nArray escalado: " << endl;
    arranjo.print();


    pause("Aperte ENTER para continuar");
}


void metodo_20(){

    cout << "\nExercicio_20 - v0.0\n" << endl;

    //Definir dados
    Array <int> arranjo(0, 1);
    int k, in, fim;

    //Funcoes a serem aplicadas
    arranjo.fread("RANDOM.TXT");

    cout << "\nDefina uma constante k para escalar o Array: " << endl;
    cin  >> k;

    cout << "\nDefina o inicio do intervalo: " << endl;
    cin  >> in;

    cout << "\nDefina o fim do intervalo: " << endl;
    cin  >> fim;

    arranjo.scalar(k, in, fim);
    cout << "\nArray escalado: " << endl;
    arranjo.print();

    pause("Aperte ENTER para continuar");
}

void metodo_21(){

    cout << "\nExercicio_21 - v0.0\n" << endl;

    //Definir dados
    Array <int> arranjo1(0, 1);
    Array <int> arranjo2(0, 1);


    //Funcoes a serem aplicadas
    arranjo1.fread("RANDOM.TXT");
    arranjo2.fread("DADOS.TXT");

    if(arranjo1.Distinct(arranjo2)){

        cout << "\nOs Arrays sao distintos ou em tamanho, ou em uma posicao pelo menos" << endl;
        arranjo1.print();
        cout << endl;
        arranjo2.print();
    } else {

        cout << "\nOs Arrays sao iguais" << endl;
        arranjo1.print();
        cout << endl;
        arranjo2.print();
    }

    pause("Aperte ENTER para continuar");
}

void metodo_22(){

    cout << "\nExercicio_22 - v0.0\n" << endl;

    //Definir dados
    Array <int> arranjo1(0, 1);
    Array <int> arranjo2(0, 1);


    //Funcoes a serem aplicadas
    arranjo1.fread("RANDOM.TXT");
    arranjo1.print();
    cout << endl;
    arranjo2.fread("DADOS.TXT");
    arranjo2.print();
    cout << endl;

    arranjo1.differencesIntervals(arranjo2);

    pause("Aperte ENTER para continuar");
}

int main (){

    int opcao = 1;

    do{

        cout << "Digite a opcao: " << endl;
        cin  >> opcao;

        switch(opcao){

        case 0:
            printf("\nEncerrar . . . ");
            break;

        case 1:
            metodo_01();
            break;

        case 2:
            metodo_02();
            break;

        case 3:
            metodo_03();
            break;

        case 4:
            metodo_04();
            break;

        case 5:
            metodo_05();
            break;

        case 6:
            metodo_06();
            break;

        case 7:
            metodo_07();
            break;

        case 8:
            metodo_08();
            break;

        case 9:
            metodo_09();
            break;

        case 10:
            metodo_10();
            break;

        case 11:
            metodo_11();
            break;

        case 12:
            metodo_12();
            break;

        case 13:
            metodo_13();
            break;

        case 14:
            metodo_14();
            break;

        case 15:
            metodo_15();
            break;

        case 16:
            metodo_16();
            break;

        case 17:
            metodo_17();
            break;

        case 18:
            metodo_18();
            break;

        case 19:
            metodo_19();
            break;

        case 20:
            metodo_20();
            break;

        case 21:
            metodo_21();
            break;

        case 22:
            metodo_22();
            break;

        default:
            pause("Aperte ENTER para encerrar o programa");
            break;
        }

    } while(opcao != 0);

    return 0;
}
