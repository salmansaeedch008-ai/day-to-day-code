#include <iostream>
using namespace std;

// -------------------- Helpers --------------------
int str_length(char* s) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

int find_substring_index(char* paragraph, char* substring) {
    int paraLen = str_length(paragraph);
    int subLen  = str_length(substring);

    if (subLen == 0) return 0;
    if (subLen > paraLen) return -1;

    for (int i = 0; i <= paraLen - subLen; i++) {
        int j = 0;
        while (j < subLen && paragraph[i + j] == substring[j]) j++;
        if (j == subLen) return i;
    }
    return -1;
}

// -------------------- Task 1.1 --------------------
char* removeSentence(char* Para, char* input) {
    int startPos = find_substring_index(Para, input);
    if (startPos == -1) return Para;   // required by assignment

    int paraLen = str_length(Para);
    int inLen   = str_length(input);
    if (inLen == 0) return Para;

    char* updated = new char[paraLen - inLen + 1];

    int i = 0, k = 0;
    while (Para[i] != '\0') {
        if (i == startPos) i += inLen; // skip match
        else updated[k++] = Para[i++];
    }
    updated[k] = '\0';
    return updated;
}

// -------------------- Task 1.2 (circular) --------------------
bool FindSubString(char* Str, char* substr, int & start, int & end) {
    int n = str_length(Str);
    int m = str_length(substr);

    if (m == 0) {
        start = 0;
        end = -1;
        return true;
    }

    if (n == 0 || m > n) {
        start = -1;
        end = -1;
        return false;
    }

    for (int i = 0; i < n; i++) {
        int j = 0;
        while (j < m) {
            int idx = (i + j) % n; // circular indexing
            if (Str[idx] != substr[j]) break;
            j++;
        }

        if (j == m) {
            start = i;
            end = (i + m - 1) % n;
            return true;
        }
    }

    start = -1;
    end = -1;
    return false;
}

// -------------------- Test main --------------------
int main() {
    const int MAX = 1000;
    char para[MAX], input[MAX];
    char Str[MAX], substr[MAX];
    int start, end;

    cout << "===== Task 1.1: removeSentence =====\n";
    cout << "Enter paragraph: ";
    cin.getline(para, MAX);
    cout << "Enter substring to remove: ";
    cin.getline(input, MAX);

    char* result = removeSentence(para, input);

    cout << "Result: " << result << "\n\n";

    // If new memory was allocated, free it
    if (result != para) {
        delete[] result;
    }

    cout << "===== Task 1.2: FindSubString (Circular) =====\n";
    cout << "Enter main string: ";
    cin.getline(Str, MAX);
    cout << "Enter substring to search: ";
    cin.getline(substr, MAX);

    bool found = FindSubString(Str, substr, start, end);

    if (found) {
        cout << "Output : return true , start =" << start << ", end=" << end << endl;
    } else {
        cout << "Output : return false , start =-1, end=-1" << endl;
    }

    return 0;
}
