#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    //строки

    /*
    string str = "hello world!";
    char arr[14] = { 'h','e','l','l','o',' ','w','o','r','l','d','!'};
    const char* arr2 = "hello world!";
    cout << str << endl << arr << endl << arr2 << endl;*/

    //const char* c = "Any old string...";
    //int size = strlen(c);//определение длины строки
    //cout << size;

    /*const int MAXLEN = 256;
    char str[MAXLEN];
    cout << "Input string:";
    gets_s( str);//Ввод строки 
    cout << "String: " << str << endl;
    cout << "Lenght " << strlen(str) << endl;*/

    /*const char* c1 = "Hello";
    const char* c2 = "World";
    char* c3 = new char[strlen(c1), strlen(c2)];
    strcpy_s(c3, 2, "");
    //c1 = c2;
    //strcpy_s( (char*)c1,6, c2);
    //strncpy_s((char*)c1,11, c2+2, 3);//коприрование строк
    //cout << c1 << endl;
   // cout << c2;
    strcat_s(c3, 6, c1);// конкантенация строк(сложение)
    cout << c3 << endl;

    strcat_s(c3, 12, c2);
    cout << c3 << endl;*/

    //поиск символа

    /*char* filename = new char[128];
    cout << "Enter name of file: ";
    gets_s(filename,strlen(filename));
    if (strchr(filename, '.')) {
        cout << "dot this";
    }
    else
        strcat_s(filename, 128, ".TXT");
    cout << filename;*/

    //поиск подстроки

    /*char* filename = new char[128], * p;
    cout << "Enter name of file: ";
    gets_s(filename, 128);
    _strupr_s(filename,128);
    p = strstr(filename, ".TXT");
    if (p) {
        cout << "Name is extension" << endl;
    }
    else {
        p = strchr(filename, '.');
        if (p)
            *p = NULL;
        strcat_s(filename, 128, ".TXT");
        cout << "Name of file: " << filename;
        delete[]filename;
    }*/

    //Замена символа в строке

   /* char x1[40], x2[80], * px1, * px2;

    puts("Enter word");//вывод в консоль
    gets_s(x1);
    px1 = x1;
    px2 = x2;

    int n = strlen(x1) + 1;
    int k = 0,i=0;
    while (k < n) {
        if (*(px1 + k) != 'a') {
            *(px2 + i) = *(px1 + k);
            i++;
            k++;
        }
        else {
            *(px2 + i) = 'k';
            *(px2 + i + 1) = 'y';
            k++;
            i += 2;
        }
    }
    puts(x2);*/

    //замена пробела на табуляцию

    /*char* str = new char[128]{"Hello my friends!"};
    puts(str);
    for (int i = 0; i < strlen(str); i++) {
        if (*(str + i) == ' ') *(str + i) = '\t';
    }
    puts(str);*/

//определить количество букв цифр и др символов в строке

/*char* str = new char[128]{"Broadway 96 / 3"};
puts(str);
//
int s = 0, o = 0, d = 0;
//while () {
//    if (isalpha(str[0])) puts("symbol");
//}

for (int i = 0; i < strlen(str); i++) {
    if (isalpha(/*str[i]*/// *(str + i))) s++;
    /*else if (isdigit(*(str + i))) d++;
    else o++;
    }
cout << s << " " << d << " " << o << endl;*/

    //посчитать колво слов в ведённом предложении

/*char* str = new char[128]{""};
int count = 0;
//string a = "Hello";
//char d = 'j';
gets_s(str,128);
for (int i = 0; i < strlen(str); i++) {
    if (*(str + i) == ' ') count++;
}
cout << count+1<< endl;*/
setlocale(LC_ALL, "");
char* str = new char[256]{ "шалаш" };
char* str3 = new char[256]{ "А роз упаала на лау Азора" };
char* str1 = new char[256]{ "Не палиндром" };
char* str4 = new char[256];
//int count = 0;
//for (int j = strlen(str) - 1; j >= 0;  j--) {
//    str4[j] = *str++;
//}
//if (strcmp(str,str4 ) == 0) cout << "y";
//else cout << "n";
//

//_strlwr_s(str1, 256);

for (int i = 0,j=0; i < strlen(str1)+1; i++) {
    if (str1[i] != ' ') str4[j] = str1[i];
    j++;
}
delete[]str1;
if (strcmp(str4, _strrev(str4)) == 0) cout << "y";
else cout << "n";


}

