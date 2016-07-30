//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSData;

@interface NNMKProtoCompactMessagesRequest : PBRequest <NSCopying>
{
    NSData *_beforeDateReceived;
    unsigned int _fullSyncVersion;
    CDStruct_a125a100 _has;
}

@property(retain, nonatomic) NSData *beforeDateReceived; // @synthesize beforeDateReceived=_beforeDateReceived;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
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
@property(readonly, nonatomic) _Bool hasBeforeDateReceived;
@property(nonatomic) _Bool hasFullSyncVersion;

@end

