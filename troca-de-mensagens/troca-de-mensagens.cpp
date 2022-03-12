#include <iostream>
#include <string>
using namespace std;

int c = 0;

void cipher(string keyword, string sentence) {
    bool reading_first_letter_of_word = true;
    bool need_cipher = false;

    char k, l;
    for (int i = 0; i < sentence.length(); i++) {
        l = sentence[i];
        if (l == 32) {
            reading_first_letter_of_word = true;
            printf(" ");
            continue;
        }
        if (reading_first_letter_of_word) {
            need_cipher = !(l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u');
        }
        reading_first_letter_of_word = false;
        if (!need_cipher) {
            printf("%c", l);
            continue;
        }
        k = keyword[c++ % keyword.length()];
        printf("%c", (char) ((((int) k)+((int) l)-194) % 26 + 97));
    }
}

int main() {
    string keyword;
    int n;

    getline(cin, keyword);
    scanf("%d", &n);

    string sentence;
    for (int i = 0; i < n; i++) {
        getline(cin, sentence);
        if (sentence == "\0") getline(cin, sentence);
        cipher(keyword, sentence);
        printf("\n");
        c=0;
    }
}