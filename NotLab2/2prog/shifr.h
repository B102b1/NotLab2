#pragma once
#include <string>
using namespace std;
class Shifr
{
public:
    Shifr(int columns);
    string encrypt(const string& plaintext);
    string decrypt(const string& ciphertext);

private:
    int key;
};
