#include <iostream>
#include "hmac.h"
#include <libcryptosec/Base64.h>

int main(char** parm){

    unsigned int len = 20;

    unsigned char *result;

    ByteArray mac, key;
    mac = ByteArray("hello world");
    key = ByteArray("012345678");

    result = Hmac::genHmac(mac, key, MessageDigest::SHA1);

    printf("HMAC digest: ");

    for (int i = 0; i != len; i++)
        printf("%02x", (unsigned int)result[i]);

    printf("\n");

    free(result);
}
