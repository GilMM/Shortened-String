myabc:  abc.o
	gcc -g -Wall -ansi -pedantic  abc.o -o myabc -lm
abc.o:  abc.c
	gcc -c -Wall -ansi -pedantic  abc.c -o abc.o -lm
