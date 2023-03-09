#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cout << "Usage: " << argv[0] << " <string1> <string2>" << endl;
        return 1;
    }

    char* str1 = argv[1];
    char* str2 = argv[2];

    int count = 0;
    char* ptr = str2;

    while ((ptr = strstr(ptr, str1)) != NULL) {
        count++;
        ptr += strlen(str1);
    }

    cout << str1 << " appears " << count << " times in " << str2 << endl;

    return 0;
}
