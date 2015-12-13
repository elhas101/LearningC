all: fibonacci clean

run: all
	./fibonacci

clean:
	rm -f fibonacci.o 

cleaner: clean
	rm -f fibonacci

