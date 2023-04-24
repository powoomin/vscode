market : market.c product.o manager.o
		gcc -o market market.c product.o manager.o
product.o : product.c product.h
		gcc -c product.c -o product.o
manager.o : manager.c manager.h
		gcc -c manager.c -o manager.o

clean :
		rm *.o market