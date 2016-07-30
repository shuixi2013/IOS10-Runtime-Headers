//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOUserSessionEntity, NSLock;

@interface GEOUserSession : NSObject
{
    struct GEOSessionID _sessionID;
    double _sessionCreationTime;
    unsigned int _sequenceNumber;
    struct GEOSessionID _usageCollectionSessionID;
    double _usageSessionIDGenerationTime;
    _Bool _shareSessionWithMaps;
    GEOUserSessionEntity *_mapsUserSessionEntity;
    _Bool _zeroSessionIDMode;
    NSLock *_lock;
}

+ (void)registerGEOLogFacility;
+ (id)sharedInstance;
+ (void)setIsGeod;
+ (_Bool)isGeod;
@property _Bool zeroSessionIDMode; // @synthesize zeroSessionIDMode=_zeroSessionIDMode;
@property _Bool shareSessionWithMaps; // @synthesize shareSessionWithMaps=_shareSessionWithMaps;
- (unsigned int)incrementSequenceNumber;
- (void)setSharedMapsUserSessionEntity:(id)arg1 shareSessionIDWithMaps:(_Bool)arg2;
@property(retain, nonatomic) GEOUserSessionEntity *mapsUserSessionEntity; // @synthesize mapsUserSessionEntity=_mapsUserSessionEntity;
@property(readonly) struct GEOSessionID usageCollectionSessionID;
- (void)mapsSessionEntityWithCallback:(CDUnknownBlockType)arg1 shareSessionIDWithMaps:(_Bool)arg2 resetSession:(_Bool)arg3;
- (void)_mapsSessionEntityWithCallback:(CDUnknownBlockType)arg1;
- (void)_resetSessionID;
- (void)_updateSessionID;
- (void)_renewUsageCollectionSessionID;
- (void)_safe_renewUsageCollectionSessionID;
- (void)_updateWithNewUUIDForSessionID:(struct GEOSessionID *)arg1;
- (id)_defaultForKey:(id)arg1;
- (void)_setDefault:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end

