//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOExperimentServerProxy-Protocol.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEOABAssignmentRequest, GEOABAssignmentResponse, NSLock, NSString;
@protocol GEOExperimentServerProxyDelegate, OS_dispatch_source;

@interface GEOExperimentServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOExperimentServerProxy>
{
    id <GEOExperimentServerProxyDelegate> _delegate;
    GEOABAssignmentResponse *_experimentsInfo;
    NSLock *_experimentsInfoLock;
    NSObject<OS_dispatch_source> *_updateTimer;
    NSLock *_updateTimerLock;
    GEOABAssignmentRequest *_currentRequest;
    NSLock *_currentRequestLock;
}

@property(nonatomic) id <GEOExperimentServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)_loadExperimentsConfiguration:(CDUnknownBlockType)arg1;
- (void)forceUpdate;
- (void)_updateIfNecessary;
- (void)_scheduleUpdateTimer:(double)arg1;
- (double)_timeToNextUpdate;
- (_Bool)_removeOldExperimentsInfoIfNecessary;
- (void)_invalidateTileCache:(_Bool)arg1 placesCache:(_Bool)arg2;
- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
@property(readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

