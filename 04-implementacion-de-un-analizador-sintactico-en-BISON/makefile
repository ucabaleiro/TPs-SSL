PROCESS_NAME=TP4
IDIR =./include
COMMONS_IDIR = ../so-commons-library/include
COMMONS_LDIR = ../so-commons-library/lib
ODIR=./obj
SRCDIR=./src
LEXDIR=./lex
BISDIR=./bison
LIBS=-lfl -ly -lcommons
CC=gcc
CFLAGS=-I$(IDIR) -I$(COMMONS_IDIR) -L$(COMMONS_LDIR) -g -Wall

DEPS = $(wildcard $(IDIR)/*.h)
COMMONS_DEPS = $(wildcard $(COMMONS_IDIR)/*.h)
SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(patsubst $(SRCDIR)/%.c,$(ODIR)/%.o,$(SRC))

$(PROCESS_NAME): $(OBJ) $(ODIR)/lexer.o
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

$(ODIR)/%.o: $(SRCDIR)/%.c $(DEPS) $(COMMONS_DEPS) | $(ODIR)
	$(CC) -c -o $@ $< $(CFLAGS)

$(SRCDIR)/lexer.c: $(LEXDIR)/lexer.l
	flex -o$@ $^

$(SRCDIR)/parser.c: $(LEXDIR)/parser.y
	bison --defines=$(IDIR)/parser.h -o$@ $^

$(ODIR):
	mkdir -p $@

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(SRCDIR)/TP3.c $(PROCESS_NAME) yyout.txt
