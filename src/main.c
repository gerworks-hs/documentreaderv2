//Made by @itsgerliz

#include <stdio.h>

void readDataStream() {}

int main(int argc, char **argv) {
	fprintf(stdout, "File to read -> %s\n", argv[1]);
	if ((FILE *path = fopen(argv[1], "r") == NULL) {
		fprintf(stderr, "The file path is not valid\n");
	} else {
		fprintf(stdout, "OK!, Reading...\n");
	}
}

//Made by @itsgerliz
