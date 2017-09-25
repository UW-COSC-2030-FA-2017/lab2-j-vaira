//Jasmine Vaira
//I had to rename this from ListProcessor.cpp because main is required
//or something like that
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.cpp"


int main()
{
    List cows;
    cows.listSize = 0;
    cout << "cows list  :  " << cows << endl;
    cout << "list size : " << cows.listSize << endl;
    cout << "list sum : " << cows.listSum() << "\n\n";

    cows.insertAsLast(5.18);
    cows.insertAsFirst(1.23);
    cows.insertAsFirst(2.34);
    //cows.insertAsLast(3.14);
    cout << "cows list  :  " << cows << endl;
    cout << "list size : " << cows.listSize << endl;
    cout << "list sum : " << cows.listSum() << "\n\n";

    cows.removeFirst();
    cout << "cows list  :  " << cows << endl;
    cout << "list size : " << cows.listSize << endl;
    cout << "list sum : " << cows.listSum() << "\n\n";

    List horses(cows);
    cout << "cows list  :  " << cows << endl;
    cout << "list size : " << cows.listSize << "\n";
    cout << "list sum : " << cows.listSum() << "\n";
    cout << "horses list :  " << horses << endl;
    cout << "list size : " << horses.listSize << "\n";
    cout << "list sum : " << horses.listSum() << "\n\n";

    horses.removeFirst();
    horses.insertAsFirst(5.67);
    cows.insertAsFirst(6.78);
    cout << "cows list  :  " << cows << endl;
    cout << "list size : " << cows.listSize << endl;
    cout << "list sum : " << cows.listSum() << "\n";
    cout << "horses list:  " << horses << endl;
    cout << "list size : " << horses.listSize << "\n";
    cout << "list sum : " << horses.listSum() << "\n\n";

    List pigs;
    pigs.listSize = 0;
    cout << "cows list  :  " << cows << endl;
    cout << "list size : " << cows.listSize << endl;
    cout << "list sum : " << cows.listSum() << "\n";
    cout << "horses list :  " << horses << endl;
    cout << "list size : " << horses.listSize << endl;
    cout << "list sum : " << horses.listSum() << "\n";
    cout << "pigs list  :  " << pigs << endl;
    cout << "list size : " << pigs.listSize << "\n";
    cout << "list sum : " << pigs.listSum() << "\n\n";

    pigs = cows;
    cout << "cows list  :  " << cows << endl;
    cout << "list size : " << cows.listSize << endl;
    cout << "list sum : " << cows.listSum() << "\n";
    cout << "horses list :  " << horses << endl;
    cout << "list size : " << horses.listSize << endl;
    cout << "list sum : " << horses.listSum() << "\n";
    cout << "pigs list  :  " << pigs << endl;
    cout << "list size : " << pigs.listSize << "\n";
    cout << "list sum : " << pigs.listSum() << "\n\n";

    pigs = horses;
    cout << "cows list  :  " << cows << endl;
    cout << "list size : " << cows.listSize << endl;
    cout << "list sum : " << cows.listSum() << "\n";
    cout << "horses list :  " << horses << endl;
    cout << "list size : " << horses.listSize << endl;
    cout << "list sum : " << horses.listSum() << "\n";
    cout << "pigs list  :  " << pigs << endl;
    cout << "list size : " << pigs.listSize << "\n";
    cout << "list sum : " << pigs.listSum() << "\n\n";

    cout << "End of code" << endl;
    //system("PAUSE");
    return 0;
}
