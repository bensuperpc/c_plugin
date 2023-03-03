CC := gcc

CFLAGS = -Wall -Wextra -pedantic -std=c99 -O2
LDFLAGS = -ldl

all: main plugin1.so plugin2.so test

main: main.c
	$(CC) $(CFLAGS) -fPIE -I. -L. -o $@ $< $(LDFLAGS)

plugin1.so: plugin1.c
	$(CC) $(CFLAGS) -fPIC -shared -o $@ $<

plugin2.so: plugin2.c
	$(CC) $(CFLAGS) -fPIC -shared -o $@ $<

test: main plugin1.so plugin2.so
	./main plugin1
	./main plugin2

clean:
	rm -f main plugin1.so plugin2.so