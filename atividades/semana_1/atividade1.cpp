#include <iostream>
#include <iomanip>
#include <cmath>


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
    float H, S, V;
    float C, M, Y, K;
    


    if (inicio == 1 || inicio == 2 || inicio == 4 || inicio == 6){

        //Padrão RGB - Tratamento de valores
        cout << "Digite o valor R desejado: " << endl;
            cin >> R;
            if (R < 0){
                R = 0;
            } else if (R > 255){
                R = 255;
            } else {
                R = R;
            }

        cout << "Digite o valor G desejado: " << endl;
            cin >> G;
            if (G < 0){
                G = 0;
            } else if (G > 255){
                G = 255;
            } else {
                G = G;
            }

        cout << "Digite o valor B desejado: " << endl;
            cin >> B;
            if (B < 0){
                B = 0;
            } else if (B > 255){
                B = 255;
            } else {
                B = B;
            } 


            // variaveis para utilização -- CMYK 
            float minimo, maximo;

            //valor maximo
            if(R >= G && R >= B){
                maximo = R;
            } else if(G >= R && G >= B){
                maximo = G;
            } else if(B >= R && B >= G){
                maximo = B;
            }

            //valor minimo
            if(R <= G && R <= B){
                minimo = R;
            } else if(G <= R && G <= B){
                minimo = G;
            } else if(B <= R && B <= G){
                minimo = B;
            }



        if (inicio == 1){
            // normalizar um valor RGB
            float auxSoma;
            double valorR, valorG, valorB;

            auxSoma = R + G + B;
            valorR = R / auxSoma;
            valorG = G / auxSoma;
            valorB = B / auxSoma;
    
            cout << fixed << setprecision(2) <<  valorR <<" "<< valorG <<" "<< valorB << endl;


        } else if (inicio == 2){


            // conversão de RGB para HSV
            /*
            if (R = maximo && G >= B){
                H = 60 * ((G - B) / (maximo - minimo));
            } else if(R = maximo && G < B){
                H = 60 * ((G - B) / (maximo - minimo) + 360);
            } else if(G = maximo){
                H = 60 * ((B - R) / (maximo - minimo) + 120);
            } else if (B = maximo){
                H = 60 * ((R - G) / (maximo - minimo) + 240);
            } else {
                cout << "Valor Incorreto digitado" << endl;
            }
            */
            
            H = 60 * ((G - B) / (maximo - minimo));
            S = (maximo - minimo) / maximo;
            V = 100 - ((1 - maximo / 255) * 100);

            cout << fixed << setprecision(2) << H << " graus, " << S * 100 << "%, " << V << "% " << endl;


        } else if (inicio == 4){
            // conversão de RGB para CMYK
            double Rlinha, Glinha, Blinha;
            double maximo;
            Rlinha = R/255;
            Glinha = G/255; 
            Blinha = B/255;

            //valor maximo
            if(Rlinha >= Glinha && Rlinha >= Blinha){
                maximo = Rlinha;
            } else if(Glinha >= Rlinha && Glinha >= Blinha){
                maximo = Glinha;
            } else if(Blinha >= Rlinha && Blinha >= Glinha){
                maximo = Blinha;
            }

            K = (1 - maximo);
            C = ((1-Rlinha-K)/(1-K)) * 100;
            M = ((1-Glinha-K)/(1-K)) * 100;
            Y = ((1-Blinha-K)/(1-K)) * 100;
            

            cout << fixed << setprecision(2) << C <<"%, "<< M <<"%, "<< Y << "%, "<< K * 100 << "%"<< endl;

        } else if(inicio == 6){
            // Escala de cinza
            double escalacinza;

            escalacinza = 0.299 * R + 0.587 * G + 0.114 * B;
            cout << fixed << setprecision(0) << escalacinza << endl;
        }


    }else if(inicio == 3){
        // aqui tem que fazer 



    }else if(inicio == 5) { // conversão de CMYK para RGB
        
        cout << "Digite o valor C desejado: " << endl;
            cin >> C;
            if(C < 0){
                C = 0;
            } else if (C > 100){
                C = 100;
            } else {
                C = C;
            }

        cout << "Digite o valor M desejado: " << endl;
            cin >> M;
            if(M < 0){
                M = 0;
            }else if(M > 100){
                M = 100;
            }else{
                M = M;
            }

        cout << "Digite o valor Y desejado: " << endl;
            cin >> Y;
            if(Y < 0){
                Y = 0;
            }else if(Y > 100){
                Y = 100;
            }else{
                Y = Y;
            }

        cout << "Digite o valor K desejado: " << endl;
            cin >> K;
            if(K < 0){
                K = 0;
            }else if(K > 100){
                K = 100;
            }else{
                K = K;
            }

        R = 255 * (1-(C/100)) * (1-(K/100));
        G = 255 * (1-(M/100)) * (1-(K/100));
        B = 255 * (1-(Y/100)) * (1-(K/100));
        
        cout << fixed << setprecision(0) <<  R << ", " << G << ", " << B << endl;

    } else {
        cout << "Valor nao correspondente, digite valores presentes na tabela" << endl;
    }
    
return 0;
}