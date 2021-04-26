#include <iostream> using namespace std; #include<stdio.h> #include<conio.h> #include <fstream> #include<string.h> #include <map> #include <vector> void showavailable(); class car
{
private:
            Nchar regno[20];
           char name[50];
           char ac[5];
           int seats;
     public:
           int refno;
           float cost;
           void get()
           {
                cout<<"Enter register number of car:";
                gets(regno);
                cout<<"Enter the name of the car:"
                gets(name);
                cout<<" AC (y/n):";
gets(ac);
cout<<"Enter the number of seats in the car :";
cin>>seats;
                cin.ignore(255,'\n');
cout<<"Enter the cost of renting the car for one day: ";
cin>>cost;
                cin.ignore(255,'in');
           }
           İntger.seats()
           {
                return seats;
           }
           Void display()
           {
                Cout<<”REFERENECE NUMBER:”<<refno<<endl;
                Cout<<”Regno:”<<regno<<endl;
                Cout<<”Name:”<<name<<endl;
                Cout<<”Seats:”<<seats<<endl;
                Cout<<”AC:”<<ac<<endl;
                Cout<<”Cost per day:”<<cost<<endl;
           }
};
Class Customer
{
     Char cname[30];
     Char phno[20];
     Public:
           Intreq_seats;
           Car booked;
           Void cust_get()
           {
                Cout<<”Customer Name:”;
                Gets(cname);
                Cout<<”Phone Number:”;
                Gets(phno);
                Cout<<”Seats Required:”;
                cin>req seats;
                cin.ignore(255,In');
                showavailable();

           }
           void show()
           {
coutくく"Name: "<<cnameくくendl; coutくく"Phone Number: "<<phn0くくendl;
                cout"Car Booked:In";
                booked.display0;
           }
           void bill(int d)
           {
                cout<c"nBILLn"
                showO
                cout<<"Amount: Rs."<<d booked.cost<<endl;
}
};
map <int, vector<car>> available;
vector<car> unavailable
intmax_seats=8;
Customer New;
Customer cust[40];
Intcust_count=0;
void filecreate
{
     car c;
     ofstream f
     char op[3]:
     int count=/o
     fopen("cars4.dat" ios: outjios:binary)
     //cin ignore(255,’\n');
     Do
     {
           c.get0;
           c.refno-++count
           f.write((char )&c,sizeof(c));

cout<s"Do you want to enter details of another car? (1 for yes and 0 for no): "
           gets(op);
     }while( stremp(op,"I");
     f.close();
}
/*
void fileread()
{
     fstream fl;
     car s;
     fl.open("cars.dat", ios::injios:binary);
while(ค.read((char*)&s, sizeof(s))) s.display
     fl.close():
}
*/
void filecheck()
{
     fstream f;
     Customer a1;
     car b1;
     fopen("cars4.dat",ios::in | ios:binary):
     if(!f)
{
F.close();
           Filecreate()
     }
Else {
fclose();
/*f.open("count.dat", ios: int:ios:binary); f.write(char*)&cust_count, sizeof(cust_count)): fclose();

} }
void av() {
fopen("customer.dat", ios:inlios:binary)
whileff.read((char)&al, sizeoffal))
     cust[cust count++]-al;
fclose();
fopen("bcars.dat", ios: injios:binary):
while(f.read(char)&bl, sizeof(bl)
     unavailable.push back(bl);
fclose():
//vector<car>xyz
car y;
int j;
fstream f1;
for(j=1;j<=max_seats;j++)
{
f1.open("cars4.dat", ios::inlios::binary) vector<car> x
while(f1.read ((char*)&y, sizeof(y)))
{ if(y.get_seats()==j))
                x.push_back(y);
     }
     available[j]=x;
     f1.close();
}
for(j=1;j<=max_seats;j++)
{
      cout<<j<<"seats"<<endl;
      xyz=available[j];
     for(int i=0;i<xyz.size();i++)
                 xyz[i].display();
}

*/
     f1.close();
}
void dispfree()
{
    vector<car>xyz;
    int j,k,flag;
    for(j=1;j<=max_seats;j++)
    {
        xyz=available[j];
        if (xyz.size()>0)
        {
            cout<<j<<"seats"<<endl;
            for(int i=0;i<xyz.size();i++)
            {
} }
} }
void showavailable()
{
    int i,s,j;
    int flag=0,dontshow=0;
    vector<car>x1;
flag=0; for(k=0;k<unavailable.size();k++)
if(xyz[i].refno==unavailable[k].refno) {
flag=1;
break; }
if(flag==0)
    xyz[i].display();

    s=New.req_seats;
    x=available[s];
    for(i=0;i<x1.size();i++)
    {
        dontshow=0;
        for(j=0;j<unavilable.size();j++)
if(unavilabel[j].refno==x1[i].refno) dontshow=1;
        if(dontshow==0)
            x1[i].dislplay();
        cout<<"\n";
    }
getref:
cout<<"Enter the reference number of car that customer is booking:";
    cin>>New.booked.refno;
    for(i=0;i<x1.size();i++)
if(x1[i].refno==New.booked.refno) {
            New.booked=x1[i];
            unavailable.push_back(x1[i]);
            flag=1;
            break;
} }
void dispfree()
{
    vector<car>xyz;
    int j,k,flag;
    for(j=1;j<=max_seats;j++)
    {
        xyz=available[j];
        if (xyz.size()>0)
        {
cout<<j<<"seats"<<endl;

} }
} }
for(int i=0;i<xyz.size();i++)
{
flag=0; for(k=0;k<unavailable.size();k++)
if(xyz[i].refno==unavailable[k].refno) {
flag=1;
break; }
if(flag==0)
    xyz[i].display();
void showavailable()
{
    int i,s,j;
    int flag=0,dontshow=0;
    vector<car>x1;
    s=New.req_seats;
    x=available[s];
    for(i=0;i<x1.size();i++)
    {
        dontshow=0;
        for(j=0;j<unavilable.size();j++)
if(unavilabel[j].refno==x1[i].refno) dontshow=1;
        if(dontshow==0)
            x1[i].dislplay();
        cout<<"\n";
    }
getref:

cout<<"Enter the reference number of car that customer is booking:";
    cin>>New.booked.refno;
    for(i=0;i<x1.size();i++)
if(x1[i].refno==New.booked.refno) {
            New.booked=x1[i];
            unavailable.push_back(x1[i]);
            flag=1;
            break;
        }
    if(flag==0)
{
cout<<"Invalid reference number. Please enter again.\n\n"; gotogetref;
}
    cust[cust_count++]=New;
}
void show_booked()
{
    int i;
    for(i=0;i<cust_count;i++)
        cust[i].show();
}
void returncar()
{
    int i,j,days;
    customer returning;
cout<<"Enter the reference number of the car that is being returned:";
cin>>r; for(i=0;i<unavailable.size();i++)
        if(unavailable[i].refno==r)
            break;
unavailable.erase(unavailable.begin()+i);

    for(i=0;i<cust_count;i++)
        if(cust[i].booked.refno==r)
        {
            returnng=cust[i];
break; }
        for(j=i;j<cust_count-1;j++)
        {
            cust[j]=cust[j+1];
            cust_count--;
        }
cout<<"Enter the number of days for which car was rented:"; cin>>days;
cin.ignore(255,"\n");
returning.bill(days);
}
void exportp()
{
fstream;
customer a;
car b;
int i; f.open("customer.dat",ios::out|ios::binary); for(i=0;i<cust_count;i++)
{
a=cust[i];
        f.write((char*)&a,sizeof(a));
    }
f.close(); f.open("bcars.dat",ios::out|ios::binary); for(i=0;i<unavailable.size();i++)
{
        b=unavailable[i];
        f.write((char*)&b,sizeof(b));

}
f.close(); }
int main() {
    int option;
    filecheck();
    //fileread();
    cout<<"\n\n";
    av();
do {
cout<<"\n\n1. New car booking\n2. Car return\n3. View booked cars\n4. View available cars\n5. Exit\n\nEnter your option:";
        cin>>option;
        cin>>ignore(255,'\n');
        switch(option)
        {
} }
while(1); }

