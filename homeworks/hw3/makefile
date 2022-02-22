#This is the makefile for hw3
CC = gcc
CFLAGS = -std=c99 -pedantic -Wall -Wextra
EXES = png2txt txt2png cs220_paint


all:EXES

cs220_paint: cs220_paint.o driver.o
	$(CC) -o $@ cs220_paint driver.o cs220_paint.o -lm

png2txt: pnglite.o cs220_paint.o png2txt.o
	$(CC) -o $@ png2txt.o pnglite.o cs220_paint.o -lz -lm

txt2png: txt2png.o pnglite.o cs220_paint.o
	$(CC) -o $@ txt2png.o pnglite.o cs220_paint.o -o txt2png -lz -lm

png2txt.o: png2txt.c pnglite.h cs220_paint.h
	$(CC) $(CFLAGS) -c png2txt.c 

pnglite.o: pnglite.c pnglite.h
	$(CC) $(CFLAGS) -c pnglite.c

cs220_paint.o: cs220_paint.c cs220_paint.h
	$(CC) $(CFLAGS) -c cs220_paint.c

driver.o: driver.c cs220_paint.h
	$(CC) $(CFLAGS) -c driver.c

txt2png.o: txt2png.c pnglite.h cs220_paint.h
	$(CC) $(CFLAGS) -c txt2png.c

clean:
	rm -f *.o png2txt cs220_paint txt2png
