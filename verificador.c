#include <stdio.h> 

int main () {
    
    int dia,mes,ano;
    
    scanf("%d %d %d",&dia,&mes,&ano);
    if(dia<1 || dia>31){
        printf("invalida");
    }
    else{
        if(mes<1 || mes>12){
        printf("invalida");
        }
        else{
           if(ano<0){
               printf("valida");
           }
           else{
               if(ano%4==0 && (ano%100!=0) || (ano%400==0)){
                   if(mes%2==0){
                       if(mes==2){
                           if(dia>=1 && dia<=29){
                               printf("valida");
                           }
                           else{
                               printf("invalida");
                           }
                       }
                       else{
                           if(dia>=1 && dia<=30){
                               printf("valida");
                           }
                           else{
                               if(mes==8 || mes==10 || mes==12){
                                   printf("valida");
                               }
                               else{
                                    printf("invalida");
                               }
                           }
                       }
                   }
                   else{
                       if(mes==7 || mes==9 ||mes==11){
                            if(dia>=1 && dia<=30){
                                printf("valida");
                            }
                            else{
                                printf("invalida");
                            }
                       }
                       else{
                           if(dia>=1 && dia<=31){
                               printf("valida");
                           }
                           else{
                               printf("invalida");
                           }
                       }
                       
                   }
               }
               else{
                   if(mes%2==0){
                       if(mes==2){
                           if(dia>=1 && dia<=28){
                               printf("valida");
                           }
                           else{
                               printf("invalida");
                           }
                       }
                       else{
                           if(dia>=1 && dia<=30){
                               printf("valida");
                           }
                           else{
                               if(mes==8 || mes==10 || mes==12){
                                   printf("valida");
                               }
                               else{
                                    printf("invalida");
                               }
                           }
                       }
                   }
                   else{
                       if(mes==9 ||mes==11){
                            if(dia>=1 && dia<=30){
                                printf("valida");
                            }
                            else{
                                printf("invalida");
                            }
                       }
                       else{
                           if(dia>=1 && dia<=31){
                               printf("valida");
                           }
                           else{
                               printf("invalida");
                           }
                       }
                   }
               }
           }
        }
    }
    return 0;
}