/**

    Classe Matrizes -> ESTUDOS DIRIGIDOS THELDO
    Aluno: Vitor Costa Oliveira Rolla
*/

#include<iostream>      // Para entrada e saidas
#include<string>        // Para trabalhar cadeia de caracteres
#include<fstream>       // Para trabalhar arquivos
#include "MyMatrix.hpp" //Para trabalhar matrizes
using namespace std;

//----------------------------------------------//

void pause(std::string text){
     std::string dummy;
     std::cin.clear();
     std::cout << std::endl << text;
     std::cin.ignore();
     std::getline(std::cin, dummy);
     std::cout << std::endl << std::endl;
}


void metodo_01(){

     Matrix <int> matrix(2, 2, 0);

     matrix.set(0, 0, 1); matrix.set(0, 1, 2);
     matrix.set(1, 0, 3); matrix.set(1, 1, 4);

     cout << "\nExercicio 01 - v0.0\n" << endl;

     matrix.print();

     pause("Apertar ENTER para continuar");
}


void metodo_02(){

     Matrix <int> matrix(2, 2, 0);

     cout << "\nExercicio 02 - v0.0\n" << endl;

     matrix.read();
     cout << endl;
     matrix.print();

     pause("Apertar ENTER para continuar");
}


void metodo_03(){

     Matrix <int> matrix(2, 2, 0);

     cout << "\nExercicio 03 - v0.0\n" << endl;

     //Para testar futuramente com outros metodos
     matrix.read();
     cout << endl;
     matrix.fprint("DADOS1.TXT");

     //Para testar futuramente com outros metodos
     matrix.read();
     cout << endl;
     matrix.fprint("DADOS2.TXT");

     pause("Apertar ENTER para continuar");
}

void metodo_04(){

     Matrix <int> matrix1(2, 2, 0);

     cout << "\nExercicio 04 - v0.0\n"        << endl;

     cout << "\nMatrix 1: " << endl;
     matrix1.fread("DADOS1.TXT");
     matrix1.print();



     pause("Apertar ENTER para continuar");
}

void metodo_05(){

}

void metodo_06(){

}

void metodo_07(){

}

void metodo_08(){

}

void metodo_09(){

}

void metodo_10(){

}

void metodo_11(){

}

void metodo_12(){

}

void metodo_13(){

}

void metodo_14(){

}

void metodo_15(){

}

void metodo_16(){

}

void metodo_17(){

}

void metodo_18(){

}

void metodo_19(){

}


void metodo_20(){

}

void metodo_21(){

}

void metodo_22(){

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
            cout << "Opcao invalida . . ." << endl;
            break;
        }

    } while(opcao != 0);

    return 0;
}
