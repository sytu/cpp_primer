#ifndef MESSAGE_H
#define MESSAGE_H

#include <set>

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

string makePlural(size_t ctrl, const string &str, const string &pfix) {
	return ctrl > 1 ? str + pfix : str;
}

void Message::show() { 
	cout << "This message is contained in [" 
		 << folders.size() << "] " 
		 << makePlural(folders.size(), "folder", "s") << "." << endl;  
}

#endif
