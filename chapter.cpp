    #include <iostream>
    #include"chapter.h"
    using namespace std;
    Chapter::Chapter():title(""),author(Author("","")),chapterNumber(1){}
    Chapter::Chapter(string chapterTitle, Author chapterAuthor, int number):title(chapterTitle),author(chapterAuthor),chapterNumber(number){}
    Chapter::Chapter(const Chapter &other):title(other.title),author(other.author),chapterNumber(other.chapterNumber){}
    Chapter::Chapter(Article &article):title(article.getTitle()),author(article.getAuthor()),chapterNumber(1){}
    void Chapter::displayInfo(){
    cout<<"Chapter "<< chapterNumber<<": "<<title<<" by "<<author.toString()<<endl;
    }
    //"Chapter 1: Sample Chapter by John Doe\n"
    string Chapter::getTitle(){
        return title;
    }
    Author Chapter::getAuthor(){
        return author;
    }
    int Chapter::getChapterNumber(){
        return chapterNumber;
    }
 