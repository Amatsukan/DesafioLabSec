HEADERS += Exceptions.h
SOURCES += Main.cpp
LIBS += -lcryptosec \
    -lcrypto
LIBPATH += -I/usr/include/libcryptosec \
    -I/usr/include/openssl
