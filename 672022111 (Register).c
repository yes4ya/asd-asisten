#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char id[200];
char password[20];
void reglog(){
    int c;
        system("cls");
        printf("slmt dtg\n");
        printf("1.REG\n");
        printf("2.LOGIN\n");
        printf("pilihan anda : ");
        scanf("%d",&c);
        switch(c){
        case 1:
            reg();
            break;
        case 2:
            login();
            break;
        default:
            fflush(stdin);
            system("cls");
            printf("input salah!");
            getch();
            reglog();
        }
}
void reg(){
        char key;
        int i = 0;
        system("cls");
        printf("Input Username = ");
        scanf(" %[^\n]s", &id);

        printf("Input Password = ");
        while((key = getch())!= 13){
            if(i < 0)
                i = 0;
            if(key == 8){
                if(i == 0)
                    continue;
                else{
                    printf("\b\b");
                    i--;
                    continue;
                }
            }
            if(i == 8){
                continue;
            }
            printf("*");
            password[i] = key;
            i++;
        }
        printf("\nRegister Mantap!");
        getch();
        system("cls");
        reglog();
}
void login(){
    char nama[100];
    char pass[8];
    char key;
    while(1){
        int i = 0;
        system("cls");
        printf("Input userName = ");
        scanf(" %[^\n]s", &nama);

        printf("Input password = ");
        while((key = getch())!= 13){
            if(i < 0)
                i = 0;
            if(key == 8){
                if(i == 0)
                    continue;
                else{
                    printf("\b\b");
                    i--;
                    continue;
                }
            }
            if(i == 8){
                continue;
            }
            printf("*");
            pass[i] = key;
            i++;
        }
        pass[i]='\0';
        if(strcmp(id, nama)== 0 && strcmp(password,pass)==0)
        {
            system("cls");
            printf("==============\n");
            printf("Selamat datang\n");
            printf("==============");
            Sleep(1000);
            system("cls");
            break;
        }
        else{
            int c;
            system("cls");
            printf("incorrect password\n");
            getch();
            printf("1.silahkan kembali ke menu\n");
            printf("2.kembali ke login\n");
            printf("pilihan anda : ");
            scanf("%d",&c);
            switch (c){
            case 1:
                system("cls");
                reglog();
                break;
            case 2:
                system("cls");
                login();
                break;
            }
            sleep(2000);
        }

    }
}


int p1,p2,p3,p4;

float pi=3.14;

void menu1();

