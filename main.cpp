#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    vector<string> someStrings;
    someStrings.push_back("String 1");
    someStrings.push_back("String 2");
    someStrings.push_back("String 3");

    for(auto it = someStrings.begin(); it != someStrings.end(); ++it) {
        printf("%s\n", it->c_str());
    }

    for(auto& it : someStrings) {
        printf("%s\n", it.c_str());
    }

    return 0;
}
