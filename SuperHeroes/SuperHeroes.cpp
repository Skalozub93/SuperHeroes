#include <iostream>
#include <vector>

using namespace std;

// Левитация
class Levitation
{
public:
    virtual void GetName() = 0;
	void levitation() 
	{
		cout << "I can Fly" << "\n";
	}
};

// Сильный
class Strong 
{
public:
    virtual void GetName() = 0;
    void strong() 
    {
        cout << "I am strong" << "\n";
    }
};

// Броня
class Armor
{
public:
    virtual void GetName() = 0;
    void armor()
    {
        cout << "I have armor" << "\n";
    }
};

// Кибернетика
class Cybernetics 
{
public:
    virtual void GetName() = 0;
    void cybernetics()
    {
        cout << "I'm Cyborg" << "\n";
    }
};

// Лазер
class LaserVision 
{
public:
    virtual void GetName() = 0;
    void laser_vision()
    {
        cout << "laser vision" << "\n";
    }
};

// Очень быстрый
class SuperSpeed 
{
public:
    virtual void GetName() = 0;
    void super_speed() 
    {
        cout << " I am speeding" << "\n";
    }
};

// Подрыв
class Explosion
{
public:
    virtual void GetName() = 0;
    void boom()
    {
        cout << "I can explode" << "\n";
    }
};

// Поззитивный персонаж
class Positive 
{
public:
    virtual void GetName() = 0;
    void good() 
    {
        cout << "I am positive hero" << "\n";
    }
};

// Негативный персонаж
class Negative
{
public:
    virtual void GetName() = 0;
    void bad()
    {
        cout << "I am negative hero" << "\n";
    }
};

// Бэтмен
class Batman : public Strong, public Armor, public Positive
{
public:
    void GetName() override
    {
        cout << "I am Batman!!!!" << "\n";
    }
};

// Супермен
class SuperMan :  public Strong, public Levitation, public Positive, public LaserVision, public SuperSpeed
{
public:
    void GetName() override
    {
        cout << "I am Superman!!!!" << "\n";
    }
};

// Дарксайд
class Darkside : public Strong, public Levitation, public Negative, public LaserVision
{
public:
    void GetName() override
    {
        cout << "I am Darkside!!!!" << "\n";
    }
};

// Пластик
class Plastique : public Explosion, public Negative
{
public:
    void GetName() override
    {
        cout << "I am Plastique" << "\n";
    }
};

// Флэш
class Flash : public SuperSpeed, public Positive
{
public:
    void GetName() override
    {
        cout << "I am Flash!!!!" << "\n";
    }

};

// Киборг
class Cyborg : public Strong, public Positive, public Levitation, public Cybernetics
{
public:
    void GetName() override
    {
        cout << "I am Cyborg!!!!" << "\n";
    }
};



int main()
{
    // Вектор всех, кто умеет летать

    vector<Levitation*> CanLevitation;

    CanLevitation.push_back(new SuperMan);
    CanLevitation.push_back(new Darkside);
    CanLevitation.push_back(new Cyborg);

    cout << "We all can fly!!!" << "\n";
    for (auto& i : CanLevitation)
    {
        i->GetName();
        i->levitation();
        cout << "\n";
    }
    cout << "----------------------------------------" << "\n\n";

    // Вектор позитивных героев

    vector<Positive*> PositiveHeroes;

    PositiveHeroes.push_back(new Batman);
    PositiveHeroes.push_back(new SuperMan);
    PositiveHeroes.push_back(new Flash);
    PositiveHeroes.push_back(new Cyborg);

    cout << "We are the positive heroes" << "\n";
    for (auto& i : PositiveHeroes)
    {
        i->GetName();
        i->good();
        cout << "\n";
    }
    cout << "----------------------------------------" << "\n\n";

    // Вектор негативных героев

    vector<Negative*> NegativeHeroes;

    NegativeHeroes.push_back(new Darkside);
    NegativeHeroes.push_back(new Plastique);

    cout << "We are the very bad guys" << "\n";
    for (auto& i : NegativeHeroes)
    {
        i->GetName();
        i->bad();
        cout << "\n";
    }
    cout << "----------------------------------------" << "\n\n";

    
}

