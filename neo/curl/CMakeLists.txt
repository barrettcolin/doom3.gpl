# curl static library
ADD_DEFINITIONS(-D_USRDLL -DCURLLIB_EXPORTS)
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/neo/curl/include)

SET(CURL_SRCS
    # source
    lib/base64.c
    lib/connect.c
    lib/cookie.c
    lib/dict.c
    lib/easy.c
    lib/escape.c
    lib/file.c
    lib/formdata.c
    lib/ftp.c
    lib/getdate.c
    lib/getenv.c
    lib/getinfo.c
    lib/hash.c
    lib/hostip.c
    lib/http.c
    lib/http_chunks.c
    lib/if2ip.c
    lib/krb4.c
    lib/ldap.c
    lib/llist.c
    lib/memdebug.c
    lib/mprintf.c
    lib/multi.c
    lib/netrc.c
    lib/progress.c
    lib/security.c
    lib/sendf.c
    lib/share.c
    lib/speedcheck.c
    lib/ssluse.c
    lib/strequal.c
    lib/strtok.c
    lib/telnet.c
    lib/timeval.c
    lib/transfer.c
    lib/url.c
    lib/version.c
    lib/http_digest.c
    lib/http_ntlm.c
    lib/inet_pton.c
    lib/md5.c
    
    # includes
    lib/arpa_telnet.h
    lib/base64.h
    lib/connect.h
    lib/cookie.h
    lib/dict.h
    lib/escape.h
    lib/file.h
    lib/formdata.h
    lib/ftp.h
    lib/getdate.h
    lib/hostip.h
    lib/http.h
    lib/http_chunks.h
    lib/http_digest.h
    lib/http_ntlm.h
    lib/if2ip.h
    lib/inet_ntoa_r.h
    lib/inet_pton.h
    lib/krb4.h
    lib/ldap.h
    lib/md5.h
    lib/memdebug.h
    lib/netrc.h
    lib/progress.h
    lib/security.h
    lib/sendf.h
    lib/setup.h
    lib/speedcheck.h
    lib/ssluse.h
    lib/strequal.h
    lib/strtok.h
    lib/telnet.h
    lib/timeval.h
    lib/transfer.h
    lib/url.h
    lib/urldata.h)

ADD_LIBRARY(curl ${CURL_SRCS})
