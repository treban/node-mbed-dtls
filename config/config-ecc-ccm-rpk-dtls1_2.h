/*
 * Minimal configuration for DTLS 1.2 with Raw Public Key and AES-CCM ciphersuites
 * See README.txt for usage instructions.
 */
#ifndef MBEDTLS_CONFIG_H
#define MBEDTLS_CONFIG_H

#if defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
#define _CRT_SECURE_NO_DEPRECATE 1
#endif

#define MBEDTLS_SSL_SRV_C


/* System support */
//#define MBEDTLS_HAVE_TIME /* Optionally used in Hello messages */
/* Other MBEDTLS_HAVE_XXX flags irrelevant for this configuration */

#define MBEDTLS_HAVE_ASM
#define MBEDTLS_HAVE_TIME
#define MBEDTLS_HAVE_TIME_DATE
#define MBEDTLS_DEPRECATED_REMOVED

/* mbed TLS feature support */

// TODO maybe MBEDTLS_AES_ALT and use OpenSSL from node?
#define MBEDTLS_ECP_DP_SECP256R1_ENABLED
#define MBEDTLS_ECP_NIST_OPTIM
#define MBEDTLS_ECDSA_DETERMINISTIC

#define MBEDTLS_SSL_PROTO_TLS1_2
#define MBEDTLS_SSL_DTLS_HANDSHAKE_QUEUE
#define MBEDTLS_SSL_RAW_PUBLIC_KEY_SUPPORT


/* Symmetric cipher block modes. */
#define MBEDTLS_CIPHER_MODE_CBC
#define MBEDTLS_CIPHER_MODE_CFB
#define MBEDTLS_CIPHER_MODE_CTR

/* ECC curves. */
#define MBEDTLS_ECP_DP_SECP192R1_ENABLED
#define MBEDTLS_ECP_DP_SECP224R1_ENABLED
#define MBEDTLS_ECP_DP_SECP256R1_ENABLED
#define MBEDTLS_ECP_DP_SECP384R1_ENABLED
#define MBEDTLS_ECP_DP_SECP521R1_ENABLED
#define MBEDTLS_ECP_DP_SECP192K1_ENABLED
#define MBEDTLS_ECP_DP_SECP224K1_ENABLED
#define MBEDTLS_ECP_DP_SECP256K1_ENABLED
#define MBEDTLS_ECP_DP_BP256R1_ENABLED
#define MBEDTLS_ECP_DP_BP384R1_ENABLED
#define MBEDTLS_ECP_DP_BP512R1_ENABLED
#define MBEDTLS_ECP_DP_CURVE25519_ENABLED

#define MBEDTLS_ECDSA_DETERMINISTIC
#define MBEDTLS_KEY_EXCHANGE_PSK_ENABLED
#define MBEDTLS_KEY_EXCHANGE_DHE_PSK_ENABLED
#define MBEDTLS_KEY_EXCHANGE_ECDHE_PSK_ENABLED

#define MBEDTLS_KEY_EXCHANGE_ECDHE_ECDSA_ENABLED
#define MBEDTLS_KEY_EXCHANGE_ECDH_ECDSA_ENABLED
#define MBEDTLS_PK_PARSE_EC_EXTENDED


#define MBEDTLS_SSL_DEBUG_ALL
#define MBEDTLS_SSL_ENCRYPT_THEN_MAC
#define MBEDTLS_SSL_EXTENDED_MASTER_SECRET
#define MBEDTLS_SSL_FALLBACK_SCSV
//#define MBEDTLS_SSL_CBC_RECORD_SPLITTING
#define MBEDTLS_SSL_RENEGOTIATION
#define MBEDTLS_SSL_SRV_RESPECT_CLIENT_PREFERENCE
#define MBEDTLS_SSL_MAX_FRAGMENT_LENGTH

#define MBEDTLS_SSL_ALPN

