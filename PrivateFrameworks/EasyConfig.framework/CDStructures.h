/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#pragma mark Named Structures

struct HTTPMessagePrivate {
    struct __CFRuntimeBase {
        unsigned int _field1;
        unsigned char _field2[4];
    } _field1;
    struct HTTPMessagePrivate *_field2;
    struct {
        char _field1[8192];
        unsigned int _field2;
        char *_field3;
        unsigned int _field4;
        char *_field5;
        unsigned int _field6;
        char *_field7;
        unsigned int _field8;
        struct {
            char *_field1;
            unsigned int _field2;
            char *_field3;
            unsigned int _field4;
            char *_field5;
            unsigned int _field6;
            char *_field7;
            unsigned int _field8;
            char *_field9;
            unsigned int _field10;
            char *_field11;
            unsigned int _field12;
            char *_field13;
            unsigned int _field14;
            char *_field15;
            char *_field16;
        } _field9;
        char *_field10;
        unsigned int _field11;
        int _field12;
        char *_field13;
        unsigned int _field14;
        unsigned char _field15;
        unsigned long long _field16;
        unsigned char _field17;
        int _field18;
    } _field3;
    unsigned char _field4;
    unsigned char _field5;
    char *_field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned char _field10[32000];
    char *_field11;
    struct iovec _field12[2];
    struct iovec *_field13;
    int _field14;
    unsigned long long _field15;
    int _field16;
    void *_field17;
    void *_field18;
    void *_field19;
    void *_field20;
    void *_field21;
    void *_field22;
    void *_field23;
    id _field24;
    void _field25;
};

struct iovec {
    void *_field1;
    unsigned int _field2;
};
