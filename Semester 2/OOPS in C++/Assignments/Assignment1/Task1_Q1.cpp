#include <iostream>

using namespace std;

//helper function (task1_1)
int find_substring_index(char* paragraph, char* substring) {
    int paraIndex = 0, subIndex = 0;
    
    // Loop through the paragraph to find the first match of the substring
    while (paragraph[paraIndex] != '\0') {
        // Check if current characters match
        if (paragraph[paraIndex] == substring[subIndex]) {
            int matchStart = paraIndex;  // Record the start index of the match
            
            // Continue checking the subsequent characters
            while ((paragraph[paraIndex] == substring[subIndex]) && (substring[subIndex] != '\0')) {
                paraIndex++;
                subIndex++;
            }
            
            // If we have matched the entire substring, return the start index
            if (substring[subIndex] == '\0') {
                return matchStart;
            }
            
            // Reset the substring index for the next possible match
            subIndex = 0;
        }
        paraIndex++;
    }
    return -1; // Return -1 if the substring is not found
}

//task1_1
char* removeSentence(char* para, char* input) {
    int startPos = find_substring_index(para, input);  // Find the start position of the substring to remove
    if (startPos == -1) {  // If the substring is not found, return the original paragraph
        return para;
    }

    // Calculate the length of the paragraph and the substring
    int paraLength = 0, subLength = 0;
    while (para[paraLength] != '\0') {
        paraLength++;
    }
    while (input[subLength] != '\0') {
        subLength++;
    }

    // Create a new array to store the updated paragraph (after removing the substring)
    char* updatedParagraph = new char[paraLength - subLength + 1];
    int paraIndex = 0, newIndex = 0;

    // Copy over the characters from the original paragraph, skipping the substring
    while (para[paraIndex] != '\0') {
        if (paraIndex == startPos) {
            // Skip the characters that match the substring
            paraIndex += subLength;
        } else {
            updatedParagraph[newIndex] = para[paraIndex];
            newIndex++;
            paraIndex++;
        }
    }

    // Add the null terminator to the end of the new string
    updatedParagraph[newIndex] = '\0';
    return updatedParagraph;
}

int main(){
    const int MAX = 1000;

    char para[MAX];
    char input[MAX];

    cout << "Enter paragraph: ";
    cin.getline(para, MAX);

    cout << "Enter sentence/substring to remove: ";
    cin.getline(input, MAX);

    char* result = removeSentence(para, input);

    cout << "\nOriginal: " << para << endl;
    cout << "Updated : " << result << endl;

    // Free memory only if new memory was allocated
    if (result != para) {
        delete[] result;
    }

    return 0;
}