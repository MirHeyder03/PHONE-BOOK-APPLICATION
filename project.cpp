#include <iostream>
#include <windows.h>
using namespace std;
 
int menu()
{
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t--------------------------------------------\n";
    cout << "\t\t\t\t\t--------------------------------------------\n";
    cout << "\t\t\t\t\t|          PHONE BOOK APPLICATION          |\n";
    cout << "\t\t\t\t\t--------------------------------------------\n";
    cout << "\t\t\t\t\t|                                          |\n";
    cout << "\t\t\t\t\t|       [1]  Add Contacts                  |\n";
    cout << "\t\t\t\t\t|       [2]  Diplay All Contacts           |\n";
    cout << "\t\t\t\t\t|       [3]  Search by Number              |\n";
    cout << "\t\t\t\t\t|       [4]  Search by Name                |\n";
    cout << "\t\t\t\t\t|       [5]  Update                        |\n";
    cout << "\t\t\t\t\t|       [6]  delete                        |\n";
    cout << "\t\t\t\t\t|       [7]  Delete All                    |\n";
    cout << "\t\t\t\t\t|       [8]  Number of contacts            |\n";
    cout << "\t\t\t\t\t|                                          |\n";
    cout << "\t\t\t\t\t--------------------------------------------\n";
    cout << "\t\t\t\t\t|          [9]    Exit                     |\n";
    cout << "\t\t\t\t\t--------------------------------------------\n";
 
    int a;
    cin >> a;
    system("cls");
    return a;
}
 
int k = 0; // counter
 
int main()
{
    string name[100]; // 100 dene adlardan ibaret string array-i
    string no[100];   // 100 dene nomrelerden ibaret string array-i
    int check = 0;
    int total_contacts = 0;
    check = menu();
    do
    {
        // Add contacts
        if (check == 1)
        {
            cout << "\t\t\t\t\t\t Name :";
            cin >> name[k];
            cout << "\t\t\t\t\t\t Phone no :";
            cin >> no[k];
            k++;
            total_contacts++;
        }
 
        // Diplay contacts
        else if (check == 2)
        {
            for (int i = 0; i < 100; i++)
            {
                if (name[i] != "\0")
                {
                    cout << "\t\t\t\t\t Name :" << name[i] << "      Phone :" << no[i] << endl;
                }
            }
        }
        // Search by Number
        else if (check == 3)
        {
            string searched_number;
            cout << "\t\t\t\t\t enter number : ";
            cin >> searched_number;
            int check2 = 0; // flag
            for (int i = 0; i < 100; i++)
            {
                if (searched_number == no[i])
                {
                    cout << "\t\t\t\t\tNumber is Found\n";
                    cout << "\t\t\t\t\tName : " << name[i] << "       Phone : " << no[i] << endl;
                    check2++;
                }
            }
            if (check2 == 0)
            {
                cout << "\t\t\t\t\t This Number is Not found in your contact list\n";
            }
        }
        // Search By Name
        else if (check == 4)
        {
            string searched_name;
            cout << "\t\t\t\t\t enter name : ";
            cin >> searched_name;
            int check2 = 0;
            for (int i = 0; i < 100; i++)
            {
                if (searched_name == name[i])
                {
                    cout << "\t\t\t\t\tName is Found\n";
                    cout << "\t\t\t\t\tName : " << name[i] << "       Phone : " << no[i] << endl;
                    check2++;
                }
            }
            if (check2 == 0)
            {
                cout << "\t\t\t\t\t This name is Not found in your contact list\n";
            }
        }
        // Update
        else if (check == 5)
        {
            string searched_name, new_name, new_number;
            cout << "\t\t\t\t\t enter name : ";
            cin >> searched_name;
            int check2 = 0;
            for (int i = 0; i < 100; i++)
            {
                if (searched_name == name[i])
                {
                    cout << "\t\t\t\t\t New Name : ";
                    cin >> new_name;
                    cout << "\t\t\t\t\t New Number : ";
                    cin >> new_number;
                    name[i] = new_name;
                    no[i] = new_number;
                    check2++;
                    cout << "\t\t\t\t\tUpdated Successfully ";
                }
            }
            if (check2 == 0)
            {
                cout << "\t\t\t\t\t This name is Not found in your contact list\n";
            }
        }
        // delete
        else if (check == 6)
        {
            string searched_name;
            cout << "\t\t\t\t\t For Delete Enter Name : ";
            cin >> searched_name;
            int check2 = 0;
            for (int i = 0; i < 100; i++)
            {
                if (searched_name == name[i])
                {
                    cout << "\t\t\t\t\tDeleted Successfully\n";
                    cout << "\t\t\t\t\tName : " << name[i] << "       Phone : " << no[i] << endl;
                    name[i] = "\0";
                    no[i] = "\0";
                    check2++;
                    total_contacts--;
                }
            }
            if (check2 == 0)
            {
                cout << "\t\t\t\t\t This name is Not found in your contact list\n";
            }
        }
        // delete All
        else if (check == 7)
        {
 
            cout << "\t\t\t\t\t All Deleted Successfully\n";
            for (int i = 0; i < k; i++)
            {
                name[i] = "\0";
                no[i] = "\0";
            }
            k = 0;
            total_contacts = 0;
        }
        // Diplay numbers of contacts
        else if (check == 8)
        {
            cout << "\t\t\t\t\tTotal Number of contact list are : " << total_contacts << endl;
        }
 
        check = menu();
 
    } while (check != 9);
}
 
