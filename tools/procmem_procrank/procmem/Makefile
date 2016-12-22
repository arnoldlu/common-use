

CFLAGS += -I../libpagemap/include -I.  -Bstatic  -static  -lpagemap -L../libpagemap

procmem: procmem.o
	gcc -o procmem procmem.c $(CFLAGS)

procmem.o : procmem.c
	gcc -o procmem.o procmem.c $(CFLAGS)


.PHONY:clean
clean:
	rm *.o procmem