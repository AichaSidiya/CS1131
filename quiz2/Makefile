# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation
# ****************************************************

CC = g++
CFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
# ****************************************************

quiz2_ex1: quiz2_ex1.o
	$(CC) $(CFLAGS) -o quiz2_ex1  quiz2_ex1.o

# The quiz2_ex1.o target can be written more simply

quiz2_ex1.o: quiz2_ex1.cc
	$(CC) $(CFLAGS) -c quiz2_ex1.cc

quiz2_ex2: quiz2_ex2.o
	$(CC) $(CFLAGS) -o quiz2_ex2  quiz2_ex2.o

# The quiz2_ex2.o target can be written more simply

quiz2_ex2.o: quiz2_ex2.cc
	$(CC) $(CFLAGS) -c quiz2_ex2.cc

quiz2_ex3: quiz2_ex3.o
	$(CC) $(CFLAGS) -o quiz2_ex3  quiz2_ex3.o

# The quiz2_ex1.o target can be written more simply

quiz2_ex3.o: quiz2_ex3.cc
	$(CC) $(CFLAGS) -c quiz2_ex3.cc