void main()
{
    int p1;
    fflush(stdin);
    system("cls");
    reglog();
    printf("------------------\n");
    printf("-TUGAS KALKULATOR-\n");
    printf("------------------\n");
    printf(" \n1. PingPoroLanSudo                   ");
    printf(" \n2. SinCosTan                         ");
    printf(" \n3. Hitung Keliling dan Luas          ");
    printf(" \n4. Hitung Akar Kuadrat               ");
    printf(" \n5. Keluar                            ");
    printf(" \nMasukkan Pilihan : ");
    scanf ("%d", &p1);
    switch(p1){
    case 1:
        system("cls");
        menu1();
        break;
    case 2:
        system("cls");
        menu2();
        break;
    case 3:
        system("cls");
        menu3();
        break;
    case 4:
        system("cls");
        kuadrat();
        break;
    case 5:
        system("cls");
        exit(0);
        break;
    default:
        printf("Menu Tidak Ada\n");
        // printf("Press ENTER to continue...");
        system("pause");
        main();
        break;
    }
}
void menu1()
{
    fflush(stdin);
    system ("cls");
    printf("--------------------\n");
    printf("-Ping Poro Lan Sudo-\n");
    printf("--------------------\n");
    printf(" \n1.Perkalian                ");
    printf(" \n2.Pembagian                ");
    printf(" \n3.Penjumlahan              ");
    printf(" \n4.Pengurangan              ");
    printf(" \n5.Return Menu Utama        ");
    printf(" \nMasukan Pilihan : ");
    scanf("%d",&p2);
    switch(p2)
    {
    case 1:
        system("cls");
        perkalian();
        break;
    case 2:
        system("cls");
        pembagian();
        break;
    case 3:
        system("cls");
        penjumlahan();
        break;
    case 4:
        system("cls");
        pengurangan();
        break;
    case 5:
        system("cls");
        main();
        break;
    default:
        printf("Menu Tidak Ada\n");
        // printf("Press ENTER to continue...");
        system("pause");
        menu1();
        break;
    }
}
void menu2()
{
    fflush(stdin);
    system ("cls");
        printf("-----------\n");
        printf("-SinCosTan-\n");
        printf("-----------\n");
        printf(" \n1. Sinus            ");
        printf(" \n2. Cosinus          ");
        printf(" \n3. Tangen           ");
        printf(" \n4. Return Menu Utama");
        printf(" \nMasukan Pilihan : ");
        scanf("%d",&p3);
        switch(p3)
    {
    case 1:
        system("cls");
        sinus();
        break;
    case 2:
        system("cls");
        cosinus();
        break;
    case 3:
        system("cls");
        tangen();
        break;
    case 4:
        system("cls");
        main();
        break;
    default:
        printf("Menu Tidak Ada\n");
        //printf("Press ENTER to continue...");
        system("pause");
        menu2(0);
    }
}
void menu3()
{
    fflush(stdin);
    system("cls");
    printf("----------------------\n");
    printf("-Keliling Luas Volume-\n");
    printf("----------------------\n");
    printf(" \n1. Hitung Keliling Bangun Datar  ");
    printf(" \n2. Hitung Luas Bangun Datar      ");
    printf(" \n3. Hitung Volume Bangun Ruang    ");
    printf(" \n4. Return Menu Utama             ");
    printf(" \nMasukan Pilihan : ");
    scanf("%d",&p4);
    switch(p4)
    {
    case 1:
        system("cls");
        menu4();
        break;
    case 2:
        system("cls");
        menu5();
        break;
    case 3:
        system("cls");
        menu6();
        break;
    case 4:
        main();
        break;
    default:
        printf("Menu Tidak Ada\n");
        //printf("Press ENTER to continue...");
        system("pause");
        menu3();
    }
}
void perkalian()
{
    system("cls");
    float a1,a2,h;
    printf("Masukan Angka Pertama : ");
    scanf("%f",&a1);
    printf("Masukan Angka Kedua   : ");
    scanf("%f",&a2);
    h=a1*a2;
    printf("Hasil Perkalian dari %.2f * %.2f adalah %.2f\n",a1,a2,h);
    printf("Tekan Tombol Apapun  \n");
    getch();
    kali();
}
    void kali()
    {
        system("cls");
        int kal;
        printf("=======                                          \n");
        printf("ULANGI?                                          \n");
        printf("=======                                          \n");
        printf("Tekan 1 jika ingin mengulang Menghitung          \n");
        printf("Tekan 0 jika ingin kembali ke menu               \n");
        printf("=======                                          \n");
        printf("Pilih Opsi : ");
        scanf("%d",&kal);
        switch(kal)
    {
    case 1:
        perkalian();
        break;
    case 0:
        menu1();
        break;
    default:
        system("cls");
        printf("INPUT SALAH        \n");
        printf("Tekan Tombol Apapun\n");
        getch();
        kali();
    }
}
    void pembagian()
{
    system ("cls");
    float a1,a2,h;
    printf("Masukan Angka Pertama : ");
    scanf("%f",&a1);
    printf("Masukan Angka Kedua   : ");
    scanf("%f",&a2);
    h=a1/a2;
    printf("Hasil Pembagian dari %.2f \ %.2f adalah %.2f\n", a1,a2,h);
    printf("Tekan Tombol Apapun    ");
    getch();
    bagi();
}
    void bagi()
    {
        system("cls");
        int bag;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&bag);
        switch(bag)
        {
        case 1:
            pembagian();
            break;
        case 0:
            menu1();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun\n");
            getch();
            bagi();
        }
    }
