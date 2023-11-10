all: relog.c
	gcc relog.c -o relog.exe

clean:
	rm relog.exe