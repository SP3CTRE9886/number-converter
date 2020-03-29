#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//***************************GLOBAL FUNCTIONS***********************************
void BINARYmain();
void DECIMALmain();
void OCTALmain();
void HEXADECIMALmain();
int * getBIN(int bits);
int * getOCT(int bits);
int * getHEX(int bits);
int toDECIMAL(int type);
int fromDECIMAL(int initialNUM , int type);
//***************************GLOBAL VARIABLES***********************************
int bits,i,num;
//*******************************main()*****************************************
int main(){
    int opt;
    cout<<"\t\t\t ***************** MENU *****************";
    cout<<"\n\t\t\t\t [1].CONVERT from BINARY ";
    cout<<"\n\t\t\t\t [2].CONVERT from DECIMAL ";
    cout<<"\n\t\t\t\t [3].CONVERT from OCTAL ";
    cout<<"\n\t\t\t\t [4].CONVERT from HEXADECIMAL ";
    cout<<"\n\t\t\t\t [0].EXIT";
    cout<<"\n\n\t\t\t\t Enter option number : ";

    cin>>opt;

    switch(opt){
        case 1 :BINARYmain();
                break;
        case 2 :DECIMALmain();
                break;
        case 3 :OCTALmain();
                break;
        case 4 :HEXADECIMALmain();
                break;
        case 0 :exit(0);
                break;
        default:cout<<"invalid option ! choose again";
                main();
    }
}
//****************************BINARY MENU***************************************
void BINARYmain(){
    int opt;
    cout<<"\t\t\t *************BINARY OPERATIONS MENU *****************";
    cout<<"\n\t\t\t\t [1].CONVERT BINARY to DECIMAL ";
    cout<<"\n\t\t\t\t [2].CONVERT BINARY to OCTAL ";
    cout<<"\n\t\t\t\t [3].CONVERT BINARY to HEXADECIMAL ";
    cout<<"\n\t\t\t\t [0].EXIT to MAIN MENU";
    cout<<"\n\n\t\t\t\t Enter option number : ";

    cin>>opt;

    switch(opt){
        case 1 :num=toDECIMAL(2);
                cout<<"THE CONVERTED RESULT IS "<<num<<"\n\n\n";
                break;
        case 2 :num=toDECIMAL(2);
                fromDECIMAL(num,8);
                break;
        case 3 :num=toDECIMAL(2);
                fromDECIMAL(num,16);
                break;
        case 0 :main();
                break;
        default:cout<<"invalid option ! try again ";
                BINARYmain();
    }
    BINARYmain();
}

//***********************DECIMAL MENU*******************************************
void DECIMALmain(){
    int opt;
    cout<<"\t\t\t *************DECIMAL OPERATIONS MENU *****************";
    cout<<"\n\t\t\t\t [1].CONVERT DECIMAL to BINARY ";
    cout<<"\n\t\t\t\t [2].CONVERT DECIMAL to OCTAL ";
    cout<<"\n\t\t\t\t [3].CONVERT DECIMAL to HEXADECIMAL ";
    cout<<"\n\t\t\t\t [0].EXIT to MAIN MENU";
    cout<<"\n\n\t\t\t\t Enter option number : ";

    cin>>opt;

    cout<<"Enter the decimal number to be converted :";
    cin>>num;
    switch(opt){
        case 1 :fromDECIMAL(num,2);
                break;
        case 2 :fromDECIMAL(num,8);
                break;
        case 3 :fromDECIMAL(num,16);
                break;
        case 0 :main();
                break;
        default:cout<<"invalid option ! try again ";
                DECIMALmain();
    }
    DECIMALmain();
}

//************************OCTAL MENU *******************************************
void OCTALmain(){
    int opt;
    cout<<"\t\t\t *************OCTAL OPERATIONS MENU *****************";
    cout<<"\n\t\t\t\t [1].CONVERT OCTAL to BINARY ";
    cout<<"\n\t\t\t\t [2].CONVERT OCTAL to DECIMAL ";
    cout<<"\n\t\t\t\t [3].CONVERT OCTAL to HEXADECIMAL ";
    cout<<"\n\t\t\t\t [0].EXIT to MAIN MENU";
    cout<<"\n\n\t\t\t\t Enter option number : ";

    cin>>opt;

    switch(opt){
        case 1 :num=toDECIMAL(8);
                fromDECIMAL(num,2);
                break;
        case 2 :num=toDECIMAL(8);
                cout<<"THE CONVERTED RESULT IS "<<num<<"\n\n\n";
                break;
        case 3 :num=toDECIMAL(8);
                fromDECIMAL(num,16);
        case 0 :main();
                break;
        default:cout<<"invalid option ! try again ";
                OCTALmain();
    }
    OCTALmain();
}

//**************************HEXADECIMAL MENU************************************
void HEXADECIMALmain(){
    int opt;
    cout<<"\t\t\t *************HEXADECIMAL OPERATIONS MENU *****************";
    cout<<"\n\t\t\t\t [1].CONVERT HEXADECIMAL to BINARY ";
    cout<<"\n\t\t\t\t [2].CONVERT HEXADECIMAL to DECIMAL ";
    cout<<"\n\t\t\t\t [3].CONVERT HEXADECIMAL to OCTAL ";
    cout<<"\n\t\t\t\t [0].EXIT to MAIN MENU";
    cout<<"\n\n\t\t\t\t Enter option number : ";

    cin>>opt;

    switch(opt){
        case 1 :num=toDECIMAL(16);
                fromDECIMAL(num,2);
                break;
        case 2 :num=toDECIMAL(16);
                cout<<"THE CONVERTED RESULT IS "<<num<<"\n\n\n";
                break;
        case 3 :num=toDECIMAL(16);
                fromDECIMAL(num,8);
        case 0 :main();
                break;
        default:cout<<"invalid option ! try again ";
                HEXADECIMALmain();
    }
    HEXADECIMALmain();
}

