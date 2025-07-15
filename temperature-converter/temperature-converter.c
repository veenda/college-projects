#include <stdio.h>
 
int main()
{
    float R, C, F, K;
    int unit, statement;

    printf("\e[0;32m");
    printf("SELAMAT DATANG DI KALKULATOR KONVERSI SUHU\n\n");
    printf("\e[0m");

    printf("[1] Ya\n");
    printf("[0] Tidak\n");
    printf("Apakah Anda ingin melakukan konversi suhu? : ");
    scanf("%d", &statement);
    printf("\n");

    // WHILE LOOP //
    while (statement > 1 || statement < 0)             
    {
        // PENGULANGAN DENGAN WHILE LOOP //
        printf("\n\e[0;31m");
        printf("Pilihan Anda tidak benar.\n");
        printf("\e[0m");
        printf("[1] Ya\n");
        printf("[0] Tidak\n");
        printf("Apakah Anda ingin melakukan konversi suhu? : ");
        scanf("%d", &statement);
        printf("\n");
    }

    if (statement == 0)
    {
        return 0;                                       // <-- END
    }
    if (statement > 0 && statement < 1)
    {
        return 0;                                       // <-- END
    }

    if(statement == 1)
    {
        do
        {
            // MENU PILIHAN UNIT SUHU//     
            printf("[1] Reamur\n");                         // <-- case 1
            printf("[2] Celcius\n");                        // <-- case 2
            printf("[3] Farenheit\n");                      // <-- case 3
            printf("[4] Kelvin\n");                         // <-- case 4
            printf("Pilih unit yang ingin Anda konversikan: ");
            scanf("%d", &unit);
            printf("\n");

            while(unit > 4 || unit < 1)
            {
                printf("\n\e[0;31m");
                printf("Pilihan Anda tidak benar.\n");
                printf("\e[0m\n");
                printf("[1] Reamur\n");                         // <-- case 1
                printf("[2] Celcius\n");                        // <-- case 2
                printf("[3] Farenheit\n");                      // <-- case 3
                printf("[4] Kelvin\n");                         // <-- case 4
                printf("Pilih unit yang ingin Anda konversikan: ");
                scanf("%d", &unit);
                printf("\n");
            }
            
            //  SWITCH CASE //
            switch (unit)
            {
                case 1:
                    printf("\n");
                    printf("Ketik suhu dalam Reamur: ");
                    scanf("%f", &R);
                        C = (R*5/4);
                        F = (R*9/4)+32;
                        K = (R*5/4)+273;
                    printf("\e[0;32m\n");
                    printf("\nHASIL KONVERSI SUHU\n");
                    printf("\e[0m");
                    printf("Celcius   : %f\n", C);
                    printf("Farenheit : %f\n", F);
                    printf("Kelvin    : %f\n", K);
                    break;

                case 2:
                    printf("\n");
                    printf("Ketik suhu dalam Celcius: ");
                    scanf("%f", &C);
                        R = (C*4/5);
                        F = (C*9/5)+32;
                        K = (C)+273;
                    printf("\e[0;32m\n");
                    printf("\nHASIL KONVERSI SUHU\n");
                    printf("\e[0m");
                    printf("Reamur    : %f\n", R);
                    printf("Farenheit : %f\n", F);
                    printf("Kelvin    : %f\n", K);
                    break;

                case 3:
                    printf("\n");
                    printf("Ketik suhu dalam Farenheit: ");
                    scanf("%f", &F);
                        R = ((F-32)*4/9);
                        C = ((F-32)*5/9);
                        K = ((F-32)*5/9)+273;
                    printf("\e[0;32m\n");
                    printf("\nHASIL KONVERSI SUHU\n");
                    printf("\e[0m");
                    printf("Reamur  : %f\n", R);
                    printf("Celcius : %f\n", C);
                    printf("Kelvin  : %f\n", K);
                    break;

                case 4:
                    printf("\n");
                    printf("Ketik suhu dalam Kelvin: ");
                    scanf("%f", &K);
                        R = ((K-273)*4/5);
                        C = ((K-273));
                        F = ((K-273)*9/5)+32;
                    printf("\e[0;32m\n");
                    printf("\nHASIL KONVERSI SUHU\n");
                    printf("\e[0m");
                    printf("Reamur    : %f\n", R);
                    printf("Celcius   : %f\n", C);
                    printf("Farenheit : %f\n", F);
                    break;

                default:
                    printf("\n\e[0;31m");                   // <-- untuk pilihan selain 1, 2, 3, dan 4
                    printf("Pilihan Anda tidak benar.\n");
                    printf("\e[0m");
                    break;
            }

            printf("\n");
            printf("[1] Ya\n");                             // <-- 1 = kembali ke menu pilihan unit
            printf("[0] Tidak\n");                          // <-- 0 = keluar dari do ... while
            printf("Apakah Anda ingin melakukan konversi suhu lagi? : ");
            scanf("%d", &statement);
            printf("\n");

            while (statement > 1 || statement < 0)             
            {
                printf("\n\e[0;31m");
                printf("Pilihan Anda tidak benar.");
                printf("\n\e[0m");
                printf("[1] Ya\n");
                printf("[0] Tidak\n");
                printf("Apakah Anda ingin melakukan konversi suhu? : ");
                scanf("%d", &statement);
                printf("\n");
            }

        }
        while(statement == 1);
    }   
    return 0;
}

// Kesalahan penginputan statement dengan 1 > statement > 0 akan mengakibatkan return 0.
