#include <iostream>

using namespace std;

class Students{
    private:
        string student_name, student_class, student_behavior;
        int g_calculus, g_values, g_aidedsw, g_development, g_oop,
        g_dataestructure, g_english, student_attendance;

    public:
    Students() {
        student_name = "";
        student_class = "";
        student_behavior = "";
        g_calculus = 0;
        g_values = 0;
        g_aidedsw = 0;
        g_development = 0;
        g_oop = 0;
        g_dataestructure = 0;
        g_english = 0;
        student_attendance = 0;
    }

    Students(string name, string s_class, string behaviour,
             int calculus, int values, int aidedsw, int development,
             int oop, int data_structure, int english, int attendance) {
        student_name = name;
        student_class = s_class;
        student_behavior = behaviour;
        g_calculus = calculus;
        g_values = values;
        g_aidedsw = aidedsw;
        g_development = development;
        g_oop = oop;
        g_dataestructure = data_structure;
        g_english = english;
        student_attendance = attendance;
    }

    void setName(string name) {
        student_name = name;
    }

    string getName(){
        return student_name;
    }

    void setClass(string s_class) {
        student_class = s_class;
    }

    string getClass(){
        return student_class;
    }

    void setBehavior(string behavior){
        student_behavior = behavior;
    }

    string getBehavior(){
        return student_behavior;
    }

     void setCalculus(int calculus){
        g_calculus = calculus;
    }

    int getCalculus(){
        return g_calculus;
    }

     void setValues(int values){
        g_values = values;
    }

    int getValues()
    {
        return g_values;
    }

     void setAidedsw(int aidedsw){
        g_aidedsw = aidedsw;
    }

    int getAidedsw()
    {
        return g_aidedsw;
    }

     void setDevelopment(int development){
        g_development = development;
    }

    int getDevelopment()
    {
        return g_development;
    }

     void setOop(int oop){
        g_oop = oop;
    }

    int getOop()
    {
        return g_oop;
    }

     void setDatastructure(int data_structure){
        g_dataestructure = data_structure;
    }

    int getDatastructure(){
        return g_dataestructure;
    }

     void setEnglish(int english){
        g_english = english;
    }

    int getEnglish()
    {
        return g_english;
    }

     void setAttendance(int attendance){
        student_attendance = attendance;
    }

    int getAttendance()
    {
        return student_attendance;
    }

    string displayInfo() {
        cout << "Student Name: " << student_name << endl;
        cout << "Student Class: " << student_class << endl;
        cout << "Student Behavior: " << student_behavior << endl;
        cout << "Student attendance: " << student_attendance << endl;
        cout << "Grade calculus: " << g_calculus << endl;
        cout << "Grade Human values: " << g_values << endl;
        cout << "Grade sw aided : " << g_aidedsw << endl;
        cout << "Grade sw development: " << g_development << endl;
        cout << "Grade OOP: " << g_oop << endl;
        cout << "Grade data structure: " << g_dataestructure << endl;
        cout << "Grade english: " << g_english << endl;
        // Display other information similarly
    }
};
