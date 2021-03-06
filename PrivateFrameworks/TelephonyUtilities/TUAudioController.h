//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface TUAudioController : NSObject
{
    NSObject<OS_dispatch_semaphore> *_modifyingStateLock;
    NSObject<OS_dispatch_group> *_outstandingRequestsGroup;
}

- (void).cxx_destruct;
- (void)blockUntilOutstandingRequestsComplete;
- (id)init;
- (void)_requestUpdatedValueWithBlock:(CDUnknownBlockType)arg1 object:(id *)arg2 isRequestingPointer:(_Bool *)arg3 forceNewRequest:(_Bool)arg4 scheduleTimePointer:(unsigned long long *)arg5 notificationString:(id)arg6 queue:(id)arg7;
- (void)_leaveOutstandingRequestsGroup;
- (void)_enterOutstandingRequestsGroup;
- (void)_releaseLock;
- (void)_acquireLock;

@end

