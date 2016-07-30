//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDLocationDelegate-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class CLLocation, CLRegion, HMDHome, HMFMessageDispatcher, NSDate, NSString, NSTimeZone, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDHomeLocationHandler : NSObject <HMDLocationDelegate, HMFMessageReceiver, NSSecureCoding>
{
    _Bool _shouldEvaluateRegionState;
    _Bool _expectingLocationUpdateForHome;
    int _locationAuthorization;
    CLLocation *_location;
    NSTimeZone *_timeZone;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDHome *_home;
    NSDate *_locationUpdateTimestamp;
    CLRegion *_region;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)mergeLocationDataForLocalHome:(id)arg1 withCloudHome:(id)arg2;
@property(nonatomic, getter=isExpectingLocationUpdateForHome) _Bool expectingLocationUpdateForHome; // @synthesize expectingLocationUpdateForHome=_expectingLocationUpdateForHome;
@property(nonatomic) _Bool shouldEvaluateRegionState; // @synthesize shouldEvaluateRegionState=_shouldEvaluateRegionState;
@property(retain, nonatomic) CLRegion *region; // @synthesize region=_region;
@property(nonatomic) int locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property(retain, nonatomic) NSDate *locationUpdateTimestamp; // @synthesize locationUpdateTimestamp=_locationUpdateTimestamp;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)didDetermineState:(long long)arg1 forRegion:(id)arg2;
- (void)didDetermineLocation:(id)arg1;
- (void)extractHomeLocation:(CDUnknownBlockType)arg1;
- (void)_sendLocationUpdate;
- (void)_saveToLocalstoreWithLocalChange:(_Bool)arg1;
- (void)_setNewlocation:(id)arg1;
- (void)_updateLocation:(id)arg1;
- (void)_updateTimeZone:(id)arg1;
- (void)_evaluateHomeRegionState:(id)arg1;
- (_Bool)_needToExtractLocation;
- (void)_evaluateLocationExtraction;
- (_Bool)_canExtractLocation;
- (void)accessoriesReachabilityStateChanged;
- (void)accessoryAdded;
- (void)_handleRetrieveLocation:(id)arg1;
- (void)_handleLocationAuthorization:(int)arg1;
- (void)_handleLocationAuthorizationMessage:(id)arg1;
- (void)_registerForRegionUpdate;
- (void)_registerForMessages;
- (void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;
- (void)dealloc;
- (id)init;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

