date_converter:
	g++ -Iinclude tests/test_date_converter.cpp src/date_converter.c -o date_converter

all: date_converter
clean: 
	rm -f date_converter