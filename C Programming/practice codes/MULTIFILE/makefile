#target :dependencies
# commands to generate target

object.o :main.c sum.c product.c division.c subtract.c square.c
	gcc main.c sum.c product.c division.c subtract.c square.c -c
all:main.o sum.o product.o division.o subtract.o square.o
	gcc main.o sum.o product.o division.o subtract.o square.o -o all.out
run:all
	./all.out
clear:
	rm -rf *.o *all	

 