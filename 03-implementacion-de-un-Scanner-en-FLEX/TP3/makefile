PROCESS_NAME=TP3
IDIR =./include
COMMONS_IDIR = ../so-commons-library/include
COMMONS_LDIR = ../so-commons-library/lib
ODIR=./obj
SRCDIR=./src
LEXDIR=./lex
LIBS=-lfl -lcommons
CC=gcc
CFLAGS=-I$(IDIR) -I$(COMMONS_IDIR) -L$(COMMONS_LDIR) -g -Wall

DEPS = $(wildcard $(IDIR)/*.h)
COMMONS_DEPS = $(wildcard $(COMMONS_IDIR)/*.h)
SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(patsubst $(SRCDIR)/%.c,$(ODIR)/%.o,$(SRC))

$(PROCESS_NAME): $(OBJ) $(ODIR)/TP3.o
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

$(SRCDIR)/TP3.c: $(LEXDIR)/TP3.l
	flex -o$@ $^

$(ODIR)/%.o: $(SRCDIR)/%.c $(DEPS) $(COMMONS_DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(SRCDIR)/TP3.c $(PROCESS_NAME)