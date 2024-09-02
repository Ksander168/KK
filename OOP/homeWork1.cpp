#include <iostream>
#include <vector>
using namespace std;

class User
{
private:
    int id;
    string name;
    string email;
    string password;
    bool isDeleted;
    bool isVerified;

public:
    User(int id = 0, string name = "", string email = "", string password = "")
    {
        this->id = id;
        this->name = name;
        this->email = email;
        this->password = password;
        this->isDeleted = false;
        this->isVerified = false;
    }

    void Showinfo()
    {
        cout << "=========| Welcome |==============\n";
        cout << "1. Add user\n";
        cout << "2. Find user by ID\n";
        cout << "3. Delete user by ID\n";
        cout << "4. Exit\n";
    }

    void UserInput()
    {
        cout << "Enter User ID: ";
        cin >> id;
        cin.ignore(); 
        cout << "Enter User Name: ";
        cin>>name;
        cout << "Enter User Email: ";
        cin>>email;
        cout << "Enter User Password: ";
        cin>>password;
        cout << "User information has been verified.\n";
    }

    int getId() const {
         return id;
          }

    bool isUserDeleted() const {
         return isDeleted; 
         }

    void displayUserInfo() const
    {
        if (!isDeleted)
        {
            cout << "User ID: " << id << endl;
            cout << "User Name: " << name << endl;
            cout << "User Email: " << email << endl;
            cout << "User Password: " << password << endl;
        }
    }

    void deleteUser()
    {
        isDeleted = true;
        cout << "User deleted successfully.\n";
    }
};

int main()
{
    system("cls");
    vector<User> users;
    int choice;
    int n;

    do
    {
        if (!users.empty())
        {
            users[0].Showinfo(); 
        }
        else
        {
            User().Showinfo(); 
        }
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            system("cls");
            User newUser;
            newUser.UserInput();
            users.push_back(newUser);
            break;
        }
        case 2:
        {
            system("cls");
            cout << "Enter User ID: ";
            cin >> n;
            bool found = false;
            for (const auto &user : users)
            {
                if (user.getId() == n && !user.isUserDeleted())
                {
                    user.displayUserInfo();
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "User Not Found\n";
            }
            break;
        }
        case 3:
        {
            system("cls");
            cout << "Enter User ID: ";
            cin >> n;
            bool found = false;
            for (auto &user : users)
            {
                if (user.getId() == n && !user.isUserDeleted())
                {
                    user.deleteUser();
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "User Not Found\n";
            }
            break;
        }
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!";
        }
    } while (choice != 4);

    return 0;
}
