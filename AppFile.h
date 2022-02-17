#include<iostream>
#include<string>

class AppFile
{
protected:
    std::string user1;
    std::string user2;

public:
    AppFile() {};
    AppFile(std::string user1, std::string user2) {
        this->user1 = user1;
        this->user2 = user2;
    }

    std::string getUser1() {
        return user1;
    }
    std::string getUser2() {
        return user2;
    }

    void setUser1(std::string user) {
        this->user1 = user;
    }
    void setUser2(std::string user) {
        this->user2 = user;
    }

};