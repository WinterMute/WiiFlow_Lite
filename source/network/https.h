/*
    Code by blackb0x @ GBAtemp.net
    This allows the Wii to download from servers that use SNI.
*/
#ifndef _HTTPS_H_
#define _HTTPS_H_

#ifdef __cplusplus
extern "C"
{
#endif

    struct download
    {
        bool skip_response; // Used by WiinnerTag
        u64 content_length;
        u64 size;
        char *data;
    };

    void downloadfile(const char *url, struct download *buffer);

#ifdef __cplusplus
}
#endif


#if 0
#include <libwolfssl/ssl.h>

#include "dns.h"
#include "picohttpparser.h"

#ifdef __cplusplus
extern "C"
{
#endif

// #define DEBUG_NETWORK
#define REDIRECT_LIMIT 3
#define CONNECT_TIMEOUT 10000
#define READ_WRITE_TIMEOUT 20000
#define BLOCK_SIZE 8192

    struct download
    {
        bool skip_response; // Used by WiinnerTag
        u64 content_length;
        u64 size;
        char *data;
    };

    typedef struct
    {
        int status;
        int pret;
        size_t num_headers;
        size_t buflen;
        struct phr_header headers[100];
        char data[4096];
    } HTTP_RESPONSE;

    typedef struct
    {
        u8 use_https;
        s32 sock;
        WOLFSSL *ssl;
        WOLFSSL_CTX *ctx;
    } HTTP_INFO;

    void downloadfile(const char *url, struct download *buffer);
    int wolfSSL_CTX_UseSNI(WOLFSSL_CTX *ctx, unsigned char type, const void *data, unsigned short size);

#ifdef __cplusplus
}
#endif
#endif // #if 0

#endif /* _HTTPS_H_ */