//*******************************BINARY INPUT***********************************
int *  getBIN(int bits){

    char BINinput[25];
    static int numericalBIN[25];
    cout<<"Enter the binary number of "<<bits<<" bits :";
    for (i=(bits-1);i>-1;i--){
        cin>>BINinput[i];

        if (BINinput[i] == '1')
            numericalBIN[i] = 1;
        else if (BINinput[i] == '0')
            numericalBIN[i] = 0;
        else{
            cout<<BINinput[i]<<" is not a BINARY exiting !!";
            exit(0);
        }
    }

    return numericalBIN;

}

//****************************OCTAL INPUT **************************************
int * getOCT(int bits){
    char OCTinput[25];
    static int numericalOCT[25];
    cout<<"Enter the OCTAL number of"<<bits<<" digits :";
    for (i=(bits-1) ; i> -1 ;i-- ){
        cin>>OCTinput[i];

        switch(OCTinput[i]){
            case '1'    :numericalOCT[i] = 1;
            case '2'    :numericalOCT[i] = 2;
            case '3'    :numericalOCT[i] = 3;
            case '4'    :numericalOCT[i] = 4;
            case '5'    :numericalOCT[i] = 5;
            case '6'    :numericalOCT[i] = 6;
            case '7'    :numericalOCT[i] = 7;
            case '8'    :numericalOCT[i] = 8;
        }
    }
    return numericalOCT;
}

//**************************HEXADECIMAL INPUT**********************************
int * getHEX(int bits){
    char HEXinput[25];
    static int numericalHEX[25];
    cout<<"Enter the OCTAL number of"<<bits<<" digits :";
    for (i=bits-1 ;i > -1 ; i--){
        cin>>HEXinput[i];

        switch(HEXinput[i]){
            case '1' : numericalHEX[i] = 1;
            break;
            case '2' : numericalHEX[i] = 2;
            break;
            case '3' : numericalHEX[i] = 3;
            break;
            case '4' : numericalHEX[i] = 4;
            break;
            case '5' : numericalHEX[i] = 5;
            break;
            case '6' : numericalHEX[i] = 6;
            break;
            case '7' : numericalHEX[i] = 7;
            break;
            case '8' : numericalHEX[i] = 8;
            break;
            case '9' : numericalHEX[i] = 9;
            break;
            case '0' : numericalHEX[i] = 0;
            break;


            case 'a' :
            case 'A' : numericalHEX[i] = 10;
            break;
            case 'b' :
            case 'B' : numericalHEX[i] = 11;
            break;
            case 'c' :
            case 'C' : numericalHEX[i] = 12;
            break;
            case 'd' :
            case 'D' : numericalHEX[i] = 12;
            break;
            case 'e' :
            case 'E' : numericalHEX[i] = 12;
            break;
            case 'f' :
            case 'F' : numericalHEX[i] = 12;
            break;

            default  : cout<<HEXinput<<" is not a HEXADECIMAL number";
                       exit(0);

        }
    }
    return numericalHEX;
}

//****************************TO DECIMAL CONVERTION ***************************
int toDECIMAL(int type){

    int *getINPUTval;
    int returnedINTval[25],finalRESULT=0;

    if(type == 2){
        cout<<"Enter the number of bits :";
        cin>>bits;
        getINPUTval = getBIN(bits);
    }
    else if (type == 8){
        cout<<"Enter the number of digits : ";
        cin>>bits;
        getINPUTval = getOCT(bits);
    }
    else if (type == 16){
        cout<<"Enter the number of digits : ";
        cin>>bits;
        getINPUTval = getHEX(bits);
    }

    for (i=bits-1 ; i>-1 ; i--){
        returnedINTval[i] = *(getINPUTval + i);
    }

    for (i=bits-1 ; i>-1 ;i--){
        finalRESULT = finalRESULT + ( returnedINTval[i] * pow(type,i));
    }

    return finalRESULT;
}

//**************************** FROM DECIMAL CONVERTING**************************
int fromDECIMAL(int initialNUM , int type){
    int result[25],reminder[25],flag;

    result[0] = initialNUM ;

    for (i=1 ; result[i-1] > 0 ; i++){
        result[i] = result[i-1] / type ;
        reminder[i] = result[i-1] % type ;
        flag = i;
    }

    cout<<"THE CONVERTED RESULT IS :";

    for (i=flag ; i > 0 ; i--){

        if (reminder[i]<10){
            cout<<reminder[i];
        }
        else{
            switch(reminder[i]){
                case 10 :cout<<'A';
                         break;
                case 11 :cout<<'B';
                         break;
                case 12 :cout<<'C';
                         break;
                case 13 :cout<<'D';
                         break;
                case 14 :cout<<'E';
                         break;
                case 15 :cout<<'F';
                         break;
            }
        }
    }
    cout<<"\n\n";
}
