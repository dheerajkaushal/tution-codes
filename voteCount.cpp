#include<iostream>
using namespace std;
class AamAdmiParty;
class Congress;
class Bjp
{
    int valueCount;
    int candidateID;
    public:
    void setID(int candiID);
    void countValue();
    int getCount();
    int getID();
};
class Congress
{
    int valuecount;
    int candidateID;
    public:
    void setID(int candiID);
    void countValue();
    int getCount();
    int getID();
};
class AamAdmiParty
{
    int valuecount;
    int candidateID;
    public:
    void setID(int candiID);
    void countValue();
    int getCount();
    int getID();
};
void Bjp::setID(int candiID)
{
    candidateID=candiID;
    valueCount=0;
}
void Bjp::countValue()
{
    valueCount++;
}
int Bjp::getCount()
{
    return(valueCount);
}
int Bjp::getID()
{
    return(candidateID);
}
void Congress::setID(int candiID)
{
    candidateID=candiID;
    valuecount=0;
}
void Congress::countValue()
{
        valuecount++;
}
int Congress::getCount()
{
    return(valuecount);
}
int Congress::getID()
{
    return(candidateID);
}
void AamAdmiParty::setID(int candiID)
{
    candidateID=candiID;
    valuecount=0;
}
void AamAdmiParty::countValue()
{
    valuecount++;
}
int AamAdmiParty::getCount()
{
    return(valuecount);
}
int AamAdmiParty::getID()
{
    return(candidateID);
}
int main()
{
    Bjp obj1;
    Congress obj2;
    AamAdmiParty obj3;
    int option,candidateID1,candidateID2,candidateID3,party1,party2,party3;
    cout<<"Enter candidateID 1 :";
    cin>>candidateID1;
    cout<<"Enter candidateID 2 :";
    cin>>candidateID2;
    cout<<"Enter candidateID 3 :";
    cin>>candidateID3;
    obj1.setID(candidateID1);
    obj2.setID(candidateID2);
    obj3.setID(candidateID3);
    while(1)
    {
        cout<<"\n\tOption(1) for Bjp. \n\tOption(2) for congress.\n\tOption(3) for Aam Admi Party.";
        cout<<"\n\tEnter your option:";
        cin>>option;
        if(option==1)
        {
            obj1.countValue();
        }
        else if(option==2)
        {
            obj2.countValue();
        }
        else if(option==3)
        {
            obj3.countValue();
        }
        else if(option==4)
        {
            cout<<"Exit"<<endl;
            break;
        }
        else{
            cout<<"no option";
        }
    }
    party1=obj1.getCount();
    party2=obj2.getCount();
    party3=obj3.getCount();
    if(party1>party2)
    {
        if(party1>party3)
        {
            if(party2>party3)
            {
                cout<<"1."<<candidateID1<<"vote:"<<party1<<endl;
                cout<<"2."<<candidateID2<<"vote:"<<party2<<endl;
                cout<<"3."<<candidateID3<<"vote:"<<party3;
            }
            else if(party2<party3)
            {
                cout<<"1."<<candidateID1<<"vote:"<<party1<<endl;
                cout<<"2."<<candidateID3<<"vote:"<<party3<<endl;
                cout<<"3."<<candidateID2<<"vote:"<<party2;
            }
            else
            {
                cout<<"1."<<candidateID1<<"vote:"<<party1<<endl;
                cout<<"2."<<candidateID2<<"vote:"<<party2<<endl;
                cout<<"2."<<candidateID3<<"vote:"<<party3;
            }
        }
        else if(party1<party3)
        {
             cout<<"1."<<candidateID3<<"vote:"<<party3<<endl;
             cout<<"2."<<candidateID1<<"vote:"<<party1<<endl;
             cout<<"3."<<candidateID2<<"vote:"<<party2;
        }
        else
        {
             cout<<"1."<<candidateID1<<"vote:"<<party1<<endl;
             cout<<"1."<<candidateID2<<"vote:"<<party3<<endl;
             cout<<"3."<<candidateID3<<"vote:"<<party2;
        }
    }
    else if(party1<party2)
    {
        if(party1>party3)
        {
             cout<<"1_Place."<<candidateID2<<"vote:"<<party2<<endl;
             cout<<"2_Place."<<candidateID1<<"vote:"<<party1<<endl;
             cout<<"3_Place."<<candidateID3<<"vote:"<<party3;
        }
        else if(party1<party3)
        {
            if(party2>party3)
            {
                cout<<"1_Place."<<candidateID2<<"vote:"<<party2<<endl;
                cout<<"2_Place."<<candidateID3<<"vote:"<<party3<<endl;
                cout<<"3_Place."<<candidateID1<<"vote:"<<party1;
            }
            else if(party2<party3)
            {
                cout<<"1_Place."<<candidateID3<<"vote:"<<party3<<endl;
                cout<<"2_Place."<<candidateID2<<"vote:"<<party2<<endl;
                cout<<"3_Place."<<candidateID1<<"vote:"<<party1;
            }
            else
            {
                cout<<"1_Place."<<candidateID2<<"vote:"<<party2<<endl;
                cout<<"1_Place."<<candidateID3<<"vote:"<<party3<<endl;
                cout<<"2_Place."<<candidateID1<<"vote:"<<party1;
            }
        }
        else
        {
            cout<<"1_Place."<<candidateID2<<"vote:"<<party2<<endl;
            cout<<"2_Place."<<candidateID1<<"vote:"<<party1<<endl;
            cout<<"2_Place."<<candidateID3<<"vote:"<<party3;
        }
    }
    else
    {
        if(party1>party3)
        {
            cout<<"1_Place."<<candidateID1<<"vote:"<<party1;
            cout<<"1_Place."<<candidateID2<<"vote:"<<party2;
            cout<<"2_Place."<<candidateID3<<"vote:"<<party3;
        }
        else if(party1<party3)
        {
            cout<<"1_Place."<<candidateID3<<"vote:"<<party3;
            cout<<"2_Place."<<candidateID1<<"vote:"<<party1;
            cout<<"2_Place."<<candidateID2<<"vote:"<<party2;
        }
        else
        {
            cout<<"1_Place."<<candidateID1<<"vote:"<<party1;
            cout<<"1_Place."<<candidateID2<<"vote:"<<party2;
            cout<<"1_Place."<<candidateID3<<"vote:"<<party3;
        }
    }
}