/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Vishal Choday
 */
#include "std_lib_facilities.h"

class Student_val 
{
public:
    string name_of_the_student_in_list;
    int value;
};
int main(void)
{
    vector<Student_val> the_namz;
    string name_of_the_student_in_list;
    int the_score_student_received;
    int value;

    cout << "Enter a name and number (Ex:John 77) (End 0 stops the input): ";

    while (cin >> name_of_the_student_in_list >> the_score_student_received)
    {
        
        if (name_of_the_student_in_list == "End")
            break;
       
        the_namz.push_back(Student_val{name_of_the_student_in_list, the_score_student_received});
        cout << "Enter another (End 0 to stop): ";

    }
    cout << "Here is the list:\n";
    int VC;
    for (unsigned VC = 0; VC < the_namz.size(); ++VC)
        cout << the_namz[VC].name_of_the_student_in_list << " -> " << the_namz[VC].value << '\n';


    return 0;
}
bool name_in(string name_of_the_student_in_list, vector<Student_val> p)
{
    bool retval {false};

    for (Student_val NN : p)
        if (NN.name_of_the_student_in_list == name_of_the_student_in_list) retval = true;

    return retval;
}
bool vector_contains(vector<Student_val> vect, string str);
