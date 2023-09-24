#include <iostream>
#include "students.h"
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void View(vector<Students> &storage){
    int calculus_g, values_g, aidedsw_g, development_g,
    oop_g, datastructure_g, english_g, s_attendance;
    double average;

    if(storage.empty()){
        cout << "There is no students" << endl;
    }

    for(int i = 0; i < storage.size(); i++){
        storage[i].displayInfo();

        calculus_g = storage[i].getCalculus();
        values_g = storage[i].getValues();
        aidedsw_g = storage[i].getAidedsw();
        development_g = storage[i].getDevelopment();
        oop_g = storage[i].getOop();
        datastructure_g = storage[i].getDatastructure();
        english_g = storage[i].getEnglish();
        s_attendance = storage[i].getAttendance();

        average = (calculus_g + values_g + aidedsw_g + development_g
                   + oop_g + datastructure_g + english_g) / 7;
        if(average >= 7 && average <=8)
        {
            cout << "Regular grades" << endl;
        }
        else if(average < 7)
        {
            cout << "Failed!" << endl;
        }
        else if(average >=9)
        {
            cout << "Good grades" << endl;
        }

        cout << "Attendance: "<< s_attendance << "/ 30" << " " ;

        if(s_attendance >= 24)
        {
            cout << "Great attendance" << endl;
        }
        else
        {
            cout << "FAILED BY ATTENDANCE" << endl;
        }

    }

}

void Backup(vector<Students> &storage){
    if(storage.empty())
    {
        cout << "There is no students yet." << endl;
    }
    fstream file;
    file.open("backupdata.txt", ios_base::out);
    for(int i = 0; i < storage.size(); i++)
    {
        string stu_info = "name: " + storage[i].getName() + "\n" + "class: " + storage[i].getClass() + "\n" + "Behavior: " +
        storage[i].getBehavior() + "\n" + "calculus grade: " + to_string(storage[i].getCalculus()) +  "\n" + "Values grade: " +
        to_string(storage[i].getValues()) + "\n" + "Aided sw grade:  " + to_string(storage[i].getAidedsw())+ "\n" +
        "Development sw grade: " + to_string(storage[i].getDevelopment()) + "\n" + "OOP grade: " + to_string(storage[i].getOop())+ "\n" +
        "Data structure grade: " + to_string(storage[i].getDatastructure()) + "\n" + "English grade: " + to_string(storage[i].getEnglish())+ "\n" +
        "Attendance: " + to_string(storage[i].getAttendance());

        file<<stu_info<< endl;
    }
    file.close();
}

void Edit(vector<Students> &storage){
    if(storage.empty())
    {
        cout << "There is no students yet." << endl;
    }
    cout << "Available students: " << endl;

     for(int j = 0; j < storage.size(); j++){
        cout << j+1 << ") " << storage[j].getName() << endl;
    }

    string s_name;
    int selection;
    cout << "Give me the name from the student: " << endl;
    cin >> s_name;

    for(int i = 0; i < storage.size(); i++){
        if(storage[i].getName() == s_name){

            cout << "What do you want to update?: " << endl;
            cout << "0) Student name." << endl;
            cout << "1) Student class." << endl;
            cout << "2) Student behavior." << endl;
            cout << "3) Student attendance." << endl;
            cout << "4) Calculus grade." << endl;
            cout << "5) Values grade." << endl;
            cout << "6) aided sw grade." << endl;
            cout << "7) sw development grade." << endl;
            cout << "8) OOP grade." << endl;
            cout << "9) data structure grade." << endl;
            cout << "10) English grade." << endl;
            cin >> selection;

            switch(selection){
                case 0:{

                    string n_name;
                    cout << "Input new name: ";
                    cin >> n_name;

                    storage[i].setName(n_name);
                    cout << "Successfully updated." << endl;
                    break;
                }

                case 1:{

                    string n_class;
                    cout << "Input new class: ";
                    cin >> n_class;

                    storage[i].setClass(n_class);
                    cout << "Successfully updated." << endl;
                    break;
                }

                case 2:{

                    string n_behavior;
                    cout << "Input new behavior: ";
                    cin >> n_behavior;

                    storage[i].setBehavior(n_behavior);
                    cout << "Successfully updated." << endl;
                    break;
                }

                case 3:{

                    int s_attendance;
                    cout << "Input new attendance: ";
                    cin >> s_attendance;

                    storage[i].setAttendance(s_attendance);
                    cout << "Successfully updated. " << endl;
                    break;


                }

                case 4:{

                    int n_calculus;
                    cout << "Input new calculus grade: ";
                    cin >> n_calculus;

                    storage[i].setCalculus(n_calculus);
                    cout << "Successfully updated." << endl;
                    break;
                }

                case 5:{

                    int n_values;
                    cout << "Input new values grade: ";
                    cin >> n_values;

                    storage[i].setValues(n_values);
                    cout << "Successfully updated." << endl;
                    break;
                }

                case 6:{

                    int n_aidedsw;
                    cout << "Input new aided sw grade: ";
                    cin >> n_aidedsw;

                    storage[i].setAidedsw(n_aidedsw);
                    cout << "Successfully updated." << endl;
                    break;
                }

                case 7:{

                    int n_development;
                    cout << "Input new development sw grade: ";
                    cin >> n_development;

                    storage[i].setDevelopment(n_development);
                    cout << "Successfully updated." << endl;
                    break;
                }

                case 8:{

                    int n_oop;
                    cout << "Input new OOP grade: ";
                    cin >> n_oop;

                    storage[i].setOop(n_oop);
                    cout << "Successfully updated." << endl;
                    break;
                }

                case 9:{

                    int n_datastructure;
                    cout << "Input new data structure grade: ";
                    cin >> n_datastructure;

                    storage[i].setDatastructure(n_datastructure);
                    cout << "Successfully updated." << endl;
                    break;
                }

                case 10:{

                    int n_english;
                    cout << "Input new english grade: ";
                    cin >> n_english;

                    storage[i].setEnglish(n_english);
                    cout << "Successfully updated." << endl;
                    break;
                }





            }
        }
    }
}

