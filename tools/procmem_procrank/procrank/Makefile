

CFLAGS += -I../libpagemap/include -I.  -Bstatic  -static  -lpagemap -L../libpagemap

procrank: procrank.o
	gcc -o procrank procrank.c $(CFLAGS)

procrank.o : procrank.c
	gcc -o procrank.o procrank.c $(CFLAGS)


.PHONY:clean
clean:
	-rm *.o procrank
