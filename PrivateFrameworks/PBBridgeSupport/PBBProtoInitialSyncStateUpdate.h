//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@interface PBBProtoInitialSyncStateUpdate : PBCodable <NSCopying>
{
    double _progress;
    unsigned int _state;
    struct {
        unsigned int progress:1;
        unsigned int state:1;
    } _has;
}

@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasState;
@property(nonatomic) _Bool hasProgress;

@end

