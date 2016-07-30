//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString, SYErrorInfo, SYMessageHeader;

@interface SYEndSyncSession : PBCodable <NSCopying>
{
    SYErrorInfo *_error;
    SYMessageHeader *_header;
    NSString *_sessionID;
    _Bool _rollback;
    struct {
        unsigned int rollback:1;
    } _has;
}

@property(nonatomic) _Bool rollback; // @synthesize rollback=_rollback;
@property(retain, nonatomic) SYErrorInfo *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
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
@property(nonatomic) _Bool hasRollback;
@property(readonly, nonatomic) _Bool hasError;

@end

