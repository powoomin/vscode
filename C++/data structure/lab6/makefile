qsort : quicksort.o print_list.o
	g++ quicksort.o print_list.o -o qsort

quicksort.o: quicksort.cpp
	g++ -c quicksort.cpp

print_list.o: print_list.cpp
	g++ -c print_list.cpp

clean:
	rm -f *.o qsort.exe qsort