/* DTLS modules */
#define MBEDTLS_SSL_PROTO_DTLS
#define MBEDTLS_SSL_DTLS_ANTI_REPLAY
#define MBEDTLS_SSL_DTLS_HELLO_VERIFY
//#define MBEDTLS_SSL_DTLS_CLIENT_PORT_REUSE
#define MBEDTLS_SSL_DTLS_BADMAC_LIMIT

#define MBEDTLS_SSL_SESSION_TICKETS
#define MBEDTLS_SSL_EXPORT_KEYS
#define MBEDTLS_SSL_SERVER_NAME_INDICATION
#define MBEDTLS_SSL_TRUNCATED_HMAC

//#define MBEDTLS_THREADING_PTHREAD
//#define MBEDTLS_THREADING_C
#define MBEDTLS_VERSION_FEATURES

#define MBEDTLS_X509_CHECK_KEY_USAGE
#define MBEDTLS_X509_CHECK_EXTENDED_KEY_USAGE


/* mbed TLS modules */
#define MBEDTLS_GENPRIME
#define MBEDTLS_AESNI_C
#define MBEDTLS_AES_C
#define MBEDTLS_ASN1_PARSE_C
#define MBEDTLS_ASN1_WRITE_C
#define MBEDTLS_BASE64_C
#define MBEDTLS_BIGNUM_C
#define MBEDTLS_BLOWFISH_C
#define MBEDTLS_CAMELLIA_C
#define MBEDTLS_CCM_C
#define MBEDTLS_CERTS_C
#define MBEDTLS_CIPHER_C
#define MBEDTLS_CTR_DRBG_C
#define MBEDTLS_DHM_C
#define MBEDTLS_ECDH_C
#define MBEDTLS_ECDSA_C
#define MBEDTLS_ECP_C
#define MBEDTLS_ENTROPY_C
#define MBEDTLS_GCM_C
#define MBEDTLS_HMAC_DRBG_C
#define MBEDTLS_MD_C
#define MBEDTLS_MD5_C
#define MBEDTLS_OID_C
#define MBEDTLS_PEM_PARSE_C
#define MBEDTLS_PEM_WRITE_C
#define MBEDTLS_PK_C
#define MBEDTLS_PK_PARSE_C
#define MBEDTLS_PK_WRITE_C

#define MBEDTLS_PLATFORM_C

#define MBEDTLS_RIPEMD160_C
#define MBEDTLS_SHA1_C
#define MBEDTLS_SHA256_C
#define MBEDTLS_SHA512_C

#define MBEDTLS_SSL_COOKIE_C
#define MBEDTLS_SSL_TICKET_C

#define MBEDTLS_SSL_TLS_C
#define MBEDTLS_TIMING_C
#define MBEDTLS_VERSION_C

#define MBEDTLS_X509_USE_C
#define MBEDTLS_X509_CRT_PARSE_C
#define MBEDTLS_X509_CRL_PARSE_C

#define MBEDTLS_XTEA_C


/**
 * \def MBEDTLS_NET_C
 *
 * Enable the TCP and UDP over IPv6/IPv4 networking routines.
 *
 * \note This module only works on POSIX/Unix (including Linux, BSD and OS X)
 * and Windows. For other platforms, you'll want to disable it, and write your
 * own networking callbacks to be passed to \c mbedtls_ssl_set_bio().
 *
 * \note See also our Knowledge Base article about porting to a new
 * environment:
 * https://tls.mbed.org/kb/how-to/how-do-i-port-mbed-tls-to-a-new-environment-OS
 *
 * Module:  library/net.c
 *
 * This module provides networking routines.
 */
#define MBEDTLS_NET_C


#define MBEDTLS_DEBUG_C
#define MBEDTLS_ERROR_C

/* Save RAM at the expense of ROM */
#define MBEDTLS_AES_ROM_TABLES


/*
 * Save RAM at the expense of interoperability: do this only if you control
 * both ends of the connection!  (See comments in "mbedtls/ssl.h".)
 * The optimal size here depends on the typical size of records.
 */
#define MBEDTLS_SSL_MAX_CONTENT_LEN             1280

#include "mbedtls/check_config.h"

#endif /* MBEDTLS_CONFIG_H */
