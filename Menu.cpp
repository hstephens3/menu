#include <iostream>
using namespace std;

int main ()
{
    int quantity;
    int choice;
//Quantity
    int qRooms = 0, qPasta = 0, qBurger = 0, qNoodles = 0, qShake = 0, qChicken = 0;
//Food (items sold)
    int sRooms = 0, sPasta = 0, sBurger = 0; 
    int sNoodles = 0, sShake = 0, sChicken = 0;
//Total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout <<"\n\t Quantity of items we have: ";
    cout << "\n Rooms available: ";
    cin >> qRooms;
    cout << "\n Quantity of pasta: ";
    cin >> qPasta;
    cout << "\n Quantity of burger: ";
    cin >> qBurger;
    cout << "\n Quantity of noodles: ";
    cin >> qNoodles;
    cout << "\n Quantity of shakes: ";
    cin >> qShake;
    cout << "\n Quantity of chicken: ";
    cin >> qChicken;

    m: 
    cout << "\n\t\t\t Please select from the menu options: ";
    cout << "\n\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Burger";
    cout << "\n4) Noodles";
    cout << "\n5) Shake";
    cout << "\n6) Chicken";
    cout << "\n7) Information regarding sales and collection ";
    cout << "\n8) Exit";
    
    cout << "\n\n Please enter your choice! ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "\n\n Enter the number of rooms you want: ";

            cin >> quantity;
            if (qRooms-sRooms >= quantity)
            {
                sRooms = sRooms+quantity;
                Total_rooms= Total_rooms+quantity*1200;
                cout << "\n\n\t\t"<<quantity<<" room/rooms have been allocated to you!";
            }
            else 
            
                cout << "\n\t Only" << qRooms-sRooms << "Rooms remaining in hotel ";
                break;

        case 2:
            cout << "\n\n Enter pasta quantity: ";

            cin >> quantity;
            if (qPasta-sPasta >= quantity)
            {
                sPasta = sPasta+quantity;
                Total_pasta= Total_pasta+quantity*250;
                cout << "\n\n\t\t"<<quantity<<" pasta have been allocated to you!";
            }
            else 
            
                cout << "\n\t Only" << qPasta-sPasta << "Pasta remaining in hotel ";
                break;
                
        case 3:
            cout << "\n\n Enter burger quantity: ";

            cin >> quantity;
            if (qBurger-sBurger >= quantity)
            {
                sBurger = sBurger+quantity;
                Total_burger= Total_burger+quantity*120;
                cout << "\n\n\t\t"<<quantity<<" burger have been allocated to you!";
            }
            else 
            
                cout << "\n\t Only" << qBurger-sBurger << "Burger remaining in hotel ";
                break;

        case 4:
            cout << "\n\n Enter noodle quantity: ";

            cin >> quantity;
            if (qNoodles-sNoodles >= quantity)
            {
                sNoodles = sNoodles+quantity;
                Total_noodles= Total_noodles+quantity*140;
                cout << "\n\n\t\t"<<quantity<<" noodles have been allocated to you!";
            }
            else 
            
                cout << "\n\t Only" << qNoodles-sNoodles << "Noodles remaining in hotel ";
                break;
                
        case 5:
            cout << "\n\n Enter shake quantity: ";

            cin >> quantity;
            if (qShake-sShake >= quantity)
            {
                sShake = sShake+quantity;
                Total_shake= Total_shake+quantity*120;
                cout << "\n\n\t\t"<<quantity<<" shakes have been allocated to you!";
            }
            else 
            
                cout << "\n\t Only" << qShake-sShake << "Shakes remaining in hotel ";
                break;

        case 6:
            cout << "\n\n Enter chicken quantity: ";

            cin >> quantity;
            if (qChicken-sChicken >= quantity)
            {
                sChicken = sChicken+quantity;
                Total_chicken= Total_chicken+quantity*150;
                cout << "\n\n\t\t"<<quantity<<" chicken have been allocated to you!";
            }
            else 
            
                cout << "\n\t Only" << qChicken-sChicken << "Chicken remaining in hotel ";
                break;

        case 7:

        cout << "\n\t\tDetails of sales and collection ";
        cout << "\n\n Number of roooms we had: " << qRooms;
        cout << "\n\n Number of rooms we gave for rent: " << sRooms;
        cout << "\n\n Remaining rooms: " << qRooms-sRooms;
        cout << "\n\n Total rooms collection for the day: " << Total_rooms;

        cout << "\n\n Number of pasta we had: " << qPasta;
        cout << "\n\n Number of pastas we sold: " << sPasta;
        cout << "\n\n Remaining pasta: " << qPasta-sPasta;
        cout << "\n\n Total pasta collection for the day: " << Total_pasta;

        cout << "\n\n Number of burgers we had: " << qBurger;
        cout << "\n\n Number of burgers we sold: " << sBurger;
        cout << "\n\n Remaining burgers: " << qBurger-sBurger;
        cout << "\n\n Total burgers collection for the day: " << Total_burger;

        cout << "\n\n Number of noodles we had: " << qNoodles;
        cout << "\n\n Number of noodles we sold: " << sNoodles;
        cout << "\n\n Remaining noodles: " << qNoodles-sNoodles;
        cout << "\n\n Total noodles collection for the day: " << Total_noodles;

        cout << "\n\n Number of shakes we had: " << qShake;
        cout << "\n\n Number of shakes we sold: " << sShake;
        cout << "\n\n Remaining shakes: " << qShake-sShake;
        cout << "\n\n Total shakes collection for the day: " << Total_shake;

        cout << "\n\n Number of chicken we had: " << qChicken;
        cout << "\n\n Number of chicken we sold: " << sChicken;
        cout << "\n\n Remaining chicken: " << qChicken-sChicken;
        cout << "\n\n Total chicken collection for the day: " << Total_chicken;

        case 8:
            exit(0);

            default:
                cout << "\n Please select the numbers mentioned above!";

    }
     //Jump statement that takes you back to the menu after you have made you choice
    goto m; 


}