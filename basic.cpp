/*#include<iostream>
using namespace std;
int main()
{
    int ar[]={2,1,3,9,2,4,-10,-9,1,3};
    int ar1[10];
    int j,k,i,p,s=0,q=0;
    for(p=0;p<9;p++)
    {
        for(i=0;i<9;i=i+3)
        {
            j=i+1;
            k=j+1;
            s+=ar[i]+ar[j]+ar[k];
            cout<<s<<endl;
        }
        ar1[q++]=s;
    }
    //for(int i=0;i<9;i++)
    //cout<<ar1[i]<<",";


    return 0;
}*//*
#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"enter a string"<<endl;
    cin>>s;
    char ch;
    cout<<endl<<"enter character u wanna find";
    cin>>ch;
    int f=0,p=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==ch)
        {
            f=1;
            p=i;
            break;
        }
    }
    if(f==1)
        cout<<"found at index:"<<p<<endl;
    else
        cout<<"not found";

    return 0;
}*//*
//class
#include<iostream>
using namespace std;
//struct employee   //we have to make variable of structure
class employee      //we have to make object of class
{
    private:
        int id;
        string nm,cnm;
        float sal;
    public:

        void setID(int a)
        {
            id=a;
        }
        void setName(string n)
        {
            nm=n;
        }
        void setCompName(string cn)
        {
            cnm=cn;
        }
        void setSalary(float k)
        {
            sal=k;
        }
        int getID()
        {
            return id;
        }
        string getName()
        {
            return nm;

        }
        string getCompName()
        {
            return cnm;
        }
        float  getSalary()
        {
            return sal;
        }
        void display()
        {
            cout<<"employee info"<<endl;
            cout<<"id:"<<id<<endl;
            cout<<"name:"<<nm<<endl;
            cout<<"company name:"<<cnm<<endl;
            cout<<"Salary:"<<sal<<endl;
        }
};
int main()
{
    employee e1;
    e1.setID(34);
    e1.setName("manya");
    e1.setCompName("google");
    e1.setSalary(236800.67);
    int a=e1.getID();
    cout<<"id:"<<a<<endl;
    string s=e1.getName();
    cout<<"name:"<<s<<endl;
    string s2=e1.getCompName();
    cout<<"company name:"<<s2<<endl;
    float sl=e1.getSalary();
    cout<<"salary:"<<sl<<endl;
    e1.display();

    return 0;
}*/
//Q)An electricity board charges the following rates to domestic users to discourage large consumption of energy For the first 100 units:-60 Paisa per unit For the next 200 units -80 Paisa per unit 1.
//Beyond 300 units:-90 Paisa per unit All users are charged a minimum of Rs 50 f the total amount is more than Rs 300 then an additional surcharge of 15%, is added Implement a C++ program to read the names of users and number of units consumed and display the charges with names
#include<iostream>
using namespace std;
class bill
{
    float amt=50;
    int unit;
    string name;
    public:

        void setDetails(string n,int a)
        {
            name=n;
            unit=a;
        }
        int calBill()
        {
            if(unit<=100)
                amt+=unit*0.60;
            else if(unit<=300)
                amt+=(unit-100)*0.80+(100*0.60);
            else if(unit>300)
                amt+=(unit-300)*0.90+(100*0.60+200*0.80);

            cout<<"amt:"<<amt<<endl;
            if(amt>300)
            {
               amt=amt+amt*0.15;
            }
            return amt;
        }
        void showBill()
        {
            cout<<name<<" use unit "<<unit<<" your bill is:"<<amt;
        }
};
int main()
{
    int un;
    string nm;
    cout<<"enter a name";
    cin>>nm;
    cout<<endl<<"enter unit";
    cin>>un;

    bill b1;
    b1.setDetails(nm,un);
    b1.calBill();
    b1.showBill();
}/*
#include<iostream>
using namespace std;
class bill
{
    private:
    int nod,rno;
    string nm;
    int tariff;
    float amt;
    void calc()
    {
        amt=nod*tariff;
        if(amt>10000)
            amt=amt*1.05;
    }
    public:
        void checkIn(int d,int rn,int rt,string n)
        {
            nm=n;
            nod=d;
            rno=rn;
            tariff=rt;
        }
        void tt()
        {
            calc();
        }
        void checkOut()
        {
            cout<<"name:"<<nm<<endl<<"no of days u stayed"<<nod<<endl<<"total bill"<<amt;
        }

};
int main()
{
    int d,rno;
    string s;
    int rt;

    cout<<"enter name";
    cin>>s;
    cout<<endl<<"enter of days";
    cin>>d;
    cout<<endl<<"enter room no";
    cin>>rno;
    cout<<endl<<"enter per day rent";
    cin>>rt;

    bill b1;
    b1.checkIn(d,rno,rt,s);
    b1.tt();
    b1.checkOut();
}*/
