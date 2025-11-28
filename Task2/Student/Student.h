#ifndef STUDENT_H
#define STUDENT_H

class Student {
private:
    int id;
    double score;
public:
    Student(int i = 0, double s = 0.0);

    void set(int i, double s);
    int getId() const;
    double getScore() const ;

};

    void maxStudent(Student *p, int n);


#endif