void penjumlahan()
{
        system ("cls");
        int a1,a2,h;
        printf("Masukan Angka Pertama : ");
        scanf("%d",&a1);
        printf("Masukan Angka Kedua   : ");
        scanf("%d",&a2);
        h=a1+a2;
        printf("Hasil Penjumlahan dari %d + %d adalah %d\n", a1, a2, h);
        printf("Tekan Tombol Apapun    ");
        getch();
        nambah();
}
    void nambah()
{
        system("cls");
        int pnambah;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&pnambah);
        switch(pnambah)
    {
        case 1:
            penjumlahan();
            break;
        case 0:
            menu1();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun \n");
            getch();
            nambah();
    }
}
void pengurangan()
    {
        system ("cls");
        int a1,a2,h;
        printf("Masukan Angka Pertama : ");
        scanf("%d",&a1);
        printf("Masukan Angka Kedua   : ");
        scanf("%d",&a2);
        h=a1-a2;
        printf("Hasil Pengurangan dari %d - %d adalah %d\n", a1, a2, h);
        printf("Tekan Tombol Apapun    ");
        getch();
        ngurang();
    }

    void ngurang()
{

    system("cls");
        int pnambah;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&pnambah);
        switch(pnambah)
    {
        case 1:
            pengurangan();
            break;
        case 0:
            menu1();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun \n");
            getch();
            ngurang();
    }
}
void sinus()
{
    system ("cls");
        double x,sin_x;
        printf("Masukan Derajat Sinus :");
        scanf("%lf",&x);
        sin_x = sin(x);
        printf("Hasil Sinus adalah sin(%lf) = %lf\n",x,sin_x);
        printf("Tekan Tombol Apapun   ");
        getch();
        sini();
}
    void sini()
{
    system("cls");
        int sins;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&sins);
        switch(sins)
        {
            case 1:
            sinus();
            break;
        case 0:
            menu2();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun\n");
            getch();
            sini();
        }
}
    void cosinus()
{
    system ("cls");
        double x,cos_x;
        printf("Masukan Derajat Cosinus :");
        scanf("%lf",&x);
        cos_x = cos(x);
        printf("Hasil Cosinus adalah Cos(%lf) = %lf,x\n",x,cos_x);
        printf("Tekan Tombol Apapun   ");
        getch();
        cosin();
}
    void cosin()
    {
        system("cls");
        int csin;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&csin);
        switch(csin)
        {
            case 1:
            cosinus();
            break;
        case 0:
            menu2();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun\n");
            getch();
            cosin();
    }
}
     void tangen()
    {
        system("cls");
        double x,tan_x;
        printf("Masukan Derajat tangen :");
        scanf("%lf",&x);
        tan_x = tan(x);
        printf("Hasil Tangen adalah tan(%lf) = %lf,x\n",x,tan_x);
        printf("Tekan Tombol Apapun   ");
        getch();
        tang();
}
void tang()
    {
        system("cls");
        int kangen;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&kangen);
        switch(kangen)
        {
            case 1:
            tangen();
            break;
        case 0:
            menu2();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun\n");
            getch();
            tangen();
        }
}
void kuadrat()
{
        system("cls");
        float angka,hasil;
        printf("Masukan Bilangan Akar :");
        scanf("%f",&angka);
        hasil = sqrt(angka);
        printf("Hasil Akar Kuadrat dari %.2f adalah %2.f\n",angka,hasil);
        printf("Tekan Tombol Apapun   ");
        getch();
        kuad();
}
    void kuad()
    {
        system("cls");
        int kuadr;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&kuadr);
        switch(kuadr)
    {
        case 1:
            kuadrat();
            break;
        case 0:
            main();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun\n");
            getch();
            kuad();
    }
}
    void menu4()
{
    fflush(stdin);
    int p5;
    system("cls");
    printf("-----------------------\n");
    printf("-Keliling Bangun Datar-\n");
    printf("-----------------------\n");
    printf(" \n1. Keliling Persegi");
    printf(" \n2. Keliling Trapesium");
    printf(" \n3. Keliling Layang-Layang");
    printf(" \n4. Keliling Lingkaran");
    printf(" \n5. Kembali Ke Menu Sebelumnya");
    printf(" \nMasukan Pilihan :");
    scanf("%d",&p5);
    switch(p5)
    {
         case 1:
            system("cls");
            persegi();
            break;
        case 2:
            system("cls");
            trapesium();
            break;
        case 3:
            system("cls");
            layang();
            break;
        case 4:
            system("cls");
            lingkaran();
            break;
        case 5:
            system("cls");
            menu3();
            break;
        default:
            printf("Menu Tidak Ada\n");
            printf("Press ENTER to continue...");
            system("pause");
            main(0);
    }
}
void persegi()
{
    system("cls");
    float sisi, keliling;
    printf("Masukkan Panjang Sisi: ");
    scanf("%f", &sisi);
    keliling = 4 * sisi;
    printf("Keliling Persegi adalah %.2f\n", keliling);
    printf("Tekan Tombol Apapun ");
    getch();
    kpersegi();
}
    void kpersegi()
    {
    system("cls");
    int kelper;
    printf("-------------\n");
    printf("-MAU ULANGI?-\n");
    printf("-------------\n");
    printf("Tekan 1 jika ingin mengulang Menghitung\n");
    printf("Tekan 0 jika ingin kembali ke menu\n");
    printf("--------------\n");
    printf("Pilih Opsi : ");
    scanf("%d",&kelper);
    switch(kelper)
    {
    case 1:
        persegi();
        break;
    case 0:
        menu4();
        break;
    default:
        system("cls");
        printf("INPUT SALAH\n         ");
        printf("Tekan Tombol Apapun\n");
        getch();
        kpersegi();
    }
}
    void trapesium()
{
    system("cls");
    float s1, s2, s3, s4, keliling;
    printf("Masukkan panjang sisi pertama : ");
    scanf("%f", &s1);
    printf("Masukkan panjang sisi kedua   : ");
    scanf("%f", &s2);
    printf("Masukkan panjang sisi ketiga  : ");
    scanf("%f", &s3);
    printf("Masukkan panjang sisi keempat : ");
    scanf("%f", &s4);
    keliling = s1 + s2 + s3 + s4;
    printf("Keliling trapesium adalah %.2f\n", keliling);
    printf("Tekan Tombol Apapun            ");
    getch();
    ktrapesium();
}
    void ktrapesium()
    {
        system("cls");
        int keltra;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&keltra);
        switch(keltra)
    {
        case 1:
            trapesium();
            break;
        case 0:
            menu4();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun\n");
            getch();
            ktrapesium();
        }
    }
    void layang()
    {
        system("cls");
        float sisi_a, sisi_b, keliling;
        printf("Masukkan panjang diagonal pertama : ");
        scanf("%f", &sisi_a);
        printf("Masukkan panjang diagonal kedua   : ");
        scanf("%f", &sisi_b);
        keliling = 2 * (sisi_a + sisi_b);
        printf("Keliling layang-layang adalah %.2f\n", keliling);
        printf("Tekan Tombol Apapun                ");
        getch();
        klay();
    }
        void klay()
        {
        system("cls");
        int klayang;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&klayang);
        switch(klayang)
    {
        case 1:
            layang();
            break;
        case 0:
            menu4();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun \n");
            getch();
            klay();
    }
}
    void lingkaran()
{
     system("cls");
        float jari_jari, keliling;
        const float phi = 3.14;
        printf("Masukkan panjang jari-jari : ");
        scanf("%f", &jari_jari);
        keliling = 2 * phi * jari_jari;
        printf("Keliling lingkaran adalah %.2f\n", keliling);
        printf("Tekan Tombol Apapun         ");
        getch();
        klingkaran();
}
    void klingkaran()
    {
        system("cls");
        int kellingkaran;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&kellingkaran);
        switch(kellingkaran)
    {
        case 1:
            lingkaran();
            break;
        case 0:
            menu4();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun \n");
            getch();
            klingkaran();
    }
}
void menu5()
{
    fflush(stdin);
    int p6;
    system("cls");
    printf("-------------------\n");
    printf("-Luas Bangun Datar-\n");
    printf("-------------------\n");
    printf(" \n1. Luas Persegi                   ");
    printf(" \n2. Luas Trapesium                 ");
    printf(" \n3. Luas Layang-Layang             ");
    printf(" \n4. Luas Lingkaran                 ");
    printf(" \n5. Kembali Ke Menu Sebelumnya     ");
    printf(" \nMasukan Pilihan : ");
    scanf("%d",&p6);
    switch (p6)
    {
    case 1:
        system("cls");
        luaspersegi();
        break;
    case 2:
        system("cls");
        luastrapesium();
        break;
    case 3:
        system("cls");
        luaslayangan();
        break;
    case 4:
        system("cls");
        luaslingkaran();
        break;
    case 5:
        system("cls");
        menu3();
        break;
    default:
        printf("Menu Tidak Ada\n");
        printf("Press ENTER to continue...");
        system("pause");
        main(0);
    }
}
void luaspersegi()
{
    system("cls");
    float sisi, luas;
    printf("Masukkan panjang sisi : ");
    scanf("%f", &sisi);
    luas = sisi * sisi;
    printf("Luas persegi adalah %.2f\n", luas);
    printf("Tekan Tombol Apapun    ");
    getch();
    luluper();
}
void luluper()
    {
        system("cls");
        int luper;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&luper);
        switch(luper)
    {
        case 1:
            luaspersegi();
            break;
        case 0:
            menu5();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun \n");
            getch();
            luluper();
    }
}
void luastrapesium()
{
    system("cls");
        float alas1, alas2, tinggi, luas;
        printf("Masukkan panjang alas bawah : ");
        scanf("%f", &alas1);
        printf("Masukkan panjang alas atas  : ");
        scanf("%f", &alas2);
        printf("Masukkan panjang tinggi     : ");
        scanf("%f", &tinggi);
        luas = 0.5 * (alas1 + alas2) * tinggi;
        printf("Luas trapesium adalah %.2f\n", luas);
        printf("Tekan Tombol Apapun          ");
        getch();
        lulutra();
}
    void lulutra()
    {
        system("cls");
        int lutra;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&lutra);
        switch(lutra)
    {
        case 1:
            luastrapesium();
            break;
        case 0:
            menu5();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun \n");
            getch();
            lulutra();
    }
}
void luaslayangan()
{
    system("cls");
    float diagonal1, diagonal2, luas;
    printf("Masukkan panjang diagonal pertama: ");
    scanf("%f", &diagonal1);
    printf("Masukkan panjang diagonal kedua: ");
    scanf("%f", &diagonal2);
    luas = 0.5 * diagonal1 * diagonal2;
    printf("Luas layang-layang adalah %.2f\n", luas);
    printf("Tekan Tombol Apapun    ");
    getch();
    lulay();
}
    void lulay()
    {
        system("cls");
        int lululay;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&lululay);
        switch(lululay)
    {
        case 1:
            luaslayangan();
            break;
        case 0:
            menu5();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun \n");
            getch();
            lulay();
    }
}
void luaslingkaran()
{
    system("cls");
    float jari_jari, luas;
    const float phi = 3.14;
    printf("Masukkan panjang jari-jari : ");
    scanf("%f", &jari_jari);
    luas = phi * jari_jari * jari_jari;
    printf("Luas lingkaran adalah %.2f\n", luas);
    printf("Tekan Tombol Apapun         ");
    getch();
    luling();
}
 void luling()
 {
     system("cls");
        int lululing;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&lululing);
        switch(lululing)
    {
        case 1:
            luaslingkaran();
            break;
        case 0:
            menu5();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun \n");
            getch();
            luling();
    }
}
void menu6()
{
    fflush(stdin);
    int p7;
    system("cls");
    printf("---------------------\n");
    printf("-Volume Bangun Ruang-\n");
    printf("---------------------\n");
    printf(" \n1. Volume Kubus                   ");
    printf(" \n2. Volume Prisma                  ");
    printf(" \n3. Volume Limas                   ");
    printf(" \n4. Volume Bola                    ");
    printf(" \n5. Kembali Ke Menu Sebelumnya     ");
    printf(" \nMasukan Pilihan : ");
    scanf("%d",&p7);
    switch(p7)
    {
    case 1:
        system("cls");
        volkubus();
        break;
    case 2:
        system("cls");
        volprisma();
        break;
    case 3:
        system("cls");
        vollimas();
        break;
    case 4:
        system("cls");
        volbola();
        break;
    case 5:
        system("cls");
        menu3();
        break;
    default:
        printf("Menu Tidak Ada\n");
        printf("Press ENTER to continue...");
        system("pause");
        main(0);
    }
}
void volkubus()
{
    system("cls");
    float sisi, volume;
    printf("Masukkan panjang sisi kubus : ");
    scanf("%f", &sisi);
    volume = sisi * sisi * sisi;
    printf("Volume kubus adalah %.2f\n", volume);
    printf("Tekan Tombol Apapun          ");
    getch();
    volkub();
}
    void volkub()
    {
        system("cls");
        int volkubs;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&volkubs);
        switch(volkubs)
    {
        case 1:
            volkubus();
            break;
        case 0:
            menu6();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun \n");
            getch();
            volkub();
    }
}
void volprisma()
{
    system("cls");
    float sisi_prs, alas_sgt_prs, tinggi_sgt_prs, jari_prs, diam_prs, tinggi_prs;
    printf("Masukkan Sisi Persegi        : ");
    scanf("%f", &sisi_prs);
    printf("Masukkan Lebar Alas Segitiga : ");
    scanf("%f", &alas_sgt_prs);
    printf("Masukkan Tinggi Segitiga     : ");
    scanf("%f", &tinggi_sgt_prs);
    printf("Masukkan Jari-Jari Lingkaran : ");
    scanf("%f", &jari_prs);
    printf("Masukkan Diameter Lingkaran  : ");
    scanf("%f", &diam_prs);
    printf("Masukkan Tinggi Prisma       : ");
    scanf("%f", &tinggi_prs);
    printf("Volume Prisma Persegi Adalah                 : %.2f\n", pow(sisi_prs, 2) * tinggi_prs);
    printf("Volume Prisma Segitiga Adalah                : %.2f\n", 0.5 * alas_sgt_prs * tinggi_sgt_prs * tinggi_prs);
    printf("Volume Silinder Berdasarkan Jari-jari Adalah : %.2f\n", pi * pow(jari_prs, 2) * tinggi_prs);
    printf("Volume Silinder Berdasarkan Diameter Adalah  : %.2f\n", pi * pow(diam_prs / 2, 2) * tinggi_prs);
    getch();
    volpris();
}
    void volpris()
    {
        system("cls");
        int volprism;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&volprism);
        switch(volprism)
    {
        case 1:
            volprisma();
            break;
        case 0:
            menu6();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun \n");
            getch();
            volpris();
    }
}
void vollimas()
{
    system("cls");
    float sisi_lim, alas_sgt_lim, tinggi_sgt_lim, jari_lim, diam_lim, tinggi_lim; // val limas
    printf("Masukkan Sisi Persegi        : ");
    scanf("%f", &sisi_lim);
    printf("Masukkan Lebar Alas Segitiga : ");
    scanf("%f", &alas_sgt_lim);
    printf("Masukkan Tinggi Segitiga     : ");
    scanf("%f", &tinggi_sgt_lim);
    printf("Masukkan Jari-jari Lingkaran : ");
    scanf("%f", &jari_lim);
    printf("Masukkan Diameter Lingkaran  : ");
    scanf("%f", &diam_lim);
    printf("Masukkan Tinggi Limas        : ");
    scanf("%f", &tinggi_lim);
    printf("Volume Limas Persegi Adalah                        : %.2f\n", 1.0 / 3.0 * pow(sisi_lim, 2) * tinggi_lim);
    printf("Volume Limas Segitiga Adalah                       : %.2f\n", 1.0 / 3.0 * 0.5 * alas_sgt_lim * tinggi_sgt_lim * tinggi_lim);
    printf("Volume Limas Silinder Berdasarkan Jari-jari Adalah : %.2f\n", 1.0 / 3.0 * pi * pow(jari_lim, 2) * tinggi_lim);
    printf("Volume Limas Silinder Berdasarkan Diameter Adalah  : %.2f\n", 1.0 / 3.0 * pi * pow(diam_lim / 2, 2) * tinggi_lim);
        getch();
        vollim();
}
    void vollim()
    {
        system("cls");
        int vollims;
        printf("=======                                          \n");
        printf("ULANGI?                                          \n");
        printf("=======                                          \n");
        printf("Tekan 1 jika ingin mengulang Menghitung          \n");
        printf("Tekan 0 jika ingin kembali ke menu               \n");
        printf("=======                                          \n");
        printf("Pilih Opsi : ");
        scanf("%d",&vollims);
        switch(vollims)
    {
        case 1:
            vollimas();
            break;
        case 0:
            menu6();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun \n");
            getch();
            vollim();
    }
}
void volbola()
{
    system("cls");
        float diameter, jari_jari, volume, volumediameter;
        const float phi = 3.14;
        printf("Masukkan panjang jari-jari bola: ");
        scanf("%f", &jari_jari);
        printf("Masukkan panjang diameter bola: ");
        scanf("%f", &diameter);
        volume  = (4.0 / 3) * phi * jari_jari * jari_jari * jari_jari;
        volumediameter = (4.0 / 3) * phi * (diameter / 2) * (diameter / 2) * (diameter/ 2);
        printf("Volume bola (jari-jari) adalah %.2f\n", volume);
        printf("Volume bola (diameter) adalah %.2f\n", volumediameter);
        printf("Tekan Tombol Apapun             ");
        getch();
        vobol();
}
    void vobol()
    {
        system("cls");
        int vobola;
        printf("-------------\n");
        printf("-MAU ULANGI?-\n");
        printf("-------------\n");
        printf("Tekan 1 jika ingin mengulang Menghitung\n");
        printf("Tekan 0 jika ingin kembali ke menu\n");
        printf("--------------\n");
        printf("Pilih Opsi : ");
        scanf("%d",&vobola);
        switch(vobola)
    {
        case 1:
            volbola();
            break;
        case 0:
            menu6();
            break;
        default:
            system("cls");
            printf("INPUT SALAH\n         ");
            printf("Tekan Tombol Apapun \n");
            getch();
            vobol();
    }
}
