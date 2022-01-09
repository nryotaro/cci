#include <bits/stdc++.h>
using namespace std;

class BookId {
  BookId(int bookId);
  bool operator==(const BookId &other) const;

private:
  int bookId;
};

BookId::BookId(int bookId) : bookId(bookId) {}

bool BookId::operator==(const BookId &other) const {
  return bookId == other.bookId;
}

class Book {
public:
  Book(BookId bookId);

private:
  BookId bookId;
};

Book::Book(BookId bookId) : bookId(bookId) {}

class StockBook {
public:
  StockBook(Book book, int stockNumber);
  StockBook updateStockNumber(int newStockNumber);
  bool hasStock();

private:
  Book book;
  int stockNumber;
};

StockBook::StockBook(Book book, int stockNumber)
    : book(book), stockNumber(stockNumber) {}

StockBook StockBook::updateStockNumber(int newStockNumber) {
  return StockBook(book, newStockNumber);
}
bool StockBook::hasStock() { return stockNumber > 0; }

class StockBooks {
public:
  StockBooks(vector<Book> books);

private:
  vector<Book> books;
};

StockBooks::StockBooks(vector<Book> books) : books(books) {}

class Address {
public:
  Address(string address);
private:  
  string address;
};

Address::Address(string address) : address(address) {}

class UserId {
public:
  UserId(int userId);
  bool operator==(const UserId &other) const;
private:
  int userId;
};

UserId::UserId(int userId) : userId(userId) {}
bool UserId::operator==(const UserId &other) const {
  return userId == other.userId;
}

class User {
public:
  User(UserId userId);
private:
  UserId userId;
};

User::User(UserId userId): userId(userId) {}

class Users {
public:
  Users(vector<User> users);
private:
  vector<User> users;
};

Users::Users(vector<User> users) : users(users) {}

class EventId {
public:
  EventId(int eventId);
  bool operator== (EventId &other) const;
private:
  int eventId;
};

EventId::EventId(int eventId) : eventId(eventId) {}

bool EventId::operator==(EventId &other) const {
  return eventId == other.eventId;
}


class Event {
private:
  EventId eventId;
  UserId userId;
  BookId bookId;
};

class ShippingEvent: public Event {
  
};

class ArrivedEvent : public Event {};

class ReturningEvent : public Event {};

class ReturnedEvent : public Event {};


class LendingHistory {
private:
  vector<ShippingEvent> shippingEvents;
  vector<ShippingEvent> arrivedEvents;
  vector<ShippingEvent> returningEvents;
  vector<ShippingEvent> returnedEvents;
};

class LibraryService {
public:
  void registerUser(UserId userIde);
  void lendBook(UserId userId, BookId bookId);
  void recordEvent(Event event);
};
