//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOLogContext, NSMutableArray;
@protocol OS_dispatch_queue;

@interface GEOLogger : NSObject
{
    GEOLogContext *_cachedLogContext;
    NSMutableArray *_logContextDelegates;
    NSObject<OS_dispatch_queue> *_loggerQueue;
    void *_loggerQueueIdentityKey;
    void *_loggerQueueIdentityValue;
}

+ (void)registerGEOLogFacility;
+ (id)sharedLogger;
- (void)unregisterAllLogContextDelegates;
- (void)unregisterLogContextDelegate:(id)arg1;
- (void)registerLogContextDelegate:(id)arg1;
- (void)captureLogMsgStatesInContext:(id)arg1;
- (void)unregisterLogMsgStateType:(int)arg1;
- (void)captureLogMsgState:(id)arg1;
- (void)_captureLogMsgEvent:(id)arg1 withMergedContext:(id)arg2;
- (void)captureLogMsgEvent:(id)arg1 withLogContext:(id)arg2;
- (void)captureLogMsgEvent:(id)arg1;
- (id)sharedLogMessageFactoryInstance;
- (id)sharedLogManagerInstance;
- (void)dealloc;
- (id)init;

@end

