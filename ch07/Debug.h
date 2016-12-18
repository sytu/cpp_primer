class Debug {
public:
	constexpr Debug(bool b = true): nw(b), io(b), other(b) {}
	constexpr Debug(bool h, bool i, bool o): nw(h), io(i), other(o) {}

	constexpr bool any() const { return nw || io || other; }
	// set
	void set_nw(bool b) { nw = b; }
	void set_io(bool b) { io = b; }
	void set_other(bool b) { other = b; }
private:
	bool nw; // networ error
	bool io; // I/O error
	bool other; // other error
		
};