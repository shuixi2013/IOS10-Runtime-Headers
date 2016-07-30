//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject;
@protocol OS_dispatch_group;

@interface SGOperationForWithDbLock : NSOperation
{
    NSObject<OS_dispatch_group> *_group;
    // Error parsing type: AB, name: _started
    // Error parsing type: AB, name: _completed
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)complete;
- (void)waitForStart;
- (void)start;
- (id)init;

@end

