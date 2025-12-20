#include <iostream>

using namespace std;

const int total_products = 20;

void display_available_products(int products[])
{
    bool found = false;
    for (int i = 0; i < total_products; i++)
    {
        if (products[i] > 0)
        {
            cout << "products id : " << i + 1 << endl;
            cout << "quantity : " << products[i];
            cout << endl
                 << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "none!";
    }
    cout << endl;
}

void display_out_of_stock(int products[])
{
    bool found = false;
    for (int i = 0; i < total_products; i++)
    {
        if (products[i] == 0)
        {
            cout << "product id : " << i + 1 << endl;
            cout << "no stock available of this id";
            cout << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "none!";
    }
    cout << endl;
}

int main()
{
    int choice;
    int products[total_products] = {0};
    int product_id;
    int quantity;

    do
    {
        cout << "\n------inventory stock management------\n";
        cout << "1-add stock.\n";
        cout << "2-sell product\n";
        cout << "3-display available stock\n";
        cout << "4-display out of stock products\n";
        cout << "5-reset all stock\n";
        cout << "6-exit the program.\n";

        cout << "enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "enter product id : ";
            cin >> product_id;
            if (product_id < 1 || product_id > 10)
            {
                cout << "invlid product id .";
            }
            else
            {
                cout << "enter quantity to add : ";
                cin >> quantity;
                products[product_id - 1] += quantity;
                cout << "stock added successfully.";
                cout << endl;
            }
            break;

        case 2:
            cout << "enter product id : ";
            cin >> product_id;
            if (product_id < 1 || product_id > 10)
            {
                cout << "invalid product id .";
            }
            else
            {
                if (products[product_id - 1] == 0)
                {
                    cout << "out of stock..";
                }
                else
                {
                    cout << "enter quantity you want to buy : ";
                    cin >> quantity;
                    if (quantity > products[product_id - 1])
                    {
                        cout << "rejected the sold because enough amount of quantity is not available..";
                    }
                    else
                    {
                        products[product_id - 1] -= quantity;
                        cout << "sold succeessfull";
                    }
                }
            }
            break;

        case 3:
            display_available_products(products);
            break;

        case 4:
            display_out_of_stock(products);
            break;

        case 5:
            products[total_products] = {0};
            break;

        case 6:
            cout << "exiting the program ..";
            return 0;
        }
    } while (choice != 6);

    return 0;
}