#include<conio.h>
#include<stdio.h>
#include <allegro5/allegro.h>
#include "allegro5/allegro_image.h"
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>
#include <Windows.h>
#include <string.h>
int main()

{
    ALLEGRO_BITMAP *resim1 = NULL;
    ALLEGRO_BITMAP *resim2 = NULL;
    ALLEGRO_FONT * font = NULL;
    ALLEGRO_DISPLAY * display;
    ALLEGRO_EVENT_QUEUE * queue = NULL;
    al_init();
    al_init_font_addon();
    al_init_ttf_addon();
    al_init_image_addon();
    al_init_primitives_addon();

    display = al_create_display(700, 480);
    al_clear_to_color(al_map_rgb(0, 0, 0));
    resim1 = al_load_bitmap("resim1.jpg");
    resim2 = al_load_bitmap("resim2.jpg");
    al_draw_bitmap(resim1, 40, 30, 0);
    al_draw_bitmap(resim2, 400, 35, 0);
    al_draw_text(al_load_ttf_font("Aller_Rg.ttf", 15, 0), al_map_rgb(255, 255, 255), 40, 350, ALLEGRO_ALIGN_LEFT, "ilk fotograf icin 1'e ikinci fotograf icin 2'ye basiniz.");

    al_flip_display();


    int N;

    do
    {
        printf("Secim yapiniz :");
        scanf(" %d",&N);
        fflush(stdin);
    }
    while(N>2 || N==0);

    if(N==1)
    {

        al_clear_to_color(al_map_rgb(255, 255, 255));
        al_draw_bitmap(resim1, 220, 55, 0);
        al_flip_display();

        int numb[8];
        int variable[8];
        int i,j, x,y, bilinmeyen_degisken;
        int g;
        bilinmeyen_degisken =0;
        char giris_sec[2];
        char cikis_sec[2];
        char cadde_baslangic_sec[4];
        char cadde_yon[4] = {'a','b','d','c'};

        char tum_yol[8] = {'t','x','y','z','a','b','d','c'};
        char cadde_yon_sec[4];
        int counter = 0;
        for(i=0; i<2; i++)
        {
            printf("\n %d. Giris noktasi giriniz : ", i+1);
            scanf("%c",&giris_sec[i]);
            fflush(stdin);

        }

        for(i=0; i<2; i++)
        {
            printf("\n %d. Cikis noktasi giriniz : ", i+1);
            scanf("%c",&cikis_sec[i]);
            fflush(stdin);
        }

        for(i=0; i<4; i++)
        {
            printf("\n %c caddesinin baslangic ve yonunu seciniz: ", cadde_yon[i]);
            scanf("%c %c",&cadde_baslangic_sec[i], &cadde_yon_sec[i]);
            fflush(stdin);
            float zx;
            if (cadde_baslangic_sec[0] == 't' && cadde_yon_sec[0] == 'x')
            {
                for (zx = 0; zx < 2; zx += 0.4)
                {
                    al_draw_arc(340, 180, 60, 3, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }
            }
            if (cadde_baslangic_sec[0] == 'x' && cadde_yon_sec[0] == 't')
            {
                for (zx = 0.2; zx > -1.5; zx -= 0.4)
                {
                    al_draw_arc(347, 177, 60, 4.5, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }

            }
            if (cadde_baslangic_sec[1] == 'x' && cadde_yon_sec[1] == 'y')
            {
                for (zx = -0.3; zx < 1.5; zx += 0.4)
                {
                    al_draw_arc(358, 178, 60, 5, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }
            }
            if (cadde_baslangic_sec[1] == 'y' && cadde_yon_sec[1] == 'x')
            {
                for (zx = 0; zx > -1.8; zx -= 0.4)
                {
                    al_draw_arc(360, 180, 60, 6.5, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }
            }


            if (cadde_baslangic_sec[2] == 'y' && cadde_yon_sec[2] == 'z')
            {
                for (zx = 1; zx < 1.7; zx += 0.4)
                {
                    al_draw_arc(356, 187, 60, 6.3, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }
            }
            if (cadde_baslangic_sec[2] == 'z' && cadde_yon_sec[2] == 'y')
            {
                for (zx = 0; zx > -2; zx -= 0.4)
                {
                    al_draw_arc(355, 195, 60, -4.7, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }
            }
            if (cadde_baslangic_sec[3] == 't' && cadde_yon_sec[3] == 'z')
            {
                for (zx = 0; zx > -2; zx -= 0.4)
                {
                    al_draw_arc(345, 195, 60, 3, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }

            }
            if (cadde_baslangic_sec[3] == 'z' && cadde_yon_sec[3] == 't')
            {
                for (zx = 0; zx < 2; zx += 0.4)
                {
                    al_draw_arc(346, 185, 60, 1.5, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }
            }
        }

        for(i=0; i<8; i++)
        {
            printf("\n %c caddesi icin ortalama arac sayisini belirtiniz: ", tum_yol[i]);
            scanf("%d", &numb[i]);
            fflush(stdin);
        }

        for(j=0; j<8; j++)
        {
            if(giris_sec[0] == tum_yol[j])
            {
                variable[0] = numb[j];
            }
        }
        for(j=0; j<8; j++)
        {
            if(giris_sec[1] == tum_yol[j])
            {
                variable[1] = numb[j];
            }

        }
        for(j=0; j<8; j++)
        {
            if(cikis_sec[0] == tum_yol[j])
            {
                variable[2] = numb[j];
            }
        }
        for(j=0; j<8; j++)
        {
            if(cikis_sec[1] == tum_yol[j])
            {
                variable[3] = numb[j];
            }
        }

        for(i=0; i<4; i++)
        {
            for(j=0; j<8; j++)
            {
                if(cadde_yon[i] == tum_yol[j])
                {
                    variable[i+4] = numb[j];
                }
            }
        }

        int d;
        d=0;
        size_t n = 1;
        int a,b,c;
        a=0;
        b=0;
        c=0;
        char ( *bilinmeyen_giris ) = (char *)malloc( n * sizeof( char ) );
        char ( *bilinmeyen_cikis ) = (char *)malloc( n * sizeof( char ) );
        char ( *bilinmeyen_cadde ) = (char *)malloc( n * sizeof( char ) );

        for(j=0; j<2; j++)
        {
            if(variable[j] == -1)
            {
                bilinmeyen_giris[d] = giris_sec[j];
                a++;
                d++;
            }
        }

        d=0;

        for(j=2; j<4; j++)
        {
            if(variable[j] == -1)
            {
                bilinmeyen_cikis[d] = cikis_sec[j-2];
                b++;
                d++;
            }
        }

        d=0;

        for(j=4; j<8; j++)
        {
            if(variable[j] == -1)
            {
                bilinmeyen_cadde[d] = cadde_yon[j-4];
                c++;
                d++;
            }
        }
        d=0;

        bilinmeyen_degisken = a+b+c;
        char bilinmeyenler[bilinmeyen_degisken];
        int matris[3][bilinmeyen_degisken+1];
        int matris1[2][bilinmeyen_degisken+1];

        int u =0;
        for(i=0; i<a; i++)
        {
            bilinmeyenler[i]=bilinmeyen_giris[i];

        }
        for(i=a; i<a+b; i++)
        {
            bilinmeyenler[i]=bilinmeyen_cikis[u];
            u++;
        }
        u=0;
        for(i=a+b; i<bilinmeyen_degisken; i++)
        {
            bilinmeyenler[i]= bilinmeyen_cadde[u];
            u++;
        }
        printf("\nBilinmeyenler");

        for(i=0; i<bilinmeyen_degisken; i++)
        {
            printf("\n%c = X%d ", bilinmeyenler[i], i+1);
        }





        for(i=0; i<3; i++)
        {
            for(j=0; j<bilinmeyen_degisken+1; j++)
            {
                matris[i][j]= 0;
            }
        }
        for(i=0; i<2; i++)
        {
            for(j=0; j<bilinmeyen_degisken+1; j++)
            {
                matris1[i][j]= 0;
            }
        }

        //IN and OUT MAIN
        for(i=0; i<2; i++)
        {
            if(variable[i] != -1)
            {
                variable[i] = - variable[i];
                matris[0][bilinmeyen_degisken]= matris[0][bilinmeyen_degisken] + variable[i];
                variable[i] = - variable[i];
            }
            for(j=0; j<a; j++)
            {
                if(bilinmeyenler[j] == giris_sec[i])
                {
                    matris[0][j] = 1;
                }
            }

        }
        for(i=0; i<2; i++)
        {
            if(variable[i+2] != -1)
            {
                matris[0][bilinmeyen_degisken]= matris[0][bilinmeyen_degisken] + variable[i+2];
            }
            for(j=a; j<a+b; j++)
            {
                if(bilinmeyenler[j] == cikis_sec[i])
                {
                    matris[0][j] = -1;
                }
            }

        }


        // INTERSECTION

        // case 1 for entrance
        x=1;
        for(i=0; i<2; i++)
        {
            for(j=0; j<4; j++)
            {
                if(giris_sec[i] == cadde_yon_sec[j])
                {
                    if(variable[i] != -1)
                    {
                        variable[i] = - variable[i];
                        matris[x][bilinmeyen_degisken]= matris[x][bilinmeyen_degisken] + variable[i];
                        variable[i] = - variable[i];
                    }

                    for(d=0; d<a; d++)
                    {
                        if(bilinmeyenler[d] == giris_sec[i])
                        {
                            matris[x][d] = 1;
                        }
                    }
                    if(variable[j+4] != -1)
                    {
                        variable[j+4] = - variable[j+4];
                        matris[x][bilinmeyen_degisken]= matris[x][bilinmeyen_degisken] + variable[j+4];
                        variable[j+4] = - variable[j+4];
                        x++;
                    }
                    for(d=a+b; d<bilinmeyen_degisken; d++)
                    {
                        if(cadde_yon[j] == bilinmeyenler[d])
                        {
                            matris[x][d] = 1;
                            x++;
                        }
                    }
                    break;
                }

            }

        }
        // case 2 for entrance

        x=1;
        for(i=0; i<2; i++)
        {
            for(j=0; j<4; j++)
            {
                if(giris_sec[i] == cadde_baslangic_sec[j])
                {
                    if(variable[i] != -1)
                    {
                        if(matris[x][bilinmeyen_degisken] == 0)
                        {
                            variable[i] = - variable[i];
                            matris[x][bilinmeyen_degisken]= matris[x][bilinmeyen_degisken] + variable[i];
                            variable[i] = - variable[i];
                        }
                    }
                    for(d=0; d<a; d++)
                    {
                        if(bilinmeyenler[d] == giris_sec[i])
                        {
                            matris[x][d] = 1;
                        }
                    }

                    if(variable[j+4] != -1)
                    {
                        matris[x][bilinmeyen_degisken]= matris[x][bilinmeyen_degisken] + variable[j+4];

                    }
                    for(d=a+b; d<bilinmeyen_degisken; d++)
                    {
                        if(bilinmeyenler[d] == cadde_yon[j])
                        {
                            matris[x][d] = -1;

                        }
                    }

                }
            }
            x++;
        }
        x=0;




        // case 1 for exit

        for(i=0; i<2; i++)
        {
            for(j=0; j<4; j++)
            {
                if(cikis_sec[i] == cadde_baslangic_sec[j])
                {
                    if(variable[i+2] != -1)
                    {
                        variable[i+2] = - variable[i+2];
                        matris1[x][bilinmeyen_degisken]= matris1[x][bilinmeyen_degisken] + variable[i+2];
                        variable[i+2] = - variable[i+2];
                    }
                    for(d=a; d<a+b; d++)
                    {
                        if(bilinmeyenler[d] == cikis_sec[i])
                        {
                            matris1[x][d] = 1;
                        }
                    }

                    if(variable[j+4] != -1)
                    {
                        variable[j+4] = - variable[j+4];
                        matris1[x][bilinmeyen_degisken]= matris1[x][bilinmeyen_degisken] + variable[j+4];
                        variable[j+4] = - variable[j+4];
                        x++;
                    }
                    for(d=a+b; d<bilinmeyen_degisken; d++)
                    {
                        if(cadde_yon[j] == bilinmeyenler[d])
                        {
                            matris1[x][d] = 1;
                            x++;
                        }
                    }
                    break;
                }
            }

        }
        x=0;

        // case 2 for exit
        for(i=0; i<2; i++)
        {
            for(j=0; j<4; j++)
            {
                if(cikis_sec[i] == cadde_yon_sec[j])
                {
                    if(variable[i+2] != -1)
                    {
                        if(matris1[x][bilinmeyen_degisken] == 0)
                        {
                            variable[i+2] = - variable[i+2];
                            matris1[x][bilinmeyen_degisken]= matris1[x][bilinmeyen_degisken] + variable[i+2];
                            variable[i+2] = - variable[i+2];
                        }
                    }
                    for(d=a; d<a+b; d++)
                    {
                        if(bilinmeyenler[d] == cikis_sec[i])
                        {
                            matris1[x][d] = 1;
                        }
                    }
                    if(variable[j+4] != -1)
                    {
                        matris1[x][bilinmeyen_degisken]= matris1[x][bilinmeyen_degisken] + variable[j+4];

                    }

                    for(d=a+b; d<bilinmeyen_degisken; d++)
                    {
                        if(bilinmeyenler[d] == cadde_yon[j])
                        {
                            matris1[x][d] = -1;

                        }
                    }

                }
            }
            x++;
        }


        float main_matris[5][bilinmeyen_degisken+1];


        for(i=0; i<3; i++)
        {
            for(j=0; j<bilinmeyen_degisken+1; j++)
            {
                main_matris[i][j]=matris[i][j];
            }
        }
        for(i=0; i<2; i++)
        {
            for(j=0; j<bilinmeyen_degisken+1; j++)
            {
                main_matris[i+3][j]=matris1[i][j];
            }
        }

//GAUSS JORDAN
        int m,q,k;
        int temp[6];
        float t, p[5];

        for(i=0; i<5; i++)
        {
            if(main_matris[i][i] == 0)
            {
                for(k=i; k<5; k++)
                {
                    if(main_matris[k][i] == 1 || main_matris[k][i] == -1)
                    {
                        for(m=0; m<bilinmeyen_degisken+1; m++)
                        {
                            temp[m] = main_matris[i][m];
                            main_matris[i][m]=main_matris[k][m];
                            main_matris[k][m]= temp[m];
                        }
                    }
                }
            }

        }
        printf("\n\n");

        printf("MATRIS\n");
        printf("\n");
        for(i=0; i<5; i++)
        {
            for(j=0; j<bilinmeyen_degisken+1; j++)
            {
                printf("\t %.0f ", main_matris[i][j]);
            }
            printf("\n");
        }


        printf("\n ISLEMLER \n");

        for(i=0; i<bilinmeyen_degisken; i++)
        {
            for(j=0; j<bilinmeyen_degisken; j++)
            {
                if(i!=j)
                {
                    if(main_matris[j][i] != 0)
                    {
                        if(main_matris[i][i] != 0)
                        {
                            if(main_matris[j][i] == main_matris[i][i])
                            {
                                for(k=0; k<bilinmeyen_degisken+1; k++)
                                    main_matris[j][k]=main_matris[j][k]-main_matris[i][k];
                                printf("\n R%d = R%d - R%d\n", j+1,j+1,i+1);
                                for(m=0; m<5; m++)
                                {
                                    for(q=0; q<bilinmeyen_degisken+1; q++)
                                    {
                                        printf("\t %.0f ", main_matris[m][q]);
                                    }
                                    printf("\n");
                                }
                            }
                            else
                            {
                                for(k=0; k<6; k++)
                                    main_matris[j][k]=main_matris[j][k]+main_matris[i][k];
                                printf("\n R%d = R%d + R%d\n", j+1,j+1,i+1);
                                for(m=0; m<5; m++)
                                {
                                    for(q=0; q<bilinmeyen_degisken+1; q++)
                                    {
                                        printf("\t %.0f ", main_matris[m][q]);
                                    }
                                    printf("\n");
                                }
                            }
                            printf("\n");

                        }
                    }

                }
            }
        }

        int cevap=0;
        printf("\nCEVAP:\n");
        for(i=0; i<bilinmeyen_degisken; i++)
        {
            for(j=0; j<bilinmeyen_degisken; j++)
            {
                if(i!=j)
                {
                    if(main_matris[i][j] == 0)
                    {
                        cevap++;
                        if(cevap == bilinmeyen_degisken-1)
                        {
                            if(main_matris[i][i] != 0)
                            {
                                p[i]=main_matris[i][bilinmeyen_degisken]/main_matris[i][i];
                                printf("\n x%d = %.0f\n",i+1,p[i]);
                            }

                        }

                    }
                }

            }
            cevap=0;
        }

    }

    else if(N==2)
    {
        al_clear_to_color(al_map_rgb(255, 255, 255));
        al_draw_bitmap(resim2, 220, 55, 0);
        al_flip_display();


        int numb[9];
        int variable[9];
        int i,j, x,y, bilinmeyen_degisken;
        int g;
        bilinmeyen_degisken =0;
        char giris_sec[2];
        char cikis_sec[2];
        char cadde_baslangic_sec[5];
        char cadde_yon[5] = {'a','b','e','d','c'};



        char tum_yol[9] = {'t','x','y','z','a','b','e','d','c'};
        char cadde_yon_sec[5];
        int counter = 0;
        for(i=0; i<2; i++)
        {
            printf("\n %d. Giris noktasi giriniz : ", i+1);
            scanf("%c",&giris_sec[i]);
            fflush(stdin);

        }

        for(i=0; i<2; i++)
        {
            printf("\n %d. Cikis noktasi giriniz : ", i+1);
            scanf("%c",&cikis_sec[i]);
            fflush(stdin);
        }

        for(i=0; i<5; i++)
        {
            printf("\n %c caddesinin baslangic ve yonunu seciniz: ", cadde_yon[i]);
            scanf("%c %c",&cadde_baslangic_sec[i], &cadde_yon_sec[i]);
            fflush(stdin);
            float zx;
            if (cadde_baslangic_sec[0] == 't' && cadde_yon_sec[0] == 'x')
            {
                for (zx = 0; zx < 2; zx += 0.4)
                {
                    al_draw_arc(340, 180, 60, 3, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }
            }
            if (cadde_baslangic_sec[0] == 'x' && cadde_yon_sec[0] == 't')
            {
                for (zx = 0.2; zx > -1.5; zx -= 0.4)
                {
                    al_draw_arc(347, 177, 60, 4.5, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }

            }
            if (cadde_baslangic_sec[1] == 'x' && cadde_yon_sec[1] == 'y')
            {
                for (zx = -0.3; zx < 1.5; zx += 0.4)
                {
                    al_draw_arc(358, 178, 60, 5, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }
            }
            if (cadde_baslangic_sec[1] == 'y' && cadde_yon_sec[1] == 'x')
            {
                for (zx = 0; zx > -1.8; zx -= 0.4)
                {
                    al_draw_arc(360, 180, 60, 6.5, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }
            }
            if (cadde_baslangic_sec[2] == 't' && cadde_yon_sec[2] == 'y')
            {
                for(zx=267; zx<430; zx+=6)
                {
                    al_draw_line(267,180,zx,180,al_map_rgb(35,197,38),6);
                    al_flip_display();
                    Sleep(100);
                }

            }
            if (cadde_baslangic_sec[2] == 'y' && cadde_yon_sec[2] == 't')
            {
                for(zx=430; zx>274; zx-=6)
                {
                    al_draw_line(zx,180,430,180,al_map_rgb(35,197,38),6);
                    al_flip_display();
                    Sleep(100);
                }

            }
            if (cadde_baslangic_sec[3] == 'y' && cadde_yon_sec[3] == 'z')
            {
                for (zx = 1; zx < 1.7; zx += 0.4)
                {
                    al_draw_arc(356, 187, 60, 6.3, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }
            }
            if (cadde_baslangic_sec[3] == 'z' && cadde_yon_sec[3] == 'y')
            {
                for (zx = 0; zx > -2; zx -= 0.4)
                {
                    al_draw_arc(355, 195, 60, -4.7, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }
            }
            if (cadde_baslangic_sec[4] == 't' && cadde_yon_sec[4] == 'z')
            {
                for (zx = 0; zx > -2; zx -= 0.4)
                {
                    al_draw_arc(345, 195, 60, 3, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }

            }
            if (cadde_baslangic_sec[4] == 'z' && cadde_yon_sec[4] == 't')
            {
                for (zx = 0; zx < 2; zx += 0.4)
                {
                    al_draw_arc(346, 185, 60, 1.5, zx, al_map_rgb(35, 197, 38), 6);
                    al_flip_display();
                    Sleep(100);

                }
            }
        }

        for(i=0; i<9; i++)
        {
            printf("\n %c caddesi icin ortalama arac sayisini belirtiniz: ", tum_yol[i]);
            scanf("%d", &numb[i]);
            fflush(stdin);
        }

        for(j=0; j<9; j++)
        {
            if(giris_sec[0] == tum_yol[j])
            {
                variable[0] = numb[j];
            }
        }
        for(j=0; j<9; j++)
        {
            if(giris_sec[1] == tum_yol[j])
            {
                variable[1] = numb[j];
            }

        }
        for(j=0; j<9; j++)
        {
            if(cikis_sec[0] == tum_yol[j])
            {
                variable[2] = numb[j];
            }
        }
        for(j=0; j<9; j++)
        {
            if(cikis_sec[1] == tum_yol[j])
            {
                variable[3] = numb[j];
            }
        }

        for(i=0; i<5; i++)
        {
            for(j=0; j<9; j++)
            {
                if(cadde_yon[i] == tum_yol[j])
                {
                    variable[i+4] = numb[j];
                }
            }
        }

        int d;
        d=0;
        size_t n = 1;
        int a,b,c;
        a =0;
        b=0;
        c=0;
        char ( *bilinmeyen_giris ) = (char *)malloc( n * sizeof( char ) );
        char ( *bilinmeyen_cikis ) = (char *)malloc( n * sizeof( char ) );
        char ( *bilinmeyen_cadde ) = (char *)malloc( n * sizeof( char ) );


        for(j=0; j<2; j++)
        {
            if(variable[j] == -1)
            {
                bilinmeyen_giris[d] = giris_sec[j];
                a++;
                d++;
            }
        }

        d=0;

        for(j=2; j<4; j++)
        {
            if(variable[j] == -1)
            {
                bilinmeyen_cikis[d] = cikis_sec[j-2];
                b++;
                d++;

            }
        }

        d=0;

        for(j=4; j<9; j++)
        {
            if(variable[j] == -1)
            {
                bilinmeyen_cadde[d] = cadde_yon[j-4];
                c++;
                d++;
            }
        }
        d=0;

        bilinmeyen_degisken = a+b+c;


        char bilinmeyenler[bilinmeyen_degisken];
        int matris[3][bilinmeyen_degisken+1];
        int matris1[2][bilinmeyen_degisken+1];
        int u =0;
        for(i=0; i<a; i++)
        {
            bilinmeyenler[i]=bilinmeyen_giris[i];

        }
        for(i=a; i<a+b; i++)
        {
            bilinmeyenler[i]=bilinmeyen_cikis[u];
            u++;
        }
        u=0;
        for(i=a+b; i<bilinmeyen_degisken; i++)
        {
            bilinmeyenler[i]= bilinmeyen_cadde[u];
            u++;
        }
        printf("\nBilinmeyenler");
        for(i=0; i<bilinmeyen_degisken; i++)
        {
            printf("\n%c = X%d ", bilinmeyenler[i], i+1);
        }





        for(i=0; i<3; i++)
        {
            for(j=0; j<bilinmeyen_degisken+1; j++)
            {
                matris[i][j]= 0;
            }
        }
        for(i=0; i<2; i++)
        {
            for(j=0; j<bilinmeyen_degisken+1; j++)
            {
                matris1[i][j]= 0;
            }
        }

        //IN and OUT MAIN
        for(i=0; i<2; i++)
        {
            if(variable[i] != -1)
            {
                variable[i] = - variable[i];
                matris[0][bilinmeyen_degisken]= matris[0][bilinmeyen_degisken] + variable[i];
                variable[i] = - variable[i];
            }
            for(j=0; j<a; j++)
            {
                if(bilinmeyenler[j] == giris_sec[i])
                {
                    matris[0][j] = 1;
                }
            }

        }
        for(i=0; i<2; i++)
        {
            if(variable[i+2] != -1)
            {
                matris[0][bilinmeyen_degisken]= matris[0][bilinmeyen_degisken] + variable[i+2];
            }
            for(j=a; j<a+b; j++)
            {
                if(bilinmeyenler[j] == cikis_sec[i])
                {
                    matris[0][j] = -1;
                }
            }

        }


        // INTERSECTION

        // case 1 for entrance
        x=1;
        for(i=0; i<2; i++)
        {
            for(j=0; j<5; j++)
            {
                if(giris_sec[i] == cadde_yon_sec[j])
                {
                    if(variable[i] != -1)
                    {
                        variable[i] = - variable[i];
                        matris[x][bilinmeyen_degisken]= matris[x][bilinmeyen_degisken] + variable[i];
                        variable[i] = - variable[i];
                    }

                    for(d=0; d<a; d++)
                    {
                        if(bilinmeyenler[d] == giris_sec[i])
                        {
                            matris[x][d] = 1;
                        }
                    }
                    if(variable[j+4] != -1)
                    {
                        variable[j+4] = - variable[j+4];
                        matris[x][bilinmeyen_degisken]= matris[x][bilinmeyen_degisken] + variable[j+4];
                        variable[j+4] = - variable[j+4];

                    }
                    for(d=a+b; d<bilinmeyen_degisken; d++)
                    {
                        if(cadde_yon[j] == bilinmeyenler[d])
                        {
                            matris[x][d] = 1;

                        }
                    }
                }

            }
            x++;

        }
        // case 2 for entrance

        x=1;
        for(i=0; i<2; i++)
        {
            for(j=0; j<5; j++)
            {
                if(giris_sec[i] == cadde_baslangic_sec[j])
                {
                    if(variable[i] != -1)
                    {
                        if(matris[x][bilinmeyen_degisken] == 0)
                        {
                            variable[i] = - variable[i];
                            matris[x][bilinmeyen_degisken]= matris[x][bilinmeyen_degisken] + variable[i];
                            variable[i] = - variable[i];
                        }
                    }
                    for(d=0; d<a; d++)
                    {
                        if(bilinmeyenler[d] == giris_sec[i])
                        {
                            matris[x][d] = 1;
                        }
                    }

                    if(variable[j+4] != -1)
                    {
                        matris[x][bilinmeyen_degisken]= matris[x][bilinmeyen_degisken] + variable[j+4];

                    }
                    for(d=a+b; d<bilinmeyen_degisken; d++)
                    {
                        if(bilinmeyenler[d] == cadde_yon[j])
                        {
                            matris[x][d] = -1;

                        }
                    }

                }
            }
            x++;
        }
        x=0;




        // case 1 for exit

        for(i=0; i<2; i++)
        {
            for(j=0; j<5; j++)
            {
                if(cikis_sec[i] == cadde_baslangic_sec[j])
                {
                    if(variable[i+2] != -1)
                    {
                        variable[i+2] = - variable[i+2];
                        matris1[x][bilinmeyen_degisken]= matris1[x][bilinmeyen_degisken] + variable[i+2];
                        variable[i+2] = - variable[i+2];
                    }
                    for(d=a; d<a+b; d++)
                    {
                        if(bilinmeyenler[d] == cikis_sec[i])
                        {
                            matris1[x][d] = 1;
                        }
                    }

                    if(variable[j+4] != -1)
                    {
                        variable[j+4] = - variable[j+4];
                        matris1[x][bilinmeyen_degisken]= matris1[x][bilinmeyen_degisken] + variable[j+4];
                        variable[j+4] = - variable[j+4];

                    }
                    for(d=a+b; d<bilinmeyen_degisken; d++)
                    {
                        if(cadde_yon[j] == bilinmeyenler[d])
                        {
                            matris1[x][d] = 1;

                        }
                    }

                }
            }
            x++;
        }
        x=0;

        // case 2 for exit
        for(i=0; i<2; i++)
        {
            for(j=0; j<5; j++)
            {
                if(cikis_sec[i] == cadde_yon_sec[j])
                {
                    if(variable[i+2] != -1)
                    {
                        if(matris1[x][bilinmeyen_degisken] == 0)
                        {
                            variable[i+2] = - variable[i+2];
                            matris1[x][bilinmeyen_degisken]= matris1[x][bilinmeyen_degisken] + variable[i+2];
                            variable[i+2] = - variable[i+2];
                        }
                    }
                    for(d=a; d<a+b; d++)
                    {
                        if(bilinmeyenler[d] == cikis_sec[i])
                        {
                            matris1[x][d] = 1;
                        }
                    }
                    if(variable[j+4] != -1)
                    {
                        matris1[x][bilinmeyen_degisken]= matris1[x][bilinmeyen_degisken] + variable[j+4];

                    }

                    for(d=a+b; d<bilinmeyen_degisken; d++)
                    {
                        if(bilinmeyenler[d] == cadde_yon[j])
                        {
                            matris1[x][d] = -1;

                        }
                    }

                }
            }
            x++;
        }


        printf("\n\n");


        float main_matris[5][bilinmeyen_degisken+1];



        for(i=0; i<3; i++)
        {
            for(j=0; j<bilinmeyen_degisken+1; j++)
            {
                main_matris[i][j]=matris[i][j];
            }
        }
        for(i=0; i<2; i++)
        {
            for(j=0; j<bilinmeyen_degisken+1; j++)
            {
                main_matris[i+3][j]=matris1[i][j];
            }
        }

//GAUSS JORDAN
        int m,q,k;
        int temp[6];
        float t, p[5];

        for(i=0; i<5; i++)
        {
            if(main_matris[i][i] == 0)
            {
                for(k=i; k<5; k++)
                {
                    if(main_matris[k][i] == 1 || main_matris[k][i] == -1)
                    {
                        for(m=0; m<bilinmeyen_degisken+1; m++)
                        {
                            temp[m] = main_matris[i][m];
                            main_matris[i][m]=main_matris[k][m];
                            main_matris[k][m]= temp[m];
                        }
                    }
                }
            }

        }
        printf("\n\n");

        printf("MATRIS\n");
        printf("\n");
        for(i=0; i<5; i++)
        {
            for(j=0; j<bilinmeyen_degisken+1; j++)
            {
                printf("\t %.0f ", main_matris[i][j]);
            }
            printf("\n");
        }


        printf("\n ISLEMLER \n");

        for(i=0; i<bilinmeyen_degisken; i++)
        {
            for(j=0; j<bilinmeyen_degisken; j++)
            {
                if(i!=j)
                {
                    if(main_matris[j][i] !=0)
                    {
                        if(main_matris[i][i] !=0)
                        {
                            if(main_matris[j][i] == main_matris[i][i])
                            {
                                for(k=0; k<bilinmeyen_degisken+1; k++)
                                    main_matris[j][k]=main_matris[j][k]-main_matris[i][k];
                                printf("\n R%d = R%d - R%d\n", j+1,j+1,i+1);
                                for(m=0; m<5; m++)
                                {
                                    for(q=0; q<bilinmeyen_degisken+1; q++)
                                    {
                                        printf("\t %.0f ", main_matris[m][q]);
                                    }
                                    printf("\n");
                                }
                            }
                            else
                            {
                                for(k=0; k<6; k++)
                                    main_matris[j][k]=main_matris[j][k]+main_matris[i][k];
                                printf("\n R%d = R%d + R%d\n", j+1,j+1,i+1);
                                for(m=0; m<5; m++)
                                {
                                    for(q=0; q<bilinmeyen_degisken+1; q++)
                                    {
                                        printf("\t %.0f ", main_matris[m][q]);
                                    }
                                    printf("\n");
                                }
                            }
                            printf("\n");

                        }
                    }

                }
            }
        }

        int cevap=0;
        printf("\nCEVAP:\n");
        for(i=0; i<bilinmeyen_degisken; i++)
        {
            for(j=0; j<bilinmeyen_degisken; j++)
            {
                if(i!=j)
                {
                    if(main_matris[i][j] == 0)
                    {
                        cevap++;
                        if(cevap == bilinmeyen_degisken-1)
                        {
                            if(main_matris[i][i] != 0)
                            {
                                p[i]=main_matris[i][bilinmeyen_degisken]/main_matris[i][i];
                                printf("\n x%d = %.0f\n",i+1,p[i]);
                            }

                        }

                    }
                }

            }
            cevap=0;
        }

    }
    getche();
}
