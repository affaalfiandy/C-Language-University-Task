#include <stdio.h>
#include <string.h>

struct MakananPembuka {
   char  Nama[50];
   int   Harga;
};

struct MakananUtama {
   char  Nama[50];
   int   Harga;
};

struct MakananPenutup {
   char  Nama[50];
   int   Harga;
};

int main( ) {
   struct MakananPembuka MakananPembuka1;
   struct MakananPembuka MakananPembuka2;
   struct MakananPembuka MakananPembuka3;

   struct MakananUtama MakananUtama1;
   struct MakananUtama MakananUtama2;
   struct MakananUtama MakananUtama3;

   struct MakananPenutup MakananPenutup1;
   struct MakananPenutup MakananPenutup2;
   struct MakananPenutup MakananPenutup3;

   /* Harga Makanan Pembuka*/
   strcpy( MakananPembuka1.Nama, "Batagor");
   MakananPembuka1.Harga = 30000;


   strcpy( MakananPembuka2.Nama, "Siomay");
   MakananPembuka2.Harga = 40000;

   strcpy( MakananPembuka3.Nama, "Pastel");
   MakananPembuka3.Harga = 30000;

   /* Harga makanan utama */
   strcpy( MakananUtama1.Nama, "Nasi Goreng Seafood");
   MakananUtama1.Harga = 60000;

   strcpy( MakananUtama2.Nama, "Sate Ayam");
   MakananUtama2.Harga = 40000;

   strcpy( MakananUtama3.Nama, "Sop Buntut");
   MakananUtama3.Harga = 80000;

   /* Harga makanan penutup */
   strcpy( MakananPenutup1.Nama, "Es Campur Durian");
   MakananUtama1.Harga = 25000;

   strcpy( MakananPenutup2.Nama, "Kue Cucur");
   MakananUtama2.Harga = 15000;

   strcpy( MakananPenutup3.Nama, "Nagasari");
   MakananUtama3.Harga = 15000;



   printf("===============================\n");
   printf("SELAMAT DATANG DI RESTORAN LEZAT MANTAP \n");
   printf("SILAKAN PILIH MAKANAN ANDA \n");
   printf("===============================\n");
   printf("Makanan Pembuka \n");
   printf("1. %s\n", MakananPembuka1.Nama);
   printf("2. %s\n",MakananPembuka2.Nama);
   printf("3. %s\n", MakananPembuka3.Nama);
   printf("\n");
   printf("Makanan Utama \n");
   printf("4. %s\n",MakananUtama1.Nama);
   printf("5. %s\n", MakananUtama2.Nama);
   printf("6. %s\n",MakananUtama3.Nama);
   printf("\n");
   printf("Makanan Penutup \n");
   printf("7. %s\n", MakananPenutup1.Nama);
   printf("8. %s\n",MakananPenutup2.Nama);
   printf("9. %s\n", MakananPenutup3.Nama);
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
                Total = (MakananPembuka1.Harga*Banyak)+Total;
                continue;
            case 2:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (MakananPembuka2.Harga*Banyak)+Total;
                continue;
            case 3:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (MakananPembuka3.Harga*Banyak)+Total;
                continue;
            case 4:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (MakananUtama1.Harga*Banyak)+Total;
                continue;
            case 5:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (MakananUtama2.Harga*Banyak)+Total;
                continue;
            case 6:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (MakananUtama3.Harga*Banyak)+Total;
                continue;
            case 7:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (MakananPenutup1.Harga*Banyak)+Total;
                continue;
            case 8:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (MakananPenutup2.Harga*Banyak)+Total;
                continue;
            case 9:
                printf("Masukkan jumlah barang \n");
                scanf("%d",&Banyak);
                Total = (MakananPenutup3.Harga*Banyak)+Total;
                continue;
        }
      continue;
    };
   }

   return 0;
}
