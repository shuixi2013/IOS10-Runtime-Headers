//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitActivityRingEvent : PBCodable <NSCopying>
{
    unsigned long long _eventTimestamp;
    unsigned long long _timestamp;
    unsigned int _activeSeconds;
    unsigned int _age;
    unsigned int _biologicalSex;
    unsigned int _briskMinutes;
    unsigned int _energyBurned;
    unsigned int _energyBurnedGoal;
    unsigned int _height;
    unsigned int _weight;
    struct {
        unsigned int eventTimestamp:1;
        unsigned int timestamp:1;
        unsigned int activeSeconds:1;
        unsigned int age:1;
        unsigned int biologicalSex:1;
        unsigned int briskMinutes:1;
        unsigned int energyBurned:1;
        unsigned int energyBurnedGoal:1;
        unsigned int height:1;
        unsigned int weight:1;
    } _has;
}

@property(nonatomic) unsigned int age; // @synthesize age=_age;
@property(nonatomic) unsigned int weight; // @synthesize weight=_weight;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int biologicalSex; // @synthesize biologicalSex=_biologicalSex;
@property(nonatomic) unsigned long long eventTimestamp; // @synthesize eventTimestamp=_eventTimestamp;
@property(nonatomic) unsigned int energyBurnedGoal; // @synthesize energyBurnedGoal=_energyBurnedGoal;
@property(nonatomic) unsigned int activeSeconds; // @synthesize activeSeconds=_activeSeconds;
@property(nonatomic) unsigned int briskMinutes; // @synthesize briskMinutes=_briskMinutes;
@property(nonatomic) unsigned int energyBurned; // @synthesize energyBurned=_energyBurned;
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
@property(nonatomic) _Bool hasAge;
@property(nonatomic) _Bool hasWeight;
@property(nonatomic) _Bool hasHeight;
@property(nonatomic) _Bool hasBiologicalSex;
@property(nonatomic) _Bool hasEventTimestamp;
@property(nonatomic) _Bool hasEnergyBurnedGoal;
@property(nonatomic) _Bool hasActiveSeconds;
@property(nonatomic) _Bool hasBriskMinutes;
@property(nonatomic) _Bool hasEnergyBurned;
@property(nonatomic) _Bool hasTimestamp;

@end

