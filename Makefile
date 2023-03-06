CC := gcc

CFLAGS = -Wall -Wextra -pedantic -std=c99 -O2
LDFLAGS = -ldl
LIBS = plugin1.so plugin2.so

all: main plugin1.so plugin2.so test

main: main.c
	$(CC) $(CFLAGS) -fPIE -I. -L. -o $@ $< $(LDFLAGS)

$(LIBS): %.so: %.c
	$(CC) $(CFLAGS) -fPIC -shared -o $@ $<

test: main plugin1.so plugin2.so
	./main plugin1
	./main plugin2

clean:
	rm -f main *.so