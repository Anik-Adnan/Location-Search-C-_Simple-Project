#include <bits/stdc++.h>
#include <fstream>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include<ctime>
using namespace std;
int main()
{
f:
    system("cls");

    string line;
    string fname;
    system("color 4e");

    cout<<"\t\t*** FIND THE LOCATION OF ANY UNIVERSITY,INSTITUTE OR HOSPITAL IN BANGLADESH ***\n\n\n";
    int choice;
    cout<<"1.Search any University or Institute Location."<<endl;
    cout<<"2.Add University or Institute Location."<<endl;
    cout<<"3.Search any Hospitals Location."<<endl;
    cout<<"4.Add Hospital Location."<<endl;
    cout<<"5.Exit"<<endl;

    cout<<endl<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
    {
        system("cls");
        system("color 57");
        ifstream funame,futhana,fudistrict,fudivision;
        funame.open("uname.txt",ios::out);
        futhana.open("uthana.txt",ios::out);
        fudistrict.open("udistrict.txt",ios::out);
        fudivision.open("udivision.txt",ios::out);

        cout<<"\t\t\t*** FIND THE LOCATION OF ANY UNIVERSITY,INSTITUTE OR HOSPITAL IN BANGLADESH ***\n\n\n";

        cout<<"\tEnter University or Institute Name : ";
        scanf("  ");
        getline(cin,fname);

        unsigned int linenum = 0;
        int same=0;
        while(getline(funame, line))
        {
            linenum++;

            if(line.compare(fname)==0)
            {
                same=1;
                break;
            }

        }
        cout<<endl<<endl;
        if(same==1)
        {
            cout<<"\t\t*** Location Found ***"<<endl<<endl;
            cout<<"\tUniversity   Name  : "<<fname<<endl;
            cout<<"\tThana        Name  : ";
            int i=1;
            while(getline(futhana, line))
            {
                if(i==linenum)
                {
                    cout<<line<<endl;
                    break;
                }
                i++;
            }
            cout<<"\tDistrict     Name  : ";
            i=1;
            while(getline(fudistrict, line))
            {
                if(i==linenum)
                {
                    cout<<line<<endl;
                    break;
                }
                i++;
            }
            cout<<"\tDivision     Name  : ";
            i=1;
            while(getline(fudivision, line))
            {
                if(i==linenum)
                {
                    cout<<line<<endl;
                    break;
                }
                i++;
            }
        }
        else
        {
            cout<<"\t\t Not Found any University or institute.Name  unmatched"<<endl;
        }
        cout<<endl<<endl;

        funame.close();
        futhana.close();
        fudistrict.close();
        fudivision.close();

        cout<<"1.Go to Previous menu..."<<endl;
        cout<<"2.Exit."<<endl<<endl;
        cout<<"Enter Your Choice  : "<<endl;
        cin>>choice;
        if(choice==1)
            goto f;
        if(choice==2)
            goto e;

        break;
    }
    case 2:
    {
        system("cls");
        system("color 57");
        cout<<"\t\t\t*** FIND THE LOCATION OF ANY UNIVERSITY,INSTITUTE OR HOSPITAL IN BANGLADESH ***\n\n\n";

        ofstream funame,futhana,fudistrict,fudivision;

        funame.open("uname.txt",ios::app);
        futhana.open("uthana.txt",ios::app);
        fudistrict.open("udistrict.txt",ios::app);
        fudivision.open("udivision.txt",ios::app);
        cout<<"\tEnter University or Institute Name : ";
        scanf("  ");
        getline(cin,line);
        funame<<line<<endl;
        cout<<"\tEnter  Thana     Name : ";
        getline(cin,line);
        futhana<<line<<endl;
        cout<<"\tEnter  District  Name : ";
        getline(cin,line);
        fudistrict<<line<<endl;
        cout<<"\tEnter  Division  Name : ";
        getline(cin,line);
        fudivision<<line<<endl;

        funame.close();
        futhana.close();
        fudistrict.close();
        fudivision.close();
        cout<<endl<<endl;


        cout<<"1.Go to Previous menu..."<<endl;
        cout<<"2.Exit."<<endl<<endl;
        cout<<"Enter Your Choice  : "<<endl;
        cin>>choice;
        if(choice==1)
            goto f;
        if(choice==2)
            goto e;

        break;
    }
    case 3:
    {
        system("cls");
        system("color 57");
        ifstream fhname,fhthana,fhdistrict,fhdivision;
        fhname.open("hname.txt",ios::out);
        fhthana.open("hthana.txt",ios::out);
        fhdistrict.open("hdistrict.txt",ios::out);
        fhdivision.open("hdivision.txt",ios::out);

        cout<<"\t\t\t*** FIND THE LOCATION OF ANY UNIVERSITY,INSTITUTE OR HOSPITAL IN BANGLADESH ***\n\n\n";

        cout<<"\tEnter Hospital Name  : ";
        scanf("  ");
        getline(cin,fname);

        unsigned int linenum = 0;
        int same=0;
        while(getline(fhname, line))
        {
            linenum++;

            if(line.compare(fname)==0)
            {
                same=1;
                break;
            }

        }
        cout<<endl<<endl;;
        if(same==1)
        {
            cout<<"\t\t*** Hospital Location Found ***"<<endl<<endl;
            cout<<"\tHospital     Name  : "<<fname<<endl;
            cout<<"\tThana        Name  : ";
            int i=1;
            while(getline(fhthana, line))
            {
                if(i==linenum)
                {
                    cout<<line<<endl;
                    break;
                }
                i++;
            }
            cout<<"\tDistrict     Name  : ";
            i=1;
            while(getline(fhdistrict, line))
            {
                if(i==linenum)
                {
                    cout<<line<<endl;
                    break;
                }
                i++;
            }
            cout<<"\tDivision     Name  : ";
            i=1;
            while(getline(fhdivision, line))
            {
                if(i==linenum)
                {
                    cout<<line<<endl;
                    break;
                }
                i++;
            }
        }
        else
        {
            cout<<"\t Not Found any Hospital"<<endl;
        }
        cout<<endl<<endl;

        fhname.close();
        fhthana.close();
        fhdistrict.close();
        fhdivision.close();

        cout<<"1.Go to Previous menu..."<<endl;
        cout<<"2.Exit."<<endl<<endl;
        cout<<"Enter Your Choice  : "<<endl;
        cin>>choice;
        if(choice==1)
            goto f;
        if(choice==2)
            goto e;

        break;
    }
    case 4:
    {
        system("cls");
        system("color 57");
        cout<<"\t\t\t*** FIND THE LOCATION OF ANY UNIVERSITY,INSTITUTE OR HOSPITAL IN BANGLADESH ***\n\n\n";

        ofstream fhname,fhthana,fhdistrict,fhdivision;

        fhname.open("hname.txt",ios::app);
        fhthana.open("hthana.txt",ios::app);
        fhdistrict.open("hdistrict.txt",ios::app);
        fhdivision.open("hdivision.txt",ios::app);
        cout<<"\tEnter Hospital  Name : ";
        scanf("  ");
        getline(cin,line);
        fhname<<line<<endl;
        cout<<"\tEnter  Thana   Name  : ";
        getline(cin,line);
        fhthana<<line<<endl;
        cout<<"\tEnter District Name : ";
        getline(cin,line);
        fhdistrict<<line<<endl;
        cout<<"\tEnter Division Name : ";
        getline(cin,line);
        fhdivision<<line<<endl;

        fhname.close();
        fhthana.close();
        fhdistrict.close();
        fhdivision.close();
        cout<<endl<<endl;


        cout<<"1.Go to Previous menu..."<<endl;
        cout<<"2.Exit."<<endl;
        cout<<"Your Choice : "<<endl;
        cin>>choice;
        if(choice==1)
            goto f;
        if(choice==2)
            goto e;

        break;
    }
e:
    case 5:
    {
        system("cls");
        system("color 4e");
        cout<<"\n\n\n\n\n\t\t\t\t\tThank You!!!\t\t\t"<<endl<<endl<<endl;
        getch();
        return 0;
        break;
    }
    }

    return 0;
}

