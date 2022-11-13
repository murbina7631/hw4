#include <stdio.h>
#include <string.h>

int main() {
	// given plaintext and ciphertext
	char plaintext[] = "This is a top secret.";
	char ciphertext[] = "8d20e5056a8d24d0462ce74e4904c1b513e10d1df4a2ef2ad4540fae1ca0aaf9";
	printf("Plaintext (total 21 characters): %s\n", plaintext);
	printf("Ciphertext (in hex format): %s\n", ciphertext);
	
	// iterate through each line in the file
	FILE *file = fopen("words.txt", "r");
	char line[16];
	while (fgets(line, sizeof(line), file)) {
		printf("%s", line);		
		// grabs the length of the word in the line (include \n)
		printf("%d\n", strlen(line));

		// next step is to append spaces until 128 bytes are reached

		// then encrypt using EVP_EncryptInit.html library and aes-128-cbc

		// finally match it against the given ciphertext hash
		// if it matches, stop the program, otherwise continue.
	}
	fclose(file);

	return 0;
}