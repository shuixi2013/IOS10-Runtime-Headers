//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitApplicationLaunchEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _application;
    struct {
        unsigned int timestamp:1;
        unsigned int application:1;
    } _has;
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsApplication:(id)arg1;
- (id)applicationAsString:(int)arg1;
@property(nonatomic) _Bool hasApplication;
@property(nonatomic) int application; // @synthesize application=_application;
@property(nonatomic) _Bool hasTimestamp;

@end

