/*
Lok - The Lok program translates from english letters to lols and oks.
Copyright (C) 2019 OnikenX
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

//lol _ ; ok .
#include <stdio.h>
#include <string.h>

void loktonormal(){

    char letterStr[27][40];
    
    //defenindo as letras
    strcpy(letterStr[0],"ok.lol.");//a
    strcpy(letterStr[1],"lol.ok.ok.ok.");//b
    strcpy(letterStr[2],"lol.ok.lol.ok.");//c
    strcpy(letterStr[3],"lol.ok.ok.");//d
    strcpy(letterStr[4],"ok.");//e
    strcpy(letterStr[5],"ok.ok.lol.ok.");//f
    strcpy(letterStr[6],"lol.lol.ok.");//g
    strcpy(letterStr[7],"ok.ok.ok.ok.");//h
    strcpy(letterStr[8],"ok.ok.");//i
    strcpy(letterStr[9],"ok.lol.lol.lol.");//j
    strcpy(letterStr[10],"lol.ok.lol.");//k
    strcpy(letterStr[11],"ok.lol.ok.ok.");//l
    strcpy(letterStr[12],"lol.lol.");//m
    strcpy(letterStr[13],"lol.ok");//n
    strcpy(letterStr[14],"lol.lol.lol.");//o
    strcpy(letterStr[15],"ok.lol.lol.ok.");//p
    strcpy(letterStr[16],"lol.lol.ok.lol.");//q
    strcpy(letterStr[17],"ok.lol.ok.");//r
    strcpy(letterStr[18],"ok.ok.ok.");//s
    strcpy(letterStr[19],"lol.");//t
    strcpy(letterStr[20],"ok.ok.lol.");//u
    strcpy(letterStr[21],"ok.ok.ok.lol.");//v
    strcpy(letterStr[22],"ok.lol.lol.");//w
    strcpy(letterStr[23],"lol.ok.ok.lol.");//x
    strcpy(letterStr[24],"lol.ok.lol.lol.");//y
    strcpy(letterStr[25],"lol.lol.ok.ok.");//z
    strcpy(letterStr[26]," ");
    
    char stringado[10000][50],tradu[10000];
    int len;
    printf("largura(o numero de palavras entre espaços)e aseguir o codigo\n");
    fflush(stdin);
    scanf("%d",&len);
    //printf("digite o codigo:");
    for(int i=0;i<len;i++){
        fflush(stdin);
        scanf("%s",stringado[i]);
    }
    for(int i=0;i<len;i++){
    }
    //fazer a traduçao
    for(int i=0;i<len;i++){
        if(stringado[i][0]=='_'){
            tradu[i]='.';
            
        }
        else 
        for(int l=0;l<26;l++){
            if(!strcmp(stringado[i],letterStr[l])){
                tradu[i]=l+97;
            }
        }
    }
    printf("\ntradução:\n");
    //printf("len=%d\n",len);
    
    for(int i=0;i<len;i++){
        //tradu[i]=97;
        printf("%c",tradu[i]);   
    }printf("\n");

}



void normaltolok(){
    //printf("");
    char str1[10000];
    printf("digite a frase com apenas caracteres \ndo alfabeto ingles e utilize so \npontos para os espaços:\n");
    fflush(stdin);
    scanf(" %s",str1);   
    int len;
    len = strlen(str1);
    char str2[len][30];
    char letterStr[27][40];
    
    //defenindo as letras
    strcpy(letterStr[0],"ok.lol.");//a
    strcpy(letterStr[1],"lol.ok.ok.ok.");//b
    strcpy(letterStr[2],"lol.ok.lol.ok.");//c
    strcpy(letterStr[3],"lol.ok.ok.");//d
    strcpy(letterStr[4],"ok.");//e
    strcpy(letterStr[5],"ok.ok.lol.ok.");//f
    strcpy(letterStr[6],"lol.lol.ok.");//g
    strcpy(letterStr[7],"ok.ok.ok.ok.");//h
    strcpy(letterStr[8],"ok.ok.");//i
    strcpy(letterStr[9],"ok.lol.lol.lol.");//j
    strcpy(letterStr[10],"lol.ok.lol.");//k
    strcpy(letterStr[11],"ok.lol.ok.ok.");//l
    strcpy(letterStr[12],"lol.lol.");//m
    strcpy(letterStr[13],"lol.ok");//n
    strcpy(letterStr[14],"lol.lol.lol.");//o
    strcpy(letterStr[15],"ok.lol.lol.ok.");//p
    strcpy(letterStr[16],"lol.lol.ok.lol.");//q
    strcpy(letterStr[17],"ok.lol.ok.");//r
    strcpy(letterStr[18],"ok.ok.ok.");//s
    strcpy(letterStr[19],"lol.");//t
    strcpy(letterStr[20],"ok.ok.lol.");//u
    strcpy(letterStr[21],"ok.ok.ok.lol.");//v
    strcpy(letterStr[22],"ok.lol.lol.");//w
    strcpy(letterStr[23],"lol.ok.ok.lol.");//x
    strcpy(letterStr[24],"lol.ok.lol.lol.");//y
    strcpy(letterStr[25],"lol.lol.ok.ok.");//z
    

    for(int l=0;l<len;l++){
        str1[l]=tolower(str1[l]);
    }
    char letter;
    for (int i=0;i<len;i++)
    {
        if(str1[i]=='.'){
            strcpy(str2[i],"_");
        }else{
            for(int c=97;c<123;c++){
                letter=c;
                if(str1[i]==letter)strcpy(str2[i],letterStr[c-97]);
                
            }
        }
        


    }
    printf("frase digitada = %s  \nlargura = %d",str1,len);
    printf("\n");
    for(int i=0;i<len;i++){
        printf("%s ",str2[i]);
    }
    
}

int main ()
{
    printf("deseja coverter normal para lok ou lok para normal?\n1 - normal->lok\n2 - lok->normal\n");
    int select=0;
    fflush(stdin);
    scanf("%d",&select);
    if (select==1)normaltolok(); 
    else if (select==2)loktonormal();
    else printf("1 ou 2 para alguma merda acontecer");
    printf("\n");
    return 0;
}
