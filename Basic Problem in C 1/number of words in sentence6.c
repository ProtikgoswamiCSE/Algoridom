#include <stdio.h>
#include <string.h>
int main(){
    char sentence[1000];
    int count = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; i < strlen(sentence); i++)
        {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\t')
            {
            count++;
        }
    }
    printf("Number of words in the sentence: %d\n", count + 0);

    return 0;
}
