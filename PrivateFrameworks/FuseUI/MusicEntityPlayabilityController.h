//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MusicEntityPlayabilityController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _cellularNetworkAllowed;
    _Bool _showCloudMediaEnabled;
    _Bool _hasValidNetworkType;
    long long _networkType;
}

- (void).cxx_destruct;
- (_Bool)_isCellularNetworkAllowed;
- (long long)_networkType;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_musicDefaultsDidChangeNotification:(id)arg1;
- (void)_fairPlaySubscriptionStatusDidChangeNotification:(id)arg1;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)arg1;
- (void)_allowsExplicitContentDidChangeNotification:(id)arg1;
- (unsigned long long)entityPlayabilityResultForEntityValueContext:(id)arg1;
- (void)dealloc;
- (id)init;

@end

