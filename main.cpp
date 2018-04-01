#include<iostream>
#include<sys/time.h>
#include<cstdlib>
#include<ctime>
using namespace std;
class parking
{
    struct timeval start_time;
    struct timeval end_time;
    int i=0;
    int p;
public:
    int cp(int o)
    {
        if(o==p)
        {
            return -1;
        }
        else
        {
            return -2;
        }
    }
    void occupy()
    {
        i=1;
        gettimeofday(&start_time,NULL);
    }
    void vacant()
    {
        i=0;
        gettimeofday(&end_time,NULL);
    }
    long calc()
    {
        return((end_time.tv_sec)-(start_time.tv_sec));

    }
    void checkout(int n)
    {
        cout<<"\nSlot Occupied was "<<n<<"\nTime for which the Slot was occupied is "<<calc();
        cout<<"\nAmount to be paid :"<<float((.5*calc())/60);
    }
    int check(int n)
    {
        if(i==0)
        {
            return n;
        }
        else
        {
            return 0;
        }
    }
    int check()
    {
        if(i==1)
        {
            return i;
        }
        else return 2;
    }
    int check1()
    {
        if(i==0)
        {
            return 0;
        }
        else return 2;
    }
    parking()
    {
        
    }
};



int main()
{
    int area;
    parking a1[51],a2[26],a3[19],a4[20],a5[27];
repeat:
    cout<<"\nEnter the Area you are in...(1-5)\n";
    cin>>area;
    switch(area)
    {
        case 1:
            int i;
            cout<<"\nThe Available Parking Slots Are:\n";
            for(i=1;i<51;i++)
            {
                int j=(a1[i].check(i));
                if(j==0)
                {}
                else
                {
                    cout<<"\t"<<j<<"\t";
                }
            }
        repeat2:
            cout<<"\n1.Do u want to OCCUPY a Slot?\n2.Do u want to VACANT a Slot?\n";
            cin>>i;
            switch(i)
        {
            case 1:
            repeat3:
                cout<<"\nWhich slot do you want to select?\n";
                for(i=1;i<51;i++)
                {
                    int j=(a1[i].check(i));
                    if(j==0)
                    {
                        
                    }
                        else
                        {
                            cout<<"\t"<<j<<"\t";
                        }
                }
                cout<<"\n";
                cin>>i;
                if(a1[i].check1()==2)
                {
                    cout<<"\nThis slot is already occupied\n";
                    goto repeat3;
                }
                else
                {
                a1[i].occupy();
                goto repeat;
                }
                break;
            case 2:
            repeat1:{
                cout<<"\nWhich Slot is your Car in?\n";
                cin>>i;
                int n=i;
                if(a1[i].check()==2)
                {
                    cout<<"\nThis slot is vacant\n";
                    goto repeat1;
                }
                else
                {
                    a1[i].vacant();
                    a1[i].checkout(n);
                    goto repeat;
                }
                break;}
            default:
                cout<<"\nInvalid Input\n";
                goto repeat2;
                break;
                
        }
            break;
        case 2:
            int k;
            cout<<"\nThe Available Parking Slots Are:\n";
            for(int i=1;i<26;i++)
            {
                int j=(a1[i].check(i));
                if(j==0)
                {}
                else
                {
                    cout<<"\t"<<j<<"\t";
                }
            }
        repeat4:
            cout<<"\n1.Do u want to OCCUPY a Slot?\n2.Do u want to VACANT a Slot?\n";
            cin>>k;
            switch(k)
        {
            case 1:
            repeat5:
                cout<<"\nWhich slot do u select?\n";
                for(int i=1;i<26;i++)
                {
                    int j=(a1[i].check(i));
                    if(j==0)
                    {
                        
                    }
                    else
                    {
                        cout<<"\t"<<j<<"\t";
                    }
                }
                cout<<"\n";
                cin>>k;
                if(a1[k].check1()==2)
                {
                    cout<<"\nThis slot is already occupied\n";
                    goto repeat5;
                }
                else
                {
                    a1[k].occupy();
                    goto repeat;
                }
                break;
            case 2:
            repeat6:{
                cout<<"\nWhich Slot is your Car in?\n";
                cin>>k;
                int n=k;
                if(a1[k].check()==2)
                {
                    cout<<"\nThis slot is vacant\n";
                    goto repeat6;
                }
                else
                {
                    a1[k].vacant();
                    a1[k].checkout(n);
                    goto repeat;
                }
                break;}
            default:
                cout<<"\nInvalid Input\n";
                goto repeat4;
                break;
                
        }
            break;
        case 3:
            int l;
            cout<<"\nThe Available Parking Slots Are:\n";
            for(int i=1;i<19;i++)
            {
                int j=(a1[i].check(i));
                if(j==0)
                {}
                else
                {
                    cout<<"\t"<<j<<"\t";
                }
            }
        repeat8:
            cout<<"\n1.Do u want to OCCUPY a Slot?\n2.Do u want to VACANT a Slot?\n";
            cin>>l;
            switch(l)
        {
            case 1:
            repeat9:
                cout<<"\nWhich slot do u select?\n";
                for(int i=1;i<19;i++)
                {
                    int j=(a1[i].check(i));
                    if(j==0)
                    {
                        
                    }
                    else
                    {
                        cout<<"\t"<<j<<"\t";
                    }
                }
                cout<<"\n";
                cin>>l;
                if(a1[l].check1()==2)
                {
                    cout<<"\nThis slot is already occupied\n";
                    goto repeat9;
                }
                else
                {
                    a1[l].occupy();
                    goto repeat;
                }
                break;
            case 2:
            repeat7:{
                cout<<"\nWhich Slot is your Car in?\n";
                cin>>l;
                int n=l;
                if(a1[l].check()==2)
                {
                    cout<<"\nThis slot is vacant\n";
                    goto repeat7;
                }
                else
                {
                    a1[l].vacant();
                    a1[l].checkout(n);
                    goto repeat;
                }
                break;}
            default:
                cout<<"\nInvalid Input\n";
                goto repeat8;
                break;
                
        }
        case 4:
            int o;
            cout<<"\nThe Available Parking Slots Are:\n";
            for(int i=1;i<20;i++)
            {
                int j=(a1[i].check(i));
                if(j==0)
                {}
                else
                {
                    cout<<"\t"<<j<<"\t";
                }
            }
        repeat11:
            cout<<"\n1.Do u want to OCCUPY a Slot?\n2.Do u want to VACANT a Slot?\n";
            cin>>o;
            switch(o)
        {
            case 1:
            repeat12:
                cout<<"\nWhich slot do u select?\n";
                for(int i=1;i<20;i++)
                {
                    int j=(a1[i].check(i));
                    if(j==0)
                    {
                        
                    }
                    else
                    {
                        cout<<"\t"<<j<<"\t";
                    }
                }
                cout<<"\n";
                cin>>o;
                if(a1[o].check1()==2)
                {
                    cout<<"\nThis slot is already occupied\n";
                    goto repeat12;
                }
                else
                {
                    a1[o].occupy();
                    goto repeat;
                }
                break;
            case 2:
            repeat10:{
                cout<<"\nWhich Slot is your Car in?\n";
                cin>>o;
                int n=o;
                if(a1[o].check()==2)
                {
                    cout<<"\nThis slot is vacant\n";
                    goto repeat10;
                }
                else
                {
                    a1[o].vacant();
                    a1[o].checkout(n);
                    goto repeat;
                }
                break;}
            default:
                cout<<"\nInvalid Input\n";
                goto repeat11;
                break;
                
        }
        case 5:
            int p;
            cout<<"\nThe Available Parking Slots Are:\n";
            for(int i=1;i<27;i++)
            {
                int j=(a1[i].check(i));
                if(j==0)
                {}
                else
                {
                    cout<<"\t"<<j<<"\t";
                }
            }
        repeat14:
            cout<<"\n1.Do u want to OCCUPY a Slot?\n2.Do u want to VACANT a Slot?\n";
            cin>>p;
            switch(p)
        {
            case 1:
            repeat15:
                cout<<"\nWhich slot do u select?\n";
                for(int i=1;i<27;i++)
                {
                    int j=(a1[i].check(i));
                    if(j==0)
                    {
                        
                    }
                    else
                    {
                        cout<<"\t"<<j<<"\t";
                    }
                }
                cout<<"\n";
                cin>>p;
                if(a1[p].check1()==2)
                {
                    cout<<"\nThis slot is already occupied\n";
                    goto repeat15;
                }
                else
                {
                    a1[p].occupy();
                    goto repeat;
                }
                break;
            case 2:
            repeat13:{
                cout<<"\nWhich Slot is your Car in?\n";
                cin>>p;
                int n=p;
                if(a1[p].check()==2)
                {
                    cout<<"\nThis slot is vacant\n";
                    goto repeat13;
                }
                else
                {
                    a1[p].vacant();
                    a1[p].checkout(n);
                    goto repeat;
                }
                break;}
            default:
                cout<<"\nInvalid Input\n";
                goto repeat14;
                break;
                
        }
        default:
            cout<<"Invalid Input";
            goto repeat;
            break;
    }
    return 0;
}
