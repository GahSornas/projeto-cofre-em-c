#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//5 10 4 7

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a[20]={9, 4, 3, 9, 1, 2, 4, 5, 1, 1, 9, 7, 0, 5, 6, 0, 7, 8, 5};
    int n0=0, n1=0, n5=0, n7=0, n9=0;
    int i, posiInic=0, posiFinal, tentativas=0, x=0;

    while (tentativas<3){

        while (x<4){
            printf("%i %i %i %i %i\n", n0, n1, n5, n7, n9);
            printf("\nDigite a possição que deseja q o controlador vá: ");
            scanf("%i", &posiFinal);
            if (posiInic<posiFinal){
                for (i=posiInic; i<posiFinal; i++){
                    if(a[i]==0){
                        n0++;
                    }
                    else if(a[i]==1){
                        n1++;
                    }
                    else if(a[i]==5){
                        n5++;
                    }
                    else if(a[i]==7){
                        n7++;
                    }
                    else if(a[i]==9){
                        n9++;
                    }
                }
                posiInic=posiFinal;
                if (n0==0 && n1==6 && n5==2 && n7==0 && n9==3){
                    system("cls");
                    printf("\nSenha obtida: %i%i%i%i%i", n0, n1, n5, n7, n9);
                    printf("\nSenha Correta\n");
                    printf("Sistema Aberto\n");
                    exit(0);
                }
            }
            else if (posiInic>posiFinal){
                for (i=posiFinal-1; i<posiInic-1; i++){
                    if(a[i]==0){
                        n0++;
                    }
                    else if(a[i]==1){
                        n1++;
                    }
                    else if(a[i]==5){
                        n5++;
                    }
                    else if(a[i]==7){
                        n7++;
                    }
                    else if(a[i]==9){
                        n9++;
                    }
                }
                posiInic=posiFinal;
                if (n0==0 && n1==6 && n5==2 && n7==0 && n9==3){
                    system("cls");
                    printf("\nSenha obtida: %i%i%i%i%i", n0, n1, n5, n7, n9);
                    printf("\nSenha Correta\n");
                    printf("Sistema Aberto\n");
                    exit(0);
                }
            }
            x++;
        }

        system("cls");
        printf("\nSenha obtida: %i%i%i%i%i", n0, n1, n5, n7, n9);

        if (n0==0 && n1==6 && n5==2 && n7==0 && n9==3){
            printf("\nSenha Correta\n");
            printf("Sistema Aberto\n");
            exit(0);
        } else {
            printf("\nSenha Incorreta\n");
            printf("Sistema Fechado\n");
            if (tentativas<2){
                printf("Tente Novamente");
            } else {
                printf("Tentativas Esgotadas");
            }
        }

        n0=0, n1=0, n5=0, n7=0, n9=0;
        x=0;
        posiInic=0;
        tentativas++;
        puts("\n");
    }

    return 0;
}
