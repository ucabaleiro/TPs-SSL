PROGRAM=scannerLexico

FILE_EXT=.out

OUTFILE=$(PROGRAM)$(FILE_EXT)

CC=gcc
CFLAGS=-I$(IDIR) -g -Wall
LIBS=

IDIR=./include
SDIR=./src
ODIR=./obj

DEPS=$(wildcard $(IDIR)/*.h)
SRC=$(wildcard $(SDIR)/*.c)
OBJ=$(patsubst $(SDIR)/%.c,$(ODIR)/%.o,$(SRC))

$(PROGRAM): $(OBJ)
	$(CC) -o $(OUTFILE) $^ $(CFLAGS) $(LIBS)

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS) $(ODIR)
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR):
	mkdir -p $@

.PHONY: clean run

clean:
	rm -f $(ODIR)/*.o $(OUTFILE) $(TESTS_OUFILE)

run:
	make $(PROGRAM) && \
	./$(OUTFILE)