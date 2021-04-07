#Compiler Config
CC=clang
CFLAGS= -Wall -g

#Project Directories
SRCDIR=src
OBJDIR=obj
BINDIR=bin
DOCDIR=docs
BIN=$(BINDIR)/main

#Build variables
SRCS=$(wildcard $(SRCDIR)/*.c)
OBJS=$(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

all: $(BIN)


$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@printf "\nStarting cleanup ....\n"
	rm -rf $(DOCDIR)/* $(OBJDIR)/* $(BINDIR)/*