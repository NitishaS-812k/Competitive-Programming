#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char day[10];
        cin>>n>>day;
        int mon,tues,wed,thurs,fri,sat,sun;
        if(n%7==0)
            mon=tues=wed=thurs=fri=sat=sun=4;
            else
            {
                 mon=tues=wed=thurs=fri=sat=sun=4;
                 if(strcmp(day,"mon")==0)
                    {
                        switch(n%7)
                    {
                        case 1: mon++;
                        break;
                        case 2: mon++;tues++;
                        break;
                        case 3: mon++;tues++;wed++;
                        break;
                    }

                    }
                    if(strcmp(day,"tues")==0)
                        {
                            switch(n%7)
                            {
                                case 1: tues++;
                                break;
                                case 2: tues++,wed++;
                                break;
                                case 3:tues++,wed++,thurs++;
                                break;

                            }
                        }
                        if(strcmp(day,"wed")==0)
                        {
                            switch(n%7)
                            {
                                case 1: wed++;
                                break;
                                case 2: wed++,thurs++;
                                break;
                                case 3: wed++,thurs++,fri++;
                                break;
                            }
                        }
                        if(strcmp(day,"thurs")==0)
                        {
                            switch(n%7)
                            {
                                case 1: thurs++;
                                break;
                                case 2: thurs++; fri++;
                                break;
                                case 3: thurs++;fri++;sat++;
                                break;

                            }
                        }
                        if(strcmp(day,"fri")==0)
                        {
                            switch(n%7)
                            {
                                case 1: fri++;
                                break;
                                case 2: fri++, sat++;
                                break;
                                case 3: fri++;sat++;sun++;
                                break;
                            }
                        }
                        if(strcmp(day,"sat")==0)
                        {
                            switch(n%7)
                            {
                                case 1: sat++;
                                break;
                                case 2: sat++;sun++;
                                break;
                                case 3: sat++;sun++;mon++;
                                break;
                            }
                        }
                        if (strcmp(day,"sun")==0)
                        {
                            switch(n%7)
                            {
                                case 1: sun++;
                                break;
                                case 2: sun++; mon++;
                                break;
                                case 3: sun++;mon++;tues++;
                                break;
                            }
                        }
                    }cout<<mon<<"\t"<<tues<<"\t"<<wed<<"\t"<<thurs<<"\t"<<fri<<"\t"<<sat<<"\t"<<sun<<endl;

            }
            return 0;


    }

