<<<<<<< Updated upstream
#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>

using namespace std;

int main(){
    int a,b=0;
    fstream datoteka;
    string *imePrezime=new string[101];
    datoteka.open("C:\\Users\\Sokol\\Documents\\imenik.txt");
    string bla;
    while(getline(datoteka, bla)){
        imePrezime[b]=bla;
        cout<<bla<<endl;
        b++;
    }
    datoteka.close();
    cin>>a;
    cin.ignore();
    for(int i=0;i<a;i++)
        getline(cin,imePrezime[i+b]);
    sort(imePrezime,imePrezime+a+b);
    datoteka.open("C:\\Users\\Sokol\\Documents\\imenik.txt",ios::in|ios::out|ios::trunc);
    for(int i=0;i<a+b;i++)
        datoteka<<imePrezime[i]<<endl;
=======
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b = 0;
    fstream datoteka;
    string *imePrezime = new string[101];
    datoteka.open("C:\\Users\\Sokol\\Documents\\imenik.txt");
    string bla;
    while (getline(datoteka, bla))
    {
        imePrezime[b] = bla;
        cout << bla << endl;
        b++;
    }
    datoteka.close();
    cin >> a;
    cin.ignore();
    for (int i = 0; i < a; i++)
        getline(cin, imePrezime[i + b]);
    sort(imePrezime, imePrezime + a + b);
    datoteka.open("C:\\Users\\Sokol\\Documents\\imenik.txt", ios::in | ios::out | ios::trunc);
    for (int i = 0; i < a + b; i++)
        datoteka << imePrezime[i] << endl;
>>>>>>> Stashed changes
    datoteka.close();
    return 0;
}
