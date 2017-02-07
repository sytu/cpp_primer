#ifndef WHOLE_H
#define WHOLE_H

#include <set>
#include "makePlural.h"

class Folder;	

class Message {
	friend class Folder;
	friend void swap(Message &, Message &);
public:
	explicit Message(const string &str = ""): contents(str) {}

	Message(const Message &);
	Message & operator=(const Message &);
	~Message();

	// show	message in folders
	void show();

	void save(Folder &);
	void remove(Folder &);
private:
	string contents;
	set<Folder*> folders;
	void addToFolders(const Message &);
	void removeFromFolders();
	void addFldr(Folder *fp) { folders.insert(fp); }
	void remFldr(Folder *fp) { folders.erase(fp); }
};

class Folder {
	friend class Message;
	friend void swap(Message &lhs, Message &rhs);

public:
	Folder() = default;

	Folder(const Folder &);
	Folder& operator=(const Folder &);
	~Folder();
	
	// save remove
	void save(Message &);
	void remove(Message &);

	// show	message in msgs
	void show();
private:
	set<Message*> msgs;
	void addToMsg(const Folder &);
	void removeFromMsg();
	void addMsg(Message *mp) { msgs.insert(mp); }
	void remMsg(Message *mp) { msgs.erase(mp); }
};
void Message::save(Folder &f) {
	folders.insert(&f);
	f.addMsg(this);
}
void Message::remove(Folder &f) {
	folders.erase(&f);
	f.remMsg(this);
}

void Message::addToFolders(const Message &msg) {
	for (auto f : msg.folders)
		f->addMsg(this);
}
void Message::removeFromFolders() {
	for (auto f : folders)
		f->remMsg(this);
}

Message::Message(const Message &msg):contents(msg.contents), folders(msg.folders) {
	addToFolders(msg);
}
Message & Message::operator=(const Message &rhs) {
	removeFromFolders();
	contents = rhs.contents;
	folders  = rhs.folders;
	addToFolders(rhs);
	return *this;
}
Message::~Message() {
	removeFromFolders();
}

void swap(Message &lhs, Message &rhs) {
	using std::swap;
	for (auto f : lhs.folders)
		f->remMsg(&lhs);
	for (auto f : rhs.folders)
		f->remMsg(&rhs);
	swap(lhs.contents, rhs.contents);
	swap(lhs.folders, rhs.folders);
	for (auto f : lhs.folders)
		f->addMsg(&lhs);
	for (auto f : rhs.folders)
		f->addMsg(&rhs);
}

void Message::show() { 
	cout << "This message is contained in [" 
		 << folders.size() << "] " 
		 << makePlural(folders.size(), "folder", "s") << "." << endl;  
}


void Folder::save(Message &msg) {
	msgs.insert(&msg);
	msg.addFldr(this);
}
void Folder::remove(Message &msg) {
	msgs.erase(&msg);
	msg.remFldr(this);
}

void Folder::addToMsg(const Folder &f) {
	for (auto m : f.msgs) 
		m->addFldr(this);
}
void Folder::removeFromMsg() {
	for (auto m : msgs) 
		m->remFldr(this);	
}

Folder::Folder(const Folder &f): msgs(f.msgs) {
	addToMsg(f);
}
Folder& Folder::operator=(const Folder &rhs) {
	removeFromMsg();
	msgs = rhs.msgs;
	addToMsg(rhs);
	return *this;
}
Folder::~Folder() { removeFromMsg(); }

void Folder::show() { 
	cout << "This folder contains [" << msgs.size() << "] " 
		 << makePlural(msgs.size(), "message", "s") << "." << endl;  
}

#endif
