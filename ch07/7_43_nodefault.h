class NoDefault {
public:
	NoDefault(int i) {}
};

class C {
public:
	C(): nd(0) {}
private:
	NoDefault nd;
};