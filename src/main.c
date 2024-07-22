//Made by @itsgerliz
#include <stdio.h>

int main(int argc, char **argv) {
	for (int i = 1; i < argc; i++) {
		fprintf(stdout, "File to read -> %s\n", argv[i]);			
	} 
}
