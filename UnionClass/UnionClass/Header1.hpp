

struct passport {
    char* name;
    int birthdate;
    char* city;
    char* get_name()
    {
        return name;
    }
    void set_name(char* name)
    {
        this->name = name;
    }
    int get_birthdate()
    {
        return birthdate;
    }
    void set_birthdate(int birthdate)
    {
        this->birthdate = birthdate;
    }
    char* get_city()
    {
        return city;
    }
    void set_city(char* city)
    {
        this->city = city;
    }
};

struct Student {
    int age;
    int grade;
    int year_of_study;
    char* faculty;
    void set_age(int age)
    {
        this->age = age;
    }
    void set_grade(int grade)
    {
        this->grade = grade;
    }
    void set_year_of_study(int year_of_study)
    {
        this->year_of_study = year_of_study;
    }
    void set_faculty(char* faculty)
    {
        this->faculty = faculty;
    }
    int get_age()
    {
        return age;
    }
    int get_grade()
    {
        return grade;
    }
    int get_year_of_study()
    {
        return year_of_study;
    }
    char* get_faculty()
    {
        return faculty;
    }
    passport id;
};
