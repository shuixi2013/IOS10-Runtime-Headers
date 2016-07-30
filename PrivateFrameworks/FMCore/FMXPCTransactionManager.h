//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSString;
@protocol OS_dispatch_queue;

@interface FMXPCTransactionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_txn_ops_queue;
    NSCountedSet *_activeTransactions;
    NSString *_keepAliveActivityIdentifier;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *keepAliveActivityIdentifier; // @synthesize keepAliveActivityIdentifier=_keepAliveActivityIdentifier;
@property(retain, nonatomic) NSCountedSet *activeTransactions; // @synthesize activeTransactions=_activeTransactions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *txn_ops_queue; // @synthesize txn_ops_queue=_txn_ops_queue;
- (void).cxx_destruct;
- (void)_disableOldKeepAliveActivity;
- (void)_disableLaunchOnRebootActivity:(id)arg1;
- (void)_disableKeepAlive;
- (void)_enableKeepAlive;
- (id)dumpActiveTransactions;
- (void)endTransaction:(id)arg1;
- (void)beginTransaction:(id)arg1;
- (void)dealloc;
- (void)setLaunchOnRebootActivity:(id)arg1 keepAliveActivity:(id)arg2;
- (id)initSingleton;
- (id)init;

@end

