date_converter:
	gcc -Iinclude tests/test_date_converter.c src/date_converter.c -o date_converter

all: date_converter
clean: 
	rm -f date_converter