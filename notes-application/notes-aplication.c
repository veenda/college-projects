#include <stdio.h>
#include <stdlib.h>

typedef struct ToDo
{
    char buffer[100];
    struct ToDo* next;
    int count;
} ToDo;

typedef ToDo todo;

todo* start = NULL;
todo *add, *temp;

// HALAMAN SAMBUTAN
void Welcome()
{
    system("cls");

    printf("\n=====================================================    ");
    printf("\n SELAMAT DATANG DI PROGRAM CATATAN KEGIATAN              ");
    printf("\n=====================================================\n\n");

    system("pause");
}

//HALAMAN DAFTAR CATATAN
void DaftarCatatan()
{
    todo* temp;
    system("cls");

    temp = start;

    if(start == NULL)
        printf("\nTidak ada catatan");

    while (temp != NULL)
    {
        printf("[%d] ", temp->count);
        puts(temp->buffer);
        fflush(stdin);
        temp = temp->next;
    }

    if(temp != NULL)
    {
        char c;
        int d;

        printf("\nIngin melihat salah satu catatan? [Y/n] : ");
        // melihat satu saja catatan
        fflush(stdin);
        scanf("%c", &c);

        if(c == 'n')
            return;

        if(c == 'Y')
        {
            printf("\nPilih salah satu catatan yang ingin dilihat.");
            scanf("%d", &d);

            system("cls");

            while (temp != NULL && temp->count != d)
            {
                temp = temp->next;
            }

            if (temp != NULL)
            {
                puts(temp->buffer);
            }

            printf("\n\n");

            system("pause");
            return;
        }

        else
        {
            printf("\n\nInput tidak valid");

            system("pause");
            return;
        }
    }

    else
    {
        printf("\n\nInput tidak valid.");
    }
    system("pause");
}

// HALAMAN MENAMBAHKAN CATATAN
void TambahCatatan()
{
    system("cls");
    char c;
    todo *add = start, *temp;

    while(1)
    {
        printf("\nIngin menambahkan catatan baru? [Y/n] : ");
        fflush(stdin);
        scanf("%c", &c);

        if(c == 'n')
            break;

        if(c == 'Y')
        {
            if(start == NULL)
            {
                system("cls");

                add = (todo*)calloc(1, sizeof(todo));
                start = add;

                printf("\nKetik catatan yang ingin ditambahkan\n\n");
                fflush(stdin);
                gets(add->buffer);

                add->count = 1;
                start->next = NULL;
            }

            else
            {
                system("cls");

                temp = (todo*)calloc(1, sizeof(todo));

                printf("\nKetik catatan yang ingin ditambahkan\n\n");
                fflush(stdin);
                gets(temp->next = NULL);

                temp->next = NULL;
                add->next = temp;
                add = add->next;
            }
            adjustcount();

            system("cls");
        }

        else
        {
            system("cls");
            printf("Input tidak valid.\n");
            system("pause");
            system("cls");
        }
    }
    printf("\n\n");
    system("pause");
}

// HALAMAN MENGGANTI CATATAN
void GantiCatatan()
{
    system("cls");

    int x;
    todo *del, *temp;

    if(start == NULL)
        printf("Tidak ada catatan.\n\n");

    else
    {
        printf("Ketik nomor catatan yang ingin diganti : ");
        scanf("%d", &x);

        del = start;
        temp = start->next;

        if(del->count == x)
        {
            start = start->next;
            free(del);

            adjustcount();
            
            system("cls");

            add = (todo*)calloc(1, sizeof(todo));
            start = add;

            printf("\nKetik catatan.\n\n");
            fflush(stdin);
            gets(add->buffer);

            add->count = 1;
            start->next = NULL;
        }

        if(temp->count == x)
        {
            del->next = temp->next;
            free(temp);

            adjustcount();

            system("cls");

            temp = (todo*)calloc(1, sizeof(todo));

            printf("\nKetik catatan.\n\n");
            fflush(stdin);
            gets(temp->next = NULL);

            temp->next = NULL;
            add->next = temp;
            add = add->next;
        }

        else
        {
            printf("Input tidak valid.");
        }
    }
    printf("\n\n");
    system("pause");
}

// HALAMAN MENGHAPUS CATATAN
void HapusCatatan()
{
    system("cls");

    int x;
    todo *del, *temp;

    if(start == NULL)
        printf("Tidak ada catatan.");
    else
    {
        printf("Ketik nomor catatan yang ingin dihapus : ");
        scanf("%d", &x);

        del = start;
        temp = start->next;

        if(del->count == x)
        {
            start = start->next;
            free(del);
            adjustcount();
        }

        if(temp->count == x)
        {
            del->next = temp->next;
            free(temp);
            adjustcount();
        }

        else
        {
            del = temp;
            temp = temp->next;
        }
    }
    printf("\n\n");
    system("pause");
}

// PENGHITUNG
void adjustcount()
{
    todo* temp;
    int i = 1;
    temp = start;

    while(temp != NULL)
    {
        temp->count = i;
        i++;
        temp = temp->next;
    }
}

int main()
{
    int pilihan;
    Welcome();

    while(1)
    {
        system("cls");

        printf("\n=====================================================    ");
        printf("\n MENU                                                    ");
        printf("\n=====================================================\n\n");

        printf("[1] Lihat catatan    \n");
        printf("[2] Tambahkan catatan\n");
        printf("[3] Ganti catatan    \n");
        printf("[4] Hapus catatan    \n");
        printf("[5] Keluar           \n");

        printf("\nInput dalam bentuk angka: ");
        scanf("%d", &pilihan);

        switch(pilihan)
        {
            case 1:
                DaftarCatatan();
                break;
            case 2:
                TambahCatatan();
                break;
            case 3:
                GantiCatatan();
                break;
            case 4:
                HapusCatatan();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Pilihan tidak valid\n\n");
                system("pause");
        }
    }
    return 0;
}
