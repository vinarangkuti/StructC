
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
		int i;
		struct data_mahasiswa{
		char nomor[10];
			char nim[10];
			char nama [50];
				char nilai;
			};
				struct data_mahasiswa data_nilai[5];
				for (i=0; i<5; i++) {
				printf("Masuikkan data dari mahasiswa");
				printf("Nomor :\n");
				scanf("%s", &data_nilai[i].nomor);
				printf("NIM: \n");
				scanf("%", &data_nilai[i].nim);
				printf("Nama: \n");
				scanf("%s", &data_nilai[i].nama);
				printf("Nilai: \n");
				scanf("%s", &data_nilai[i].nilai);

					}
	i=0;
	for (i=0; i<5; i++){
			printf("Nomor : %s\n", data_nilai[i].nomor);
			printf("NIM : %s\n", data_nilai[i].nim);