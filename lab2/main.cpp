//I had to rename this from ListProcessor.cpp because main is required
//or something like that
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.cpp"


int main()
{
    List cows;
    cout << "cows list  :  " << cows << endl << endl;

    cows.insertAsFirst(1.23);
    cows.insertAsFirst(2.34);
    cout << "cows list  :  " << cows << endl << endl;

    cows.removeFirst();
    cout << "cows list  :  " << cows << endl << endl;

    List horses(cows);
    cout << "cows list  :  " << cows << endl;
    cout << "horses list:  " << horses << endl << endl;

    horses.removeFirst();
    horses.insertAsFirst(5.67);
    cows.insertAsFirst(6.78);
    cout << "cows list  :  " << cows << endl;
    cout << "horses list:  " << horses << endl << endl;

    List pigs;
    cout << "cows list  :  " << cows << endl;
    cout << "horses list:  " << horses << endl;
    cout << "pigs list  :  " << pigs << endl << endl;

    pigs = cows;
    cout << "cows list  :  " << cows << endl;
    cout << "horses list:  " << horses << endl;
    cout << "pigs list  :  " << pigs << endl << endl;

    pigs = horses;
    cout << "cows list  :  " << cows << endl;
    cout << "horses list:  " << horses << endl;
    cout << "pigs list  :  " << pigs << endl << endl;

    cout << "End of code" << endl;
    //system("PAUSE");
    return 0;
}
