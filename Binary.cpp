#include "Binary.h"

ByteArray Binary::toByteArray(std::string  object) {
        unsigned char* data = toUCharP(object);
        return toByteArray(data);
}
ByteArray Binary::toByteArray(unsigned char * object) {
        std::string s = Binary::toString(object);
        return *(new ByteArray(s));
}

//std::string Binary::toString(void * object) {
//	std::string* p = (std::string*) object;
//	return *p;
//}

std::string Binary::toString(unsigned char * object) {
        std::string p = reinterpret_cast<char*>(object);
        return p;
}

unsigned char *Binary::toUCharP(std::string s) {
        int length = s.size();
        unsigned char* m_data = new unsigned char[length + 1];
        memcpy(m_data, s.c_str(), length);
        return m_data;
}

unsigned char *Binary::toUCharP(void * object) {
        return (unsigned char *) object;
}

char* Binary::tocharp(const char * p){
    void* a =(void*)p;
    return (char*)a;
}
