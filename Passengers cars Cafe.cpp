#include <iostream>
#include <vector>

using namespace std;


class Human {
    string Name;
    string LastName;
    string Sex;
    int Age;
    
    public:
    
    void print()
    {
        cout << Name << " " << LastName << " " << Sex << " " << Age << endl;
    }
    
    Human(string p_name, string p_lastname, string p_sex, int p_age)
    {
        Name = p_name;
        LastName = p_lastname;
        Sex = p_sex;
        Age = p_age;
    }
    
    Human()
    {
        
    }
    
    
    void setName(string Name)
    {
        this->Name = Name;
    }

    string getName()
    {
        return Name;
    }
    
    void setLastName(string LastName)
    {
        this->LastName = LastName;
    }
    
    string getLastName()
    {
        return LastName;
    }
    
    void setSex(string Sex)
    {
        this->Sex = Sex;
    }
    
    string getSex()
    {
        return Sex;
    }
    
    void setAge(int Age)
    {
        this->Age = Age;
    }
    
    int getAge()
    {
        return Age;
    }

};


class Car{
    
    string Model;
    int Price;
    int Year;
    vector <Human> passengers;
    
    public:
    
    void setModel(string Model)
    {
        this->Model = Model;
    }

    string getModel()
    {
        return Model;
    }
    
    void setPrice(int Price){
        this->Price = Price;
    }
    
    int getPrice(){
        return Price;
    }
    
    void setYear(int Year){
        this->Year = Year;
    }
    
    int getYear(){
        return Year;
    }
    
    void setWorkers(vector <Human> passengers)
    {
        this->passengers = passengers;
    }
    
    void printWorkers()
    {
        for (Human human : passengers)
        {
            cout << human.getName() << endl;
            cout << human.getLastName() << endl;
            cout << human.getSex() << endl;
            cout << human.getAge() << endl;
        }
    }
    

};

int main()
{

    vector <Human> humans;
    int count;
    cout << "Сколько людей хотите добавить пасажиров?: ";
    cin >> count;
    
    for(int i = 0; i < count; i++){
        Human human;
        string name;
        cout << "Введите имя пасажира: ";
        cin >> name;
        human.setName(name);
        string lastname;
        cout << "Введите фамилию пасажира: ";
        cin >> lastname;
        human.setLastName(lastname);
        string sex;
        cout << "Введите пол пасажира: ";
        cin >> sex;
        human.setSex(sex);
        int age;
        cout << "Введите возраст пасажира: ";
        cin >> age;
        human.setAge(age);
        humans.push_back(human);
    }

    Car car;
    car.setModel("Model: BMW X5");
    car.setPrice(11000);
    car.setYear(2016);

    car.setWorkers(humans);
    
    cout << car.getModel() << endl;
    cout << car.getPrice() << endl;;
    cout << car.getYear() << endl;
    car.printWorkers();
    
    cout << endl;

    return 0;
}





