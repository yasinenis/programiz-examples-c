// ex11 : Check Whether a Character is a Vowel or Consonant
#include <stdio.h>
int main() {
	char c;
	int lowercase_vowel, uppercase_vowel;
	printf("Enter an alphabet: ");
	scanf_s("%c", &c);

	// evaluates to 1 if variable c is a lowecase vowel
	lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

	// evaluates to 1 if variable c is a uppercase vowel
	uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	// evaluates to 1 (true) if c is a vowel
	if (lowercase_vowel || uppercase_vowel)
		printf("%c is a vowel.", c);
	else
		printf("%c is a constant.", c);
	return 0;
}

