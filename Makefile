all:
	gcc -Wall -Werror -o main main.c
clean:
	rm main
run:
	./main