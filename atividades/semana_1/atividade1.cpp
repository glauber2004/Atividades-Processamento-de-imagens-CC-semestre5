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

    //variaveis necessárias
    float R, G, B;
    float C, M, Y, K;
        
    // normalizar um valor RGB
    if (inicio == 1){
        float auxSoma;
        double valorR, valorG, valorB;
       

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
    
        if (R < 0 || R > 255 or G < 0 || G > 255 or B < 0 || B > 255){
            cout << "Digite um valor RGB valido entre 0 - 255" << endl;
        } else {
            cout << fixed << setprecision(2) <<  valorR <<" "<< valorG <<" "<< valorB << endl;
        }
        
    } else if(inicio == 2) {   
        cout << "Software em Manutencao aguarde 3 " << endl;   
    } else if(inicio == 3) {
        cout << "Software em Manutencao aguarde 3 " << endl;
    } else if(inicio == 4) {
        cout << "Software em Manutencao aguarde 4" << endl;
    
    } else if(inicio == 5) { // conversão de CMYK para RGB
        
        cout << "Digite o valor C desejado: " << endl;
            cin >> C;
        cout << "Digite o valor M desejado: " << endl;
            cin >> M;
        cout << "Digite o valor Y desejado: " << endl;
            cin >> Y;
        cout << "Digite o valor K desejado: " << endl;
            cin >> K;

        R = 255 * (1-C) * (1-K);
        G = 255 * (1-M) * (1-K);
        B = 255 * (1-Y) * (1-K);

        cout << R << ", " << G << ", " << B << endl;

    } else if(inicio == 6) {
        cout << "Software em Manutencao aguarde 6" << endl;
    } else {
        cout << "Valor nao correspondente" << endl;
    }
    
return 0;
}