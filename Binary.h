#ifndef BINARY_H_
#define BINARY_H_


#include <libcryptosec/ByteArray.h>
#include <string>

/********************************************//**
 *  ... Classe utilizada para fazer Casts
 ***********************************************/

/**
 * @brief The Binary class
 * \class Binary
 * \brief classe utilizada para casts
 */
class Binary {

public:
        /**
     * \brief toByteArray() cast para ByteArray
     * @param String
         * @return String;
         *
         */
        static ByteArray toByteArray(std::string object);
    /**
     * \brief toByteArray() cast para ByteArray
     * @param unsigned char*
     * @return String;
     *
     */
        static ByteArray toByteArray(unsigned char * object);



    /** \brief toByteArray() cast para ByteArray
                         * @param void* ou unsigned char*
             * @return String;
                         *
             */
        static std::string toString(unsigned char * object);

    static char* tocharp(const char * p);
        /**
         * \brief toUcharP() cast para ByteArray unsigned char*
         * @param String ou void*
                 * @return unsigned char*;
                 *
                 */
        static unsigned char* toUCharP(void * object);
        static unsigned char* toUCharP(std::string s);
};

#endif /* BINARY_H_ */
