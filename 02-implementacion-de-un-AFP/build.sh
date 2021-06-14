gcc -o lib/libAFP.o -c lib/libAFP.c
gcc -o lib/libPila.o -c lib/libPila.c
ar rcs lib/libTP2.a lib/libAFP.o lib/libPila.o
gcc -o TP2.o -c TP2.c
gcc -o TP2 TP2.o -L./lib -lTP2
rm lib/libAFP.o lib/libPila.o lib/libTP2.a TP2.o
./TP2
