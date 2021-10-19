#include <stdio.h>
#include <string.h>

struct Obat {
   char  Nama[50];
   int   Harga;
};

int main( ) {

   struct Obat Obat1;
   struct Obat Obat2;
   struct Obat Obat3;
   struct Obat Obat4;
   struct Obat Obat5;
   struct Obat Obat6;
   struct Obat Obat7;
   struct Obat Obat8;
   struct Obat Obat9;
   struct Obat Obat10;

   /* Harga Obat 1*/
   strcpy( Obat1.Nama, "Panadol");
   Obat1.Harga = 11450;

   /* Harga Obat 2*/
   strcpy( Obat2.Nama, "Diatabs");
   Obat2.Harga = 3500;

   strcpy( Obat3.Nama, "komixHerbal");
   Obat3.Harga = 2000;

   strcpy( Obat4.Nama, "Mylanta");
   Obat4.Harga = 17000;

   strcpy( Obat5.Nama, "Promag");
   Obat5.Harga = 8000;

   strcpy( Obat6.Nama, "Ibuprofen");
   Obat6.Harga = 8000;

   strcpy( Obat7.Nama, "Mixagrip");
   Obat7.Harga = 3000;

   strcpy( Obat8.Nama, "Bodrex");
   Obat8.Harga = 4000;

   strcpy( Obat9.Nama, "Vitacimin");
   Obat9.Harga = 20000;

   strcpy( Obat10.Nama, "Redoxon");
   Obat10.Harga = 50000;


   printf("===============================\n");
   printf("SELAMAT DATANG DI APOTEK SEHAT SENTOSA ABADI \n");
   printf("SILAKAN PILIH OBAT ANDA \n");
   printf("===============================\n");
   printf("1. %s\n", Obat1.Nama);
   printf("2. %s\n",Obat2.Nama);
   printf("3. %s\n", Obat3.Nama);
   printf("4. %s\n",Obat4.Nama);
   printf("5. %s\n", Obat5.Nama);
   printf("6. %s\n",Obat6.Nama);
   printf("7. %s\n", Obat7.Nama);
   printf("8. %s\n",Obat8.Nama);
   printf("9. %s\n", Obat9.Nama);
   printf("10. %s\n",Obat10.Nama);
   printf("0. EXIT %s\n");

   int exit = 0;
   int Total = 0;
   int Banyak;
   while(exit==0){
    int Pilihan;
    printf("Masukkan Kode Barang\n");
    scanf("%d",&Pilihan);
    if(Pilihan==0){
        printf("Total Belanjaannya Adalah : %d",Total);
        break;
    }
    else{
        switch(Pilihan)
        {
            case 1:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (Obat1.Harga*Banyak)+Total;
                continue;
            case 2:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (Obat2.Harga*Banyak)+Total;
                continue;
            case 3:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (Obat3.Harga*Banyak)+Total;
                continue;
            case 4:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (Obat4.Harga*Banyak)+Total;
                continue;
            case 5:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (Obat5.Harga*Banyak)+Total;
                continue;
            case 6:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (Obat6.Harga*Banyak)+Total;
                continue;
            case 7:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (Obat7.Harga*Banyak)+Total;
                continue;
            case 8:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (Obat8.Harga*Banyak)+Total;
                continue;
            case 9:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (Obat9.Harga*Banyak)+Total;
                continue;
            case 10:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (Obat10.Harga*Banyak)+Total;
                continue;
        }
      continue;
    };
   }

   return 0;
}
