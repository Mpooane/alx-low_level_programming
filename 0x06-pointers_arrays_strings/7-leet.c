#include "main.h"

/**
 * *leet - Encodes a string to 1337.
 * leet - Encodes a string to 1337.
 * @str: string to be encoded.
 *
 * Return: pointer to the encoded leetspeek  string.
 */
@@ -20,5 +20,5 @@ char *leet(char *str)
			if (str[i] == subs[j])
				str[i] = le[j / 2];
	}
	return (s);
	return (str);
}
