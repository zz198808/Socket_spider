//
// Created by Jacob Timber on 11/14/16.
//

#ifndef SOCKET_SPIDER_BASIC_PROPERTIES_H
#define SOCKET_SPIDER_BASIC_PROPERTIES_H

#define BUF_SIZE 512
#define LENGTH 44045

#include <queue>
#include <string>
#include <iostream>
using namespace std;

#ifdef __cpluscplus
extern "C" {
#endif

    extern struct URL {
        char host[64];
        string url;//除去域名后的url
    };

    extern char *basic_url;
    extern unsigned char *dataHash;//布隆过滤器的hash表

#ifdef __cpluscplus
}
#endif
#endif