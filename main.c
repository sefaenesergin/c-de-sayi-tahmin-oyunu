//Sefa Enes Ergin- Sayı tahmin oyunu.
// Tahmin oyununda in-çık söylemleri ile kullanıcı bilgilendirilir. Oyun, sonuç bilinene kadar devam eder.
#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    int rastgele;
    rastgele=rand()%100;
    printf("Tahmin oyununa hoş geldiniz. Lütfen 1-100 aralığında bir sayı giriniz.\n");
    int kullanici_girdisi = 0;
    scanf("%d", &kullanici_girdisi);
    if (rastgele==kullanici_girdisi) {
        printf("Tahmininiz Başarılı!\n");
    } else {
        printf("Tahmininiz Başarısız! \n");
        if (kullanici_girdisi>rastgele) {
            while (kullanici_girdisi>rastgele) {
                printf("Lütfen daha küçük bir sayı giriniz.\n");
                scanf("%d", &kullanici_girdisi);
            }
            
        } else  {
            while (kullanici_girdisi<rastgele) {
                printf("Lütfen daha büyük bir sayı giriniz.\n");
                scanf("%d", &kullanici_girdisi);
            }
        }
        printf("Başarılı Tahmin!");
    }
    return 0;
}