void Search(vector<Students> &storage){
    if(storage.empty())
    {
        cout << "There is no students yet." << endl;
    }
    string s_name;
    cout << "Input the name from the student: ";
    cin >> s_name;

    for(int i = 0; i < storage.size(); i++){
        if(storage[i].getName() == s_name){
            storage[i].displayInfo();
        }
    }
}

void Delete(vector<Students> &storage){

    cout << "Available students: " << endl;

     for(int i = 0; i < storage.size(); i++){
        cout << i+1 << ") " << storage[i].getName() << endl;
    }

    string name_delete;
    cout << "Give me the name from the student you want to delete: " << endl;
    cin >> name_delete;

    for(int j = 0; j < storage.size(); j++){

        if(storage[j].getName() == name_delete){

            storage.erase((storage.begin()+ j ));

            cout << "Student successfully deleted." << endl;

        }

    }

}

void Add(vector<Students> &storage){

    string name, s_class, s_behavior;
    int calculus, values, data_structure,
    aidedsw, development, english, oop, attendance;


    cout << "Give me the student name: ";
    cin >> name;

    cout << "Give me the student class: ";
    cin >> s_class;

    cout << "How was the student behavior? (good, regular, bad): ";
    cin >> s_behavior;

    cout << "Grade calculus: ";
    cin >> calculus;

    cout << "Grade values: ";
    cin >> values;

    cout << "Grade aided sw: ";
    cin >> aidedsw;

    cout << "Grade development: ";
    cin >> development;

    cout <<"Grade OOP: ";
    cin >> oop;

    cout << "Grade data structure: ";
    cin >> data_structure;

    cout << "Grade english: ";
    cin >> english;

    cout << "attendance: ";
    cin >> attendance;

    Students newstudent (name, s_class, s_behavior, calculus, values, aidedsw, development, oop, data_structure, english, attendance);
    storage.push_back(newstudent);
}

string Login(){
    string UsName, UsPassword;
    cout << "Input your username: ";
    cin >> UsName;
    cout << "Input your password: ";
    cin >> UsPassword;
    return UsName, UsPassword;

}

void StudentMenu(vector<Students> &storage){
    int answer;
    cout << "----- STUDENTS MENU -----" << endl;
    cout << "1) View" << endl;
    cout << "2) Backup" << endl;
    cout << "3) Search" << endl;
    cin >> answer;

    switch(answer){
        case 1:
            View(storage);
            break;
        case 2:
            Backup(storage);
            break;
        case 3:
            Search(storage);
            break;
    }
}

void TeacherMenu(vector<Students> &storage){
    int answer;
    cout << "----- TEACHERS MENU -----" << endl;
    cout << "1) View" << endl;
    cout << "2) Edit" << endl;
    cout << "3) Add" << endl;
    cout << "4) Backup" << endl;
    cout << "5) Search" << endl;
    cin >> answer;

    switch(answer){
        case 1:
            View(storage);
            break;
        case 2:
            Edit(storage);
            break;
        case 3:
            Add(storage);
            break;
        case 4:
            Backup(storage);
            break;
        case 5:
            Search(storage);
            break;
    }
}

void AdminMenu(vector<Students> &storage){
    int answer;
    cout << "----- ADMIN MENU -----" << endl;
    cout << "1) View" << endl;
    cout << "2) Edit" << endl;
    cout << "3) Add" << endl;
    cout << "4) Backup" << endl;
    cout << "5) Delete" << endl;
    cout << "6) Search" << endl;
    cin >> answer;

      switch(answer){
        case 1:
            View(storage);
            break;
        case 2:
            Edit(storage);
            break;
        case 3:
            Add(storage);
            break;
        case 4:
            Backup(storage);
            break;
        case 5:
            Delete(storage);
            break;
        case 6:
            Search(storage);
            break;
    }
}


int main(){
    vector <Students> storage;
    char choice;

    int answer;

    cout << "----- WELCOME TO THE STUDENTS MANAGEMENT SYSTEM -----" << endl;
    cout << "Which type of student are you?" << endl;
    cout << "1) Teacher" << endl;
    cout << "2) Student "<< endl;
    cout << "3) Admin "<< endl;
    cin >> answer;
    Login();
    do{
    if(answer == 1){
        TeacherMenu(storage);
    }
    else if(answer == 2){
        StudentMenu(storage);
    }
    else if(answer == 3){
        AdminMenu(storage);
    }


cout<<"Continue [Y/N] ? :";
cin>>choice;

}while(choice == 'y'|| choice=='Y');


return 0;
}
