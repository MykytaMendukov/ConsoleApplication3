#include "user.h"

int main()
{

    //   string* login = new string("my_login");
    //    string* password = new string("my_password");

    string* login = new string("  fff   ");
    string* password = new string("123   ");
    string* email = new string("example.com");
    string* phone = new string("098123123");

    /*
    User* new_user1 = new User(login);

    User* new_user2 = new User(login, password);

    User* new_user3 = new User(login, password, email);
    */


    User* new_user4 = new User(login, password, email, phone);

}

