#include"iostream"
#include<string>
#include<fstream>

#include"Play.h"
#include"AppFile.h"
class DescFile : public Play
{
protected:
    int size;
    AppFile* operations;

    std::string path = "fl.txt";
    std::fstream fl;
    std::string tempU1;
public:
    DescFile() {
        size = 0;
        operations = nullptr;
    }

    void addArr() {
        if (won(CROSS)) { //swap
            tempU1 = user1;
            user1 = user2;
        }
        else {
            tempU1 = user2;
            user2 = user1;
        }

        AppFile* tmp = new AppFile(tempU1, user2);
        addToArr(tmp);
    }
    void addToArr(AppFile* operation) {
        AppFile* tmp = new AppFile[size + 1];
        for (int i = 0; i < size; i++) {
            tmp[i] = operations[i];
        }
        size++;
        tmp[size - 1] = *operation;
        delete[] operations;

        operations = tmp;
        tmp = nullptr;
    }

    void writeArrToList() {
        fl.open(path, std::fstream::in | std::fstream::app);
        if (!fl.is_open()) {
            std::cout << "Cannot open: " << path << " file" << "\n";
        }
        else {
            //слева победа, право - поражение!
            for (int i = NULL; i < size; i++) {
                fl << operations[i].getUser1() << ";" << operations[i].getUser2() << "\n";
            }
        }
        fl.close();
    }
    void readToList() {
        fl.open(path, std::fstream::out | std::fstream::in);
        if (!fl.is_open()) {
            std::cout << "Cannot open: " << path << " file" << "\n";
        }
        else {
            std::string tempUser1, tempUser2, smg;
            while (!fl.eof()) {
                smg = "";
                getline(fl, smg);
                if (smg == "") return;

                tempUser1 = smg, tempUser2 = smg;
                tempUser1.erase(tempUser1.find_first_of(";", 0));

                tempUser2.erase(0, tempUser1.length() + 1);

                AppFile* temp = new AppFile(tempUser1, tempUser2);
                addToArr(temp);
            }
        }
    }

    void view() {
        for (int i = 0; i < size; i++) {
            std::cout << operations[i].getUser1() << "\t" << operations[i].getUser2() << "\n";
        }
        std::cout << "\n";
        std::cout << "------------------------" << "\n";
    }
};