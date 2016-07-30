//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct HTTPMessagePrivate {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        unsigned char _field2[4];
        unsigned int _field3;
    } _field1;
    struct HTTPMessagePrivate *_field2;
    struct {
        char _field1[8192];
        unsigned long long _field2;
        char *_field3;
        unsigned long long _field4;
        char *_field5;
        unsigned long long _field6;
        int _field7;
        char *_field8;
        unsigned long long _field9;
        struct {
            char *_field1;
            unsigned long long _field2;
            char *_field3;
            unsigned long long _field4;
            char *_field5;
            unsigned long long _field6;
            char *_field7;
            unsigned long long _field8;
            char *_field9;
            unsigned long long _field10;
            char *_field11;
            unsigned long long _field12;
            char *_field13;
            unsigned long long _field14;
            char *_field15;
            char *_field16;
        } _field10;
        char *_field11;
        unsigned long long _field12;
        int _field13;
        char *_field14;
        unsigned long long _field15;
        unsigned char _field16;
        unsigned long long _field17;
        unsigned char _field18;
        int _field19;
    } _field3;
    unsigned char _field4;
    int _field5;
    unsigned char _field6;
    char *_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned char _field11[32000];
    char *_field12;
    struct *_field13;
    char *_field14;
    unsigned long long _field15;
    struct iovec _field16[2];
    struct iovec *_field17;
    int _field18;
    unsigned long long _field19;
    int _field20;
    int _field21;
    int _field22;
    void *_field23;
    void *_field24;
    void *_field25;
    void *_field26;
    void *_field27;
    void *_field28;
    CDUnknownFunctionPointerType _field29;
    CDUnknownFunctionPointerType _field30;
    CDUnknownBlockType _field31;
    int _field32;
    unsigned char _field33;
    long long _field34;
    char *_field35;
    int _field36;
    unsigned long long _field37;
};

struct iovec {
    void *_field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    double startTime;
    unsigned char userChangedFriendlyName;
    unsigned char playPasswordSet;
    unsigned char adminPasswordSet;
    unsigned char destinationNetworkRecommendationUsed;
    double secondsToGetLinkUpOnSWAP;
    int wifiJoinSWAPError;
    unsigned char hitJoiningTargetSWAPTimeout;
    int rssiOfSWAP;
    unsigned int snrOfSWAP;
    unsigned int channelOfSWAP;
} CDStruct_56123b44;

typedef struct {
    double secondsToGetLinkUpOnDestination;
    int wifiJoinDestinationAPError;
    unsigned char destinationNetworkPSKInKeychain;
    unsigned char hitJoiningDestinationAPTimeout;
    int rssiOfDestinationAP;
    unsigned int snrOfDestinationAP;
    unsigned int channelOfDestinationAP;
} CDStruct_6a23f5a0;

