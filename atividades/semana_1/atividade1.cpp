#include <iostream>
#include <iomanip>

using namespace std;
int main (){
    
    // Início
    cout << "1 = Normalizar um valor RGB" << endl;
    cout << "2 = Converter RGB para HSV" << endl;
    cout << "3 = Converter HSV para RGB" << endl;
    cout << "4 = Converter RGB para CMYK" << endl;
    cout << "5 = Converter CMYK para RGB" << endl;
    cout << "6 = Converter RGB para Escala Cinza" << endl;
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
        
    } else if(inicio == 2) { // Conversão RGB para HSV 
        cout << "Software em Manutencao aguarde 3 " << endl;   
    } else if(inicio == 3) { // Conversão HSV para RGB 
        cout << "Software em Manutencao aguarde 3 " << endl;



    } else if(inicio == 4) { // conversão de RGB para CMYK
        
        double Rlinha, Glinha, Blinha;
       
        cout << "Digite o valor R desejado: " << endl;
            cin >> R;
        cout << "Digite o valor G desejado: " << endl;
            cin >> G;
        cout << "Digite o valor B desejado: " << endl;
            cin >> B;

        Rlinha = R/255;
        Glinha = G/255; 
        Blinha = B/255;

        if(Rlinha >= Glinha && Rlinha >= Blinha){
            K = 1 - Rlinha;
        } else if(Glinha >= Rlinha && Glinha >= Blinha){
            K = 1 - Glinha;
        } else if(Blinha >= Rlinha && Blinha >= Glinha){
            K = 1 - Blinha;
        }

        C = (1-Rlinha-K)/(1-K);
        M = (1-Glinha-K)/(1-K);
        Y = (1-Blinha-K)/(1-K);


        if (R < 0 || R > 255 or G < 0 || G > 255 or B < 0 || B > 255){
            cout << "Digite um valor RGB valido entre 0 - 255" << endl;
        } else {
            cout << fixed << setprecision(0) << C <<"%, "<< M <<"%, "<< Y << "%, "<< K << "%"<< endl;
        }



    } else if(inicio == 5) { // conversão de CMYK para RGB
        
        cout << "Digite o valor C desejado: " << endl;
            cin >> C;
        cout << "Digite o valor M desejado: " << endl;
            cin >> M;
        cout << "Digite o valor Y desejado: " << endl;
            cin >> Y;
        cout << "Digite o valor K desejado: " << endl;
            cin >> K;

        R = 255 * (1-(C/100)) * (1-(K/100));
        G = 255 * (1-(M/100)) * (1-(K/100));
        B = 255 * (1-(Y/100)) * (1-(K/100));

        if (C < 0 || C > 100 or M < 0 || M > 100 or Y < 0 || Y > 100 or K < 0 || K > 100){
            cout << "Digite um valor CMYK valido entre 0 - 100" << endl;
        } else {
            cout << fixed << setprecision(0) <<  R << ", " << G << ", " << B << endl;
        }

    } else if(inicio == 6) {
        cout << "Software em Manutencao aguarde 6" << endl;
    } else {
        cout << "Valor nao correspondente, digite valores presentes na tabela" << endl;
    }
    
return 0;
}