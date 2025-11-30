#include "book.h"
#include <iostream>

Book::Book() : title(""), author(), publicationYear(0), chapters() {}

Book::Book(std::string bookTitle, Author bookAuthor, int year, std::vector<Chapter> &bookChapters)
    : title(bookTitle), author(bookAuthor), publicationYear(year), chapters(bookChapters) {}

void Book::addChapter(Chapter &chapter) {
    chapters.push_back(chapter);
}

void Book::displayInfo() {
    std::cout << "Book title: " << title << std::endl;
    std::cout << "Author: " << author.toString() << std::endl;
    std::cout << "Publication year: " << publicationYear << std::endl;
    std::cout << "Chapters:" << std::endl;
    for (auto &ch : chapters) {
        ch.displayInfo();
    }
}

std::string Book::getTitle() {
    return title;
}

Author Book::getAuthor() {
    return author;
}

int Book::getPublicationYear() {
    return publicationYear;
}

std::vector<Chapter> Book::getChapters() {
    return chapters;
}