#include<stdio.h>

// Program menghitung tertunda dan selesai proses dengan algoritma Round Robin

int main() 
{
    int i, x, total=0, proses, quantum, counter=0;
    int waktu_tunggu, waktu_dilayani2, waktu_datang[10], durasi_layan[10],temp[10];

// Meminta proses yang akan dihitung
    printf("Jumlah Proses : ");
    scanf("%d", &proses);

// Menyimpan jumlah proses agar dapat menghentikan program pada prosedur di bawah
    x=proses;

// Meminta waktu dan durasi proses, serta menyimpan durasi pada variabel temp agar dapat dimanipulasi
    for(i=0;i<proses;i++){
        printf("Masukkan waktu datang proses %d : ", i+1);
        scanf("%d", &waktu_datang[i]);
        printf("Masukkan durasi layanan proses %d : ", i+1);
        scanf("%d", &durasi_layan[i]);
        temp[i]=durasi_layan[i];
    }

// Meminta kuantum
    printf("Masukkan Kuantum : ");
    scanf("%d", &quantum);

// Memulai dan menghitung waktu yang dimakan proses
    for (total=0,i=0;x!=0;){
// Jika waktu yang dibutuhkan tidak melebihi kuantum, menuju proses ini
        if (temp[i]<=quantum && temp[i]>0){
            total=total+temp[i];
            counter=1; // Proses akan ter-"mark" sudah selesai
            temp[i]=0; // dan proses tidak akan diproses oleh program
        }
// Jika waktu yang dibutuhkan melebihi kuantum, menuju proses ini
        else if (temp[i]>0){
            total=total+quantum;
            temp[i]=temp[i]-quantum;
        }
// Program akan memberikan message bahwa proses sudah selesai pada waktu selesainya
        if (counter==1 && temp[i]==0){
            x--;
            printf("\nProses %d SELESAI pada detik %d", i+1, total);
            counter=0;
        }
// Karena proses belum selesai, maka akan diberikan message
        else if (temp[i]>0){
            printf("\nProses %d ditunda pada detik %d", i+1, total);
        }
// Jika sudah mencapai indeks proses terakhir, akan diulang ke antrian paling pertama
        if (i==proses-1){
            i=0;
        }
// Jika waktu datang belum melebihi total waktu, program dilanjutkan
        else if (waktu_datang[i]<=total){
            i++;
        }
        else {
            i=0;
        }
    }
    return 0;
}