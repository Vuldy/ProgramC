#include <stdio.h>
struct mahasiswa{
        char nama[50];
        int nim;
        int kehadiran;
    };
struct mahasiswa kelas[40];

int main(){
    int jumlah=0;
    int i;
    int count=0;
    while (jumlah<=0 || jumlah>40){
        printf("Masukan jumlah mahasiswa (Maksimal 40): \n");
        scanf("%d",&jumlah);
    }

    for(i=0;i<jumlah;++i){
        printf("Masukan nama mahasiswa : \n");
        gets(kelas[i].nama);
        scanf("%s", &kelas[i].nama);

        printf("Masukan NIM mahasiswa : \n");
        scanf("%d", &kelas[i].nim);

        printf("Masukan kehadiran mahasiswa : \n");
        scanf("%d", &kelas[i].kehadiran);
        if ((kelas[i].kehadiran)<80){
            count++;
        }
    }

    printf("Berikut nama-nama mahasiswa yang memiliki kehadiran di bawah 80 persen : \n");
    if (count>0){
        for(i=0;i<jumlah;i++){
            if ((kelas[i].kehadiran)<80){
                printf("%s , NIM : ",kelas[i].nama);
                printf("%d \n",kelas[i].nim);
                }
            }
    }
    else {
        printf("Tidak ada mahasiswa yang memiliki kehadiran di bawah 80 persen \n");
    }
    return 0;
}
