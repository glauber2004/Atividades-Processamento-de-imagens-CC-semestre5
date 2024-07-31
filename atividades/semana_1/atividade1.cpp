#include <iostream>
#include <iomanip>

using namespace std;
int main (){
    
    // Início
    cout << "1 = Normalizar um valor RGB" << endl;
    cout << "2 = Conversão RGB para HSV" << endl;
    cout << "3 = Conversão HSV para RGB" << endl;
    cout << "4 = Conversão RGB para CMYK" << endl;
    cout << "5 = Conversão CMYK para RGB" << endl;
    cout << "6 = Conversão RGB para Escala Cinza" << endl;
    cout << "Digite de acordo com a tabela o valor a ser convertido"<< endl; 
    int inicio;
    cin >> inicio;
    
    // Primeiro IF conversão de RGB para os demais
    if (inicio == 1){
        float auxSoma;
        double valorR, valorG, valorB;
        float R, G, B;
        
        cout << "Digite o valor R desejado: " << endl;
            cin >> R;
        cout << "Digite o valor G desejado: " << endl;
            cin >> G;
        cout << "Digite o valor B desejado: " << endl;
            cin >> B;
    
    
    //Função para normalizar RGB
        auxSoma = R + G + B;
        valorR = R / auxSoma;
        valorG = G / auxSoma;
        valorB = B / auxSoma;
    
        if ((R < 0 || R > 255) or (G < 0 || G > 255) or (B < 0 || B > 255)){
            cout << "Digite um valor RGB válido" << endl;
        } else {
            cout << fixed << setprecision(2) <<  valorR <<" "<< valorG <<" "<< valorB << endl;
        }
        
    } else {
        cout << "Valor não correspondente" << endl;
    }
    
return 0;
}