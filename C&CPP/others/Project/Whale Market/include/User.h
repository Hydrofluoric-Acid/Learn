#include <string>
#include <fstream>

class User {
private:
    std::string user_name, password;

public:
    User(std::string user_name, std::string password);
    void writeIn();
};

void UserLogin();