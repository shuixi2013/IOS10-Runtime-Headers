//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordResolveTokenRequest : PBRequest <NSCopying>
{
    NSMutableArray *_rootRecordDesiredKeys;
    NSString *_routingKey;
    NSData *_shortTokenHash;
    _Bool _forceFetch;
    _Bool _shouldFetchRootRecord;
    struct {
        unsigned int forceFetch:1;
        unsigned int shouldFetchRootRecord:1;
    } _has;
}

+ (Class)rootRecordDesiredKeysType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *rootRecordDesiredKeys; // @synthesize rootRecordDesiredKeys=_rootRecordDesiredKeys;
@property(nonatomic) _Bool forceFetch; // @synthesize forceFetch=_forceFetch;
@property(retain, nonatomic) NSData *shortTokenHash; // @synthesize shortTokenHash=_shortTokenHash;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)rootRecordDesiredKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)rootRecordDesiredKeysCount;
- (void)addRootRecordDesiredKeys:(id)arg1;
- (void)clearRootRecordDesiredKeys;
@property(nonatomic) _Bool hasShouldFetchRootRecord;
@property(nonatomic) _Bool shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;
@property(nonatomic) _Bool hasForceFetch;
@property(readonly, nonatomic) _Bool hasShortTokenHash;
@property(readonly, nonatomic) _Bool hasRoutingKey;

@end

