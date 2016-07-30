//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDAWDHealthKitWorkoutSessionEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _activityType;
    int _eventType;
    NSString *_sessionUUID;
    struct {
        unsigned int timestamp:1;
        unsigned int activityType:1;
        unsigned int eventType:1;
    } _has;
}

@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (int)StringAsEventType:(id)arg1;
- (id)eventTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasEventType;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
- (int)StringAsActivityType:(id)arg1;
- (id)activityTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasActivityType;
@property(nonatomic) int activityType; // @synthesize activityType=_activityType;
@property(nonatomic) _Bool hasTimestamp;

@end

