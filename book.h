#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>
#include "author.h"
#include "chapter.h"

class Book {
private:
    std::string title;
    Author author;
    int publicationYear;
    std::vector<Chapter> chapters;

public:
    Book();
    Book(std::string bookTitle, Author bookAuthor, int year, std::vector<Chapter> &bookChapter);

    void addChapter(Chapter &chapter);

    void addChapter(Chapter newChapter);

  
    std::string getTitle() const { return title; }
    Author getAuthor() const { return author; }
    int getPublicationYear() const { return publicationYear; }
    std::vector<Chapter> &getChapters(); // zwraca referencję na wektor

   
    void setTitle(const std::string &newTitle) { title = newTitle; }
    void setAuthor(const Author &newAuthor) { author = newAuthor; }
    void setPublicationYear(int newYear) { publicationYear = newYear; }
};

#endif