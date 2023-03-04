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

int len = 0;

void addPeople(Book *, int *);
void show(Book,int);
int find(char *, Book *, int);
void change(Book *, char *);

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
        cout << "现在已有" << len << "位联系人" <<endl;
        cout << "*****************************" << endl;
        cin >> ch;
        switch (ch) {
            case '1':
                addPeople(&bookArr,&len);
                break;
            case '2':
                show(bookArr,len);
            // cout << "222" << endl;
                break;
            case '3':
                cout << "333" << endl;
                break;
            case '4':
                if (len) {
                    char name[MAX_A];
                    cin >> name;
                    // cout << name << endl;
                    find(name, &bookArr, len);
                } else {
                    cout << "请先存储再查找" << endl;
                }
                break;
            case '5':
                if (len) {
                    char name[MAX_A];
                    cin >> name;
                    change(&bookArr,name);
                } else {
                    cout << "请先存储再修改" << endl;
                }
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
    int flag = -1;
    if (len != 0) {
        for (i = 0; i < len; i++) {
            // cout << (bookArray->peopleArr)[i].name << endl;
            if (strcmp((bookArray->peopleArr)[i].name, name) == 0) {
                flag = i;
                cout << "已存储该用户信息！" << endl;
                break;
            } else {
                cout << "查无此人" << endl;
            }
        }
    }
    cout << "退出查找" << endl;
    return flag;
}

void addPeople(Book *bookArr, int *len) {
    People p;
    cout << "请输入姓名：" << endl;
    cin >> p.name;
    // 查找，如果不存在则存入
    int flag = find(p.name, bookArr, *len);
    while (flag != -1) {
        // cout << "已存储，请输入其他姓名" << endl;
        cin >> p.name;
        flag = find(p.name, bookArr, *len);
    }
    cout << "请输入性别（m/f）：" << endl;
    cin >> p.sex;
    cout << "请输入年龄：" << endl;
    cin >> p.age;
    cout << "请输入手机号码：" << endl;
    cin >> p.phone;
    cout << "请输入地址：" << endl;
    cin >> p.address;
    (bookArr->peopleArr)[*len] = p;
    int i;
    (*len)++;
    cout << "添加用户成功！" << endl;
}

void show(Book book,int len) {
    // for (int i:len) {
    int i;
    if (len) {
        cout << "姓名" << ", " << "性别" << ", " << "年龄" << ", " << "号码" << ", " << "地址" << endl;
        for (i = 0; i < len; i++) {
            cout << (book.peopleArr)[i].name << ", " << (book.peopleArr)[i].sex << ", " << (book.peopleArr)[i].age << ", " << (book.peopleArr)[i].phone << ", " << (book.peopleArr)[i].address << endl;
        }
    } else {
        cout << "请先存储用户信息！" << endl;
    }
}

void change(Book *book, char *name) {
    int res = find(name,book,len);
    cout << "res:" <<res << endl;
    if (res != -1) {
        cout << "请输入" << name << "的性别:" << endl;
        cin >> (book->peopleArr)[res].sex;
        cout << "请输入" << name << "的年龄:" << endl;
        cin >> (book->peopleArr)[res].age;
        cout << "请输入" << name << "的号码:" << endl;
        cin >> (book->peopleArr)[res].phone;
        cout << "请输入" << name << "的地址:" << endl;
        cin >> (book->peopleArr)[res].address;
    }
}
