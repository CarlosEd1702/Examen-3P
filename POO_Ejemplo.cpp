// POO_Ejemplo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
using namespace std;

class Pet
{
public:
    Pet(int hunger = 0, int boredom = 0);
    void Talk();
    void Eat(int food = 4);
    void Play(int fun = 4);
    void GoforaWalk(int fun = 4);
    void ShowNeeds(int mood, int hunger, int boredom);
    void Die();
    void SetHunger(int hunger);
    void SetBoredom(int boredoom);
    int GetMood() const;
    int GetHunger() const;
    int GetBoredoom() const;
    bool d1e = false;
    int newHunger = GetHunger();
    int newBoredom = GetBoredoom();
private:
    int m_mood;
    int m_Hunger;
    int m_Boredom;
    void PassTime(int time = 1);
};


Pet::Pet(int hunger, int boredom) :
    m_Hunger(hunger),
    m_Boredom(boredom)
{}

inline int Pet::GetMood() const
{
    return (m_Hunger + m_Boredom);
}

inline int Pet::GetHunger() const
{
    return m_Hunger;
}

inline int Pet::GetBoredoom() const
{
    return m_Boredom;
}

void Pet::PassTime(int time)
{
    int newHunger = GetHunger() + time;
    int newBoredom = GetBoredoom() + time;
    m_Hunger += time;
    m_Boredom += time;
    SetHunger(newHunger);
    SetBoredom(newBoredom);
}

void Pet::SetHunger(int hunger) {
    m_Hunger = hunger;
}

void Pet::SetBoredom(int boredoom) {
    m_Boredom = boredoom;
}

void Pet::Talk()
{
    cout << "\n\n Humano estoy: ";
    int mood = GetMood();
    int hunger = GetHunger();
    int boredoom = GetBoredoom();

    if (mood > 15)
    {
        cout << "muriendo. \n";
    }
    else if (mood > 10)
    {
        cout << "mal. \n";
    }
    else if (mood > 5)
    {
        cout << "ok. \n";
    }
    else if (hunger > 5) {
        cout << "hambriento.\n";
    }
    else if (boredoom > 5) {
        cout << "aburrido.\n";
    }
    else {
        cout << "muy feliz.\n";
    }

    PassTime();
}

void Pet::Eat(int food)
{
    cout << "\Brrup. \n";
    m_Hunger -= food;

    if (m_Hunger < 0)
    {
        m_Hunger = 0;
    }

    PassTime();
}

void Pet::Play(int fun)
{
    cout << "\n Wheeee \n";
    m_Boredom -= fun;

    if (m_Boredom < 0)
    {
        m_Boredom = 0;
    }

    PassTime();
}


void Pet::GoforaWalk(int fun) {
    cout << "\n Sacaste a pasear a tu mascota. \n";
    m_Boredom -= fun;

    if (m_Boredom < 0)
    {
        m_Boredom = 0;
    }

    PassTime();
}

void Pet::ShowNeeds(int mood, int hunger, int boredom) {
    cout << "Salud: " << mood << endl;
    cout << "Aburrimiento: " << boredom << endl;
    cout << "Hambre: " << hunger << endl;
}

void Pet::Die() {

    if (m_mood == 20) {
        cout << "Murio.";
    }

    if (m_Hunger == 10) {
        cout << "Tu mascota ha muerto de hambre\n";
    }

    if (m_Boredom == 10) {
        cout << "Tu mascota ha muerto de aburrimiento\n";
    }
}

int main()
{

    Pet pet;
    pet.Talk();
    bool d1e = false;
    int mood = pet.GetMood();
    int hunger = pet.GetHunger();
    int boredoom = pet.GetBoredoom();
    int choice;

    do {
        cout << "\n Mascotas Virtuales\n\n";
        cout << "0 -  Salir\n";
        cout << "1 -  Escucha a tu macota\n";
        cout << "2 -  Alimentar\n";
        cout << "3 -  Jugar con mascota\n";
        cout << "4 -  Sacarlo a pasear\n";
        cout << "5 -  Mostrar necesidades\n";
        cout << "Elige una opcion: \n";

        cin >> choice;

        cout << "\n";

        switch (choice)
        {
        case 0:
            cout << "Vuelve pronto!. \n";
            break;
        case 1:
            pet.Talk();
            break;
        case 2:
            pet.Eat();
            break;
        case 3:
            pet.Play();
            break;
        case 4:
            pet.GoforaWalk();
            break;
        case 5:
            pet.ShowNeeds(mood, hunger, boredoom);
            break;
        default:
            cout << "\nTu elección se inválida. \n";
        }

        if (mood >= 20) {
            d1e = true;
        }

        if (hunger >= 10) {
            d1e = true;
        }

        if (boredoom >= 10) {
            d1e = true;
        }

        if (d1e == true) {
            pet.Die();
        }


    } while (choice != 0);
}
