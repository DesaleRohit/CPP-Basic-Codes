#include<iostream>
using namespace std;

class Student {
private:
    int a;        // Roll number
    string b;     // Name
    int c;        // Fees

public:
    void info(int x, string y, int z) {
        this->a = x;
        this->b = y;
        this->c = z;

        cout << endl << "Roll No = " << this->a;
        cout << endl << "Name = " << this->b;
        cout << endl << "Fees = " << this->c;
    }

    int getFees() {
        return c;  // Return the fees of the current student
    }
};

int main() {
    int totalFees = 0; // Variable to accumulate total fees

    Student a;
    a.info(1, "Dhanesh", 1000);
    totalFees = totalFees + a.getFees(); // Add Dhanesh's fees to totalFees

    Student b;
    b.info(2, "Swapnil", 2000);
    totalFees = totalFees + b.getFees(); // Add Swapnil's fees to totalFees

    // Display the total fees
    cout << endl << "Total Fees = " << totalFees;

    return 0;
}
