//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CalDarwinNotificationListener : NSObject
{
    _Bool _internalListening;
    NSString *_notificationName;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(nonatomic) _Bool internalListening; // @synthesize internalListening=_internalListening;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void).cxx_destruct;
- (_Bool)_removeObserver;
- (_Bool)_addObserver;
- (void)_stopAndEmitWarningIfNeeded:(_Bool)arg1;
- (void)_notificationWithNameReceived:(id)arg1;
- (void)stop;
- (void)start;
@property(readonly, nonatomic) _Bool listening;
- (id)description;
- (void)dealloc;
- (id)initWithNotificationName:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

