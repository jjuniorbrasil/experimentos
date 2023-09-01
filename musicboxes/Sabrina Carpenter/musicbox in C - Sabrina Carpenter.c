#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>

#define C4 261
#define D4 294
#define E4 329
#define F4 349
#define G4 391
#define A4 440
#define B4 493
#define C5 522
#define D5 588
#define E5 658
#define F5 698
#define G5 784
#define Gs5 830
#define A5 880
#define B5 987
#define C6 1046
#define Cs6 1108
#define D6 1175
#define Ds6 1244
#define E6 1318
#define F6 1396
#define Fs6 1479
#define G6 1567
#define Gs6 1650
#define A6 1760
#define B6 1975

      int intro() {
          int v1=225, v2=450, v3=1800, v4=900;

            Beep(Fs6,600);
            Beep(E6,v3);

                    Beep(Gs6,v1);
                Beep(Fs6,v1);
            Beep(E6,v1);
        Beep(Ds6,v1);
        Beep(Ds6,v1);
        Beep(Ds6,v1);
    Beep(Cs6,v1);
        Beep(Ds6,v3);

        Beep(Gs6,v1);
        Beep(Fs6,v1);
        Beep(E6,v1);
        Beep(Ds6,v2);

        Beep(Ds6,v1);
        Beep(E6,v1);
        Beep(B5,v2);

        Beep(B5,v1);
        Beep(Cs6,v1);
        Beep(Ds6,v2);

        Beep(Ds6,v1);
        Beep(E6,v1);
        Beep(Cs6,v2);

        Beep(Cs6,v1);
        Beep(B5,v1);
        Beep(Gs5,v3);
                Beep(Gs5,v3); }

int main()
{

        printf("     ***********                  ***********\n");
printf("   *****************            *****************\n");
printf(" *********************        *********************\n");
printf(" ***********************      ***********************\n");
printf(" ************************    ************************\n");
printf(" *************************  ************************* \n");
printf("  ************************************************** \n");
printf("   ************************************************\n");
printf("     *********************************************\n");
printf("       ****************************************\n");
printf("          **********************************\n");
printf("            ******************************\n");
printf("               ************************\n");
printf("                 ********************\n");
printf("                    **************\n");
printf("                      **********\n");
printf("                        ******\n");
printf("                          **\n");
        intro();
        intro();

}
