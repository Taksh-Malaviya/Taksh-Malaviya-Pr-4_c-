#include <iostream>
using namespace std;

class Message {
private:
    char inte_Message[100];

public:
    Message() {
        cout << "Enter initial message: ";
        cin >> inte_Message;
    }

    void print() {
        cout << "Message: " << inte_Message << endl;
    }

    void print(string addi_Message) {
        cout << "Message: " << inte_Message << " " << addi_Message << endl;
    }
};

int main() {
    Message msg;

    msg.print();
    msg.print(" Default ");

    return 0;
}
