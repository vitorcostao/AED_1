/**

    TEMPLATE -> ESTUDOS DIRIGIDOS THELDO
    Aluno: Vitor Costa Oliveira Rolla
*/

#include<iostream>     // Para entrada e saidas
#include<string>       // Para trabalhar cadeia de caracteres
#include<fstream>      // Para trabalhar arquivos

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

    pause("Aperte ENTER para continuar");
}


void metodo_02(){

    cout << "\nExercicio_02 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}


void metodo_03(){

    cout << "\nExercicio_03 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_04(){

    cout << "\nExercicio_04 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_05(){

    cout << "\nExercicio_05 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_06(){

    cout << "\nExercicio_06 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_07(){

    cout << "\nExercicio_07 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_08(){

    cout << "\nExercicio_08 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_09(){

    cout << "\nExercicio_09 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_10(){

    cout << "\nExercicio_10 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_11(){

    cout << "\nExercicio_11 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_12(){

    cout << "\nExercicio_12 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_13(){

    cout << "\nExercicio_13 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_14(){

    cout << "\nExercicio_14 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_15(){

    cout << "\nExercicio_15 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_16(){

    cout << "\nExercicio_16 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_17(){

    cout << "\nExercicio_17 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_18(){

    cout << "\nExercicio_18 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_19(){

    cout << "\nExercicio_19 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}


void metodo_20(){

    cout << "\nExercicio_20 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_21(){

    cout << "\nExercicio_21 - v0.0\n" << endl;

    pause("Aperte ENTER para continuar");
}

void metodo_22(){

    cout << "\nExercicio_22 - v0.0\n" << endl;

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
