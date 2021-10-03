student = new Student();
    string name, sex;
    int age;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin << age;
    cin.ignore();
    cout << "Enter sex: ";
    getline(cin, sex);

    student->setName(name);
    student->setAge(age);
    student->setSex(sex);