class CTest { public: void Func(); };
void (CTest::*fpFunc)() = CTest::Func;
