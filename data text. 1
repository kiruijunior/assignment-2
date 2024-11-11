#include <stdio.h>
#include <string.h>

void save_sentence_to_file() {
    char sentence[101];

    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

   
    size_t length = strlen(sentence);
    if (length > 0 && sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';
    }

     
    if (strlen(sentence) <= 100) {
        FILE *file = fopen("data.text", "w"); 
        if (file != NULL) {
            fprintf(file, "%s", sentence); 
            fclose(file);
            printf("Sentence saved to data.text.\n");
        } else {
            printf("Error: Unable to open file.\n");
        }
    } else {
        printf("The sentence is too long. Please enter up to 100 characters.\n");
    }
}

int main() {
    save_sentence_to_file();
    return 0;
}
