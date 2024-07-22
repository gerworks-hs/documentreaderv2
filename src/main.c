//Made by @itsgerliz
#include <stdio.h>

FILE *path;

void readDataStream(FILE *stream) {
	char nextChar;
	do {
		fprintf(stdout, "%c", nextChar);
	} while ((nextChar = fgetc(stream)) != EOF);
}

int main(int argc, char **argv) {
	fprintf(stdout, "File to read -> %s\n", argv[1]);
	if ((path = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "The file path is not valid or you do not have right to read it\n");
		return 1;
	} else {
		fprintf(stdout, "OK!, Reading...\n");
		fprintf(stdout, "--BEGIN OF FILE--\n");
		readDataStream(path);
		fprintf(stdout, "--END OF FILE--\n");
		return 0;
	}
}

//Made by @itsgerliz
