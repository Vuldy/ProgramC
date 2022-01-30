#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main (){
    char file[]="C:/Users/HP/Downloads/UASREE.pdf"; // Masukan directory file di sini
    FILE *refer = fopen(file, "r");

    unsigned char temp[3];
    fread(temp, 3, 1, refer);

    if (temp[0]==0xff && temp[1]==0xd8 && temp[2]==0xff){
        printf("\nFile adalah sebuah JPG");
    }
    else if (temp[0]==0x25 && temp[1]==0x50 && temp[2]==0x44){
        printf("\nFile adalah sebuah PDF");
    }
    else{
        printf("\nFormat file tidak diketahui");
    }
    return 0;
}

