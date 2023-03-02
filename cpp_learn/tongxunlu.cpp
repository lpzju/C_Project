#include <iostream>
#include <cstring>
using namespace std;

#define MAX_N 1000
#define MAX_A 15

typedef struct _people {
    char name[MAX_A];
    char sex;
    int age;
    char phone[MAX_A];
    char address[MAX_A];
} People;

typedef struct _book {
    People peopleArr[MAX_N];
} Book;

void addPeople(Book *, int *);
void show();
int find(char *, Book, int);

int main() {
    // People p1;
    // p1.sex = 'm';
    // p1.age = 10;
    // cin >> p1.name >> p1.phone >> p1.address;
    // cout << p1.name << p1.phone << p1.address << endl;
    // Book book1;
    // book1.peopleArr[0] = p1;
    // cout << book1.peopleArr[0].name << endl;
    Book bookArr;
    // cout << bookArr.peopleArr[0].age << endl;
    char ch;
    int len = 0;
    do
    {
        cout << "*****************************" << endl;
        cout << "*****\t" << "1、添加联系人\t" << "*****" << endl;
        cout << "*****\t" << "2、显示联系人\t" << "*****" << endl;
        cout << "*****\t" << "3、删除联系人\t" << "*****" << endl;
        cout << "*****\t" << "4、查找联系人\t" << "*****" << endl;
        cout << "*****\t" << "5、修改联系人\t" << "*****" << endl;
        cout << "*****\t" << "6、清空联系人\t" << "*****" << endl;
        cout << "*****\t" << "0、退出通讯录\t" << "*****" << endl;
        cout << len << endl;
        cout << "*****************************" << endl;
        cin >> ch;
        switch (ch) {
            case '1':
            addPeople(&bookArr,&len);
                break;
            case '2':
            cout << "222" << endl;
                break;
            case '3':
            cout << "333" << endl;
                break;
            case '4':
            cout << "444" << endl;
            case '5':
            cout << "555" << endl;
                break;
            case '6':
            cout << "666" << endl;
                break;
            default:
            cout << "请输入其他" << endl;
        }
    } while(ch != '0');
    return 0;
}

int find(char *name, Book *bookArray, int len) {
    int i;
    cout << name << endl;
    cout << (bookArray -> peopleArr)[0].name << endl;
    int flag = -1;
    if (len != 0) {
        for (i = 0; i < len; i++) {
            if (strcmp((bookArray->peopleArr)[i].name, name) == 0) {
                flag = i;
            }
        }
    }
    return flag;
}

void addPeople(Book *bookArr, int *len) {
    People p;
    cout << "请输入姓名：" << endl;
    cin >> p.name;
    // 查找，如果不存在则存入
    int flag = find(p.name, bookArr, *len);
    if (flag != -1) {
        cout << "已存储，请输入其他" << endl;
    }
    cout << "请输入性别（m/f）：" << endl;
    cin >> p.sex;
    cout << "请输入年龄：" << endl;
    cin >> p.age;
    cout << "请输入手机号码：" << endl;
    cin >> p.phone;
    cout << "请输入地址：" << endl;
    cin >> p.address;
    int i;
    (*len)++;
}

