#include <stdio.h>
#include <string.h>

int main() {

    char NIM[10], name[10];
    int UTS, UAS, nilaiAkhir;

    printf("Masukkan NIM anda: \n");
    scanf("%s", NIM);

    printf("Masukkan Nama anda: \n");
    scanf("%s", name);

    printf("Masukkan nilai UTS anda: \n");
    scanf("%d", &UTS);

    printf("Masukkan nilai UAS anda: \n");
    scanf("%d", &UAS);

    printf("Masukkan nilai nilaiAkhir anda: \n");
    scanf("%d", &nilaiAkhir);

    printf("\n=== Data Mahasiswa ===\n");
    printf("NIM         : %s\n", NIM);
    printf("Nama        : %s\n", name);
    printf("Nilai UTS   : %d\n", UTS);
    printf("Nilai UAS   : %d\n", UAS);
    printf("Nilai Akhir : %d\n", nilaiAkhir);

    return 0;
}
