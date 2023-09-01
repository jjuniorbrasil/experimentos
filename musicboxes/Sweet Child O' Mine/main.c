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
#define A5 880
#define B5 987
#define C6 1046
#define D6 1175
#define E6 1318
#define F6 1396
#define Fs6 1479
#define G6 1567
#define A6 1760
#define B6 1975

int introguitarra() {

    int i = 0, v = 250;

    while (i < 2) {
    Beep(D4, v);
    Beep(D5, v);
    Beep(A4, v);
    Beep(G4, v);
    Beep(G6, v);
    Beep(A5, v);
    Beep(Fs6, v);
    Beep(A5, v);
    i++;}

    while (i < 4) {
    Beep(E4, v);
    Beep(D5, v);
    Beep(A4, v);
    Beep(G4, v);
    Beep(G6, v);
    Beep(A5, v);
    Beep(Fs6, v);
    Beep(A5, v);
    i++;}

    while (i < 6) {
    Beep(G4, v);
    Beep(D5, v);
    Beep(A4, v);
    Beep(G4, v);
    Beep(G6, v);
    Beep(A5, v);
    Beep(Fs6, v);
    Beep(A5, v);
    i++;}

    while (i < 8) {
    Beep(D4, v);
    Beep(D5, v);
    Beep(A4, v);
    Beep(G4, v);
    Beep(G6, v);
    Beep(A5, v);
    Beep(Fs6, v);
    Beep(A5, v);
    i++;}
}

int main()
{
    introguitarra();
}
