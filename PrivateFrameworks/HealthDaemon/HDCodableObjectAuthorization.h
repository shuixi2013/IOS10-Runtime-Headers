//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface HDCodableObjectAuthorization : PBCodable <NSCopying>
{
    NSMutableArray *_authorizations;
    NSData *_objectUUID;
}

@property(retain, nonatomic) NSMutableArray *authorizations; // @synthesize authorizations=_authorizations;
@property(retain, nonatomic) NSData *objectUUID; // @synthesize objectUUID=_objectUUID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)authorizationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)authorizationsCount;
- (void)addAuthorizations:(id)arg1;
- (void)clearAuthorizations;
@property(readonly, nonatomic) _Bool hasObjectUUID;

@end

