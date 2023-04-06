#include<stdio.h>
#include<string.h>
void reverse(char* str) {
	char* p = str;

	while (*str) str++;
	str--;

	while (p - 1 != str) {
		printf("%c", *str);
		str--;
	}

	printf("\n");
}

void alpha(char* str) {
	while (*str) {
		if (*str > 90) *str -= 32;
		else *str += 32;

		printf("%c", *str);
		
		str++;

	}

	printf("\n");
}

void equals(char* str1, char* str2) {
	while (*str1 || *str2) {
		if (*str1 != *str2) {
			printf("다르다\n");
			return;
		}
		str1++;
		str2++;
	}
	printf("같다\n");
}

int isStr(char* str1, char* str2) {
	int cnt = 0;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	
	for (int i = 0; i <= len1 - len2; i++) {
		for (int j = 0; j < len2; j++) {
			if (str1[j + i] != str2[j]) {
				break;
			}
			else cnt++;
		}
		if (cnt == len2) return i;
	}
	return -1;
}

int main() {
	char str[50] = "abcde";
	char a[50];
	char b[50];

	reverse(str);
	alpha(str);

	scanf("%s %s", a, b);

	equals(a, b);
	printf("%d\n", isStr(a,b));
}
