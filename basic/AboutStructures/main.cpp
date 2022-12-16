#include <iostream>

using namespace std;

struct Address
{
    int houseNo;
    string streetName;
    string thana;
};

struct Student
{
    string name;
    int rollNo;
    char section;
    Address studentAddress;
};

struct Rectangle
{
    int height;
    int width;
};

struct RectangleWithConstructor
{
    int width, height;
    RectangleWithConstructor(int w, int h)
    {
        width = w;
        height = h;
    }
    void areaOfRectangle()
    {
        cout << "Area of Rectangle is: " << (width * height) << endl;
    }
};

void printStruct(Student s)
{
    cout << "From function " << s.name << endl;
    cout << "From function " << s.rollNo << endl;
    cout << "From function " << s.section << endl;
    cout << "From function " << s.studentAddress.houseNo << endl;
    cout << "From function " << s.studentAddress.streetName << endl;
    cout << "From function " << s.studentAddress.thana << endl;
}

Rectangle createStruct()
{
    Rectangle newRect;
    newRect.height = 120;
    newRect.width = 250;
    return newRect;
}

int main()
{
    Student singleStudent;
    singleStudent.name = "Faria";
    singleStudent.rollNo = 1;
    singleStudent.section = 'A';
    singleStudent.studentAddress.houseNo = 35;
    singleStudent.studentAddress.streetName = "New Street";
    singleStudent.studentAddress.thana = "Old Thana";

    cout << singleStudent.name << endl;
    cout << singleStudent.rollNo << endl;
    cout << singleStudent.section << endl;
    cout << singleStudent.studentAddress.houseNo << endl;
    cout << singleStudent.studentAddress.streetName << endl;
    cout << singleStudent.studentAddress.thana << endl;

    Rectangle rectangleArray[5];

    for (int i = 0; i < sizeof(rectangleArray) / sizeof(*rectangleArray); i++)
    {
        cin >> rectangleArray[i].height;
        cin >> rectangleArray[i].width;
    }

    for (int i = 0; i < sizeof(rectangleArray) / sizeof(*rectangleArray); i++)
    {
        cout << "Height of the index " << i << " " << rectangleArray[i].height << endl;
        cout << "Width of the index " << i << " " << rectangleArray[i].width << endl;
    }

    struct RectangleWithConstructor rec = RectangleWithConstructor(4, 6);
    rec.areaOfRectangle();

    printStruct(singleStudent);

    Rectangle newRect = createStruct();

    cout << "Created from function height " << newRect.height << endl;
    cout << "Created from function width " << newRect.width << endl;
    return 0;
}
