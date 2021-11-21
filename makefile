run: main
	./main
clean:
	rm -rf *.out *.o
main: clean
	g++ *.cpp -o main
