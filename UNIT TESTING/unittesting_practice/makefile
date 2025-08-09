#target :dependencies
# commands to generate target

object.o :main.c sum.c product.c division.c subtract.c square.c unity.c
	gcc main.c sum.c product.c division.c subtract.c square.c unity.c -c
all:main.o sum.o product.o division.o subtract.o square.o unity.o
	gcc main.o sum.o product.o division.o subtract.o square.o unity.o -o  all.out
run:all
	./all.out
clear:
	rm -rf *.o *.out

 