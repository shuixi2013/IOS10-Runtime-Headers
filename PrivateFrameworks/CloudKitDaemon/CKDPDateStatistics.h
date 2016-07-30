//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPDate;

__attribute__((visibility("hidden")))
@interface CKDPDateStatistics : PBCodable <NSCopying>
{
    CKDPDate *_creation;
    CKDPDate *_modification;
}

@property(retain, nonatomic) CKDPDate *modification; // @synthesize modification=_modification;
@property(retain, nonatomic) CKDPDate *creation; // @synthesize creation=_creation;
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
@property(readonly, nonatomic) _Bool hasModification;
@property(readonly, nonatomic) _Bool hasCreation;

@end

