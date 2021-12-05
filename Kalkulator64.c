#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

char angka[1000];
int panjang;


int spaceremover(char angka[],int panjang){
    /*if (angka[0]==' '){
        printf("error");
        return 0;
    }*/
    for (int i=0;i<panjang;i++){
        if(angka[i]==' '){
            for (int j=i;j<panjang;j++){
                angka[j]=angka[j+1];
            }
        } 
    }
    return *angka;

}

int main()
{
    //int n1,n2,n;
    int input[100];
    char oper[500];
    int hasil=0;
    scanf("%[^\n]",angka);
    panjang=strlen(angka);
    spaceremover(angka,panjang);
    printf("%s\n",angka);
    
    //char* ptr;
    int j=0,k=0;
    for (int i=0; i<panjang;i++){
        //printf("test\n");
        if (isdigit(angka[i])){
            input[j]=angka[i]-48;
            printf("%d ",input[j]);
            j++;
        } else if (angka[i]=='+'){
            oper[k]=angka[i];
            k++;
        } else if (angka[i]=='-'){
            oper[k]=angka[i];
            input[j]=(angka[i+1]-48)*-1;
            printf("%d ",input[j]);
            i++;
            j++;
            k++;
        } 
    }
    printf("%s",oper);
    int g=0,h=0;
    for (g=0;g<strlen(oper);g++){
        if (g==0){
            hasil=input[h]+input[h+1];
            h+=2;
        } else {
            hasil=hasil+input[h];
            h++;
        }
    }
    printf("\n%d",hasil);
    return 0;
}

    




