#include <iostream>
using namespace std;

class Animal
    {
        public:

            string AnimalName;
            string AnimalType;
            int AnimalPrice;

                     Animal(string N,string T,int P)
                        {
                            AnimalName = N;
                            AnimalType = T;
                            AnimalPrice = P;

                            cout<<"\n"<<"-----Animal Name : "<<N<<"\n"<<"------Animal type : "<<T<<"\n"<<"-----Animal Price : "<<P<<"\n";
                        }
    };

class Food
    {
        public:
            string FoodType;
            int FoodPrice;
            int FoodQty;

                Food(string T,int P,int Q)
                    {
                        FoodType = T;
                        FoodPrice = P;
                        FoodQty = Q;

                        cout<<"\n"<<"-----Food Type : "<<T<<"\n"<<"-----Food Price : "<<P<<"\n"<<"-----Food quantity : "<<Q<<"\n";
                    }
    };

class Staff
    {
        public:

        string StaffJob;
        int StaffPrice;

            Staff(string J,int P)
                {
                    StaffJob = J;
                    StaffPrice = P;

                    cout<<"\n"<<"-----Staff Job : "<<J<<"\n"<<"-----Staff Price : "<<P<<"\n";
                }
    };

class Tourists
    {
        public:

        string TouristsAgeGroup;
        int TouristsValue;

            Tourists(string Ag,int V)
                {
                    TouristsAgeGroup = Ag;
                    TouristsValue = V;

                    cout<<"\n"<<"-----Visitor age group : "<<Ag<<"\n"<<"-----Visitor ticket value : "<<V<<" $"<<"\n";
                }
    };

class WeekDays
    {
        public:
            string DayName;
            int ChildQty;
            int AdultQty;
            int ElderQty;

            void Calamity()
                {
                    cout<<"\n"<<"-----Everything was all right this day";
                }

                    WeekDays(string N,int C,int A,int E)
                        {
                            DayName = N;
                            ChildQty = C;
                            AdultQty = A;
                            ElderQty = E;

                            cout<<"\n"<<"-----Name of the day : "<<N<<"\n"<<"-----Number of Children : "<<C<<"\n"<<"-----Number of adults : "<<A<<"\n"<<"-----Number of elders : "<<E<<"\n";
                        }
    };

class AnimalManage
    {
        public:

            int AnimalNr;
            int MaintainPrice;

                AnimalManage(int N,int M)
                {
                    AnimalNr = N;
                    MaintainPrice = M;

                    cout<<"\n"<<"-----Total Number of animals : "<<N<<"\n"<<"-----Maintain price per week"<<M<<"\n";
                }

    };

class CageType
    {
        public:

            string CageName;
            int NrOfAnimals;

                CageType(string C,int N)
                    {
                           CageName = C;
                           NrOfAnimals = N;

                           cout<<"-----The type of cage : "<<C<<"\n"<<"-----Number of animals in cage : "<<N<<"\n";
                    }
    };

class Economy
    {
    public:
            int WeekName;
            int MGain;
            int MLost;
            int NetWorth;

                Economy(int w,int g,int l,int n)
                    {
                        WeekName = w;
                        MGain = g;
                        MLost = l;
                        NetWorth = n;

                        cout<<"\n"<<"-----Week number : "<<w<<"\n"<<"-----Money Gained : "<<w<<"\n"<<"-----Money Lost : "<<l<<"\n"<<"-----Net Worth  : "<<n<<"\n";
                    }
    };

class Rain : public WeekDays
    {
        public:
            void Calamity()
                {
                    cout<<"\n"<<"-----Today rained and no one came";
                }

                    Rain(string n, int c, int a, int e) : WeekDays(n, c, a, e) {

                        }

    };

class FreeDay : public WeekDays
    {
        public:
            void Calamity()
            {
                cout<<"\n"<<"-----Today was a free day";
            }

            FreeDay(string na, int ci, int ad, int el) : WeekDays(na, ci+10, ad+10, el+10) {

            }
    };
int main()
{
    Animal LionObj("Lion","Carnivore",100);
    Animal DeerObj("Deer","herbivore",60);
    Animal BearObj("Bear","Omnivore",85);

    Food MeatObj("Meat",10,25);
    Food WeedObj("Greens",3,15);

    Staff JanitorObj("Janitor",10);
    Staff CaretakerObj("Caretaker",20);
    Staff Guide("Guide",15);

    Tourists KidObj("Children",3);
    Tourists AdultObj("Adult",5);
    Tourists ElderObj("Elder",2);

    WeekDays MondayObj("Monday",15,5,2);
    MondayObj.Calamity();
    WeekDays TuesdayObj("Tuesday",17,3,6);
    TuesdayObj.Calamity();
    WeekDays WednesdayObj("Wednesday",13,5,1);
    WednesdayObj.Calamity();
    WeekDays ThursdayObj("Thursday",21,6,8);
    ThursdayObj.Calamity();
    WeekDays FridayObj("Friday",34,12,15);
    FridayObj.Calamity();
    WeekDays SaturdayObj("Saturday",104,67,45);
    SaturdayObj.Calamity();
    WeekDays SundayObj("Sunday",140,97,51);
    SaturdayObj.Calamity();

    AnimalManage TotalNr(3,75);

    CageType Default("Default",1);
    CageType Medium("Medium",2);
    CageType Big("Large",3);

    Economy Week1(1,250,100,150);
    Economy Week2(2,300,400,-100);
    Economy Week3(3,320,240,80);
    Economy Week4(4,300,20,280);

    Rain MondayR("Monday",0,0,0);
    MondayR.Calamity();
    Rain TuesdayR("Tuesday",0,0,0);
    TuesdayR.Calamity();
    Rain WednesdayR("Wednesday",0,0,0);
    WednesdayR.Calamity();
    Rain ThursdayR("Thursday",0,0,0);
    ThursdayR.Calamity();
    Rain FridayR("Friday",0,0,0);
    FridayR.Calamity();
    Rain SaturdayR("Saturday",0,0,0);
    SaturdayR.Calamity();
    Rain SundayR("Sunday",0,0,0);
    SundayR.Calamity();


    FreeDay MondayF("Monday",0,0,0);
    MondayF.Calamity();
    FreeDay TuesdayF("Tuesday",0,0,0);
    TuesdayF.Calamity();
    FreeDay WednesdayF("Wednesday",0,0,0);
    WednesdayF.Calamity();
    FreeDay ThursdayF("Thursday",0,0,0);
    ThursdayF.Calamity();
    FreeDay FridayF("Friday",0,0,0);
    FridayF.Calamity();
    FreeDay SaturdayF("Saturday",0,0,0);
    SaturdayF.Calamity();
    FreeDay SundayF("Sunday",0,0,0);
    SundayF.Calamity();
    return  0 ;
}
