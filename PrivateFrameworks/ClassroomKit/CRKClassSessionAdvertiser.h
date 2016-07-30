//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSNetServiceDelegate-Protocol.h>

@class CRKClassSessionBeacon, DMFControlSessionIdentifier, NSNetService, NSString, NSTimer;
@protocol CRKClassSessionAdvertiserDelegate;

@interface CRKClassSessionAdvertiser : NSObject <NSNetServiceDelegate>
{
    NSString *mServiceType;
    NSNetService *mNetService;
    CRKClassSessionBeacon *mSessionBeacon;
    NSTimer *mBeaconToggleTimer;
    _Bool _includeNearbyStudents;
    id <CRKClassSessionAdvertiserDelegate> _delegate;
    DMFControlSessionIdentifier *_classSessionIdentifier;
}

@property(nonatomic) _Bool includeNearbyStudents; // @synthesize includeNearbyStudents=_includeNearbyStudents;
@property(copy, nonatomic) DMFControlSessionIdentifier *classSessionIdentifier; // @synthesize classSessionIdentifier=_classSessionIdentifier;
@property(nonatomic) __weak id <CRKClassSessionAdvertiserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)stopBeacon;
- (void)startClassBeacon;
- (void)scheduleBeaconToggle:(id)arg1;
- (void)updateSessionBeacon;
- (id)instructorSocketOptions;
- (void)registerDefaults;
@property(readonly, nonatomic) _Bool isAdvertising;
- (id)initWithServiceType:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
