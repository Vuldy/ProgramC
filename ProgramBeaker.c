#include <stdio.h>
int main() {
    int a=0;
    int b=0;
    int cmd;
    
    while (b!=4) {
        printf("-----------------------\n");
        printf("Program 2 Beaker\n");
        printf("-----------------------\n");
        printf("Air pada beaker A : %d\n", a);
        printf("Air pada beaker B : %d\n", b);
        printf("-----------------------\n");
        printf("List perintah\n");
        printf("1. Isi penuh A\n");
        printf("2. Isi penuh B\n");
        printf("3. Tuang A ke B\n");
        printf("4. Tuang B ke A\n");
        printf("5. Kosongkan A\n");
        printf("6. Kosongkan B\n");
        printf("Pilihan perintah : \n");
        scanf("%d", &cmd);

        if (cmd==1) {
            a=3;
        }
        else if (cmd==2) {
            b=5;
        }
        else if (cmd==3) {
            if ((a+b)>5){
                a=a+b-5;
                b=5;
            }
            else {
                b=a+b;
                a=0;
            }
        }
        else if (cmd==4) {
            if ((a+b)>3){
                b=a+b-3;
                a=3;
            }
            else {
                a=a+b;
                b=0;
            }
        }
        else if (cmd==5) {
            a=0;
        }
        else if (cmd==6) {
            b=0;
        }
        else {
            printf("Perintah tidak valid!\n");
        }
    }
    printf("Selamat, Anda berhasil!");
    return 0;
}