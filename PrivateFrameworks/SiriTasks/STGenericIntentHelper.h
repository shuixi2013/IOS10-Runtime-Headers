//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface STGenericIntentHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_handlers;
    NSObject<OS_dispatch_queue> *_siriResponseQueue;
    NSObject<OS_dispatch_semaphore> *_waitForIntentCompleteSemaphore;
}

+ (id)sharedHelper;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitForIntentCompleteSemaphore; // @synthesize waitForIntentCompleteSemaphore=_waitForIntentCompleteSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *siriResponseQueue; // @synthesize siriResponseQueue=_siriResponseQueue;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
- (void).cxx_destruct;
- (_Bool)doIntent:(id)arg1;
- (void)forIntent:(id)arg1 registerHandler:(CDUnknownBlockType)arg2;
- (void)forIntentParam:(id)arg1 predict:(id)arg2;
- (void)handleIntent:(id)arg1 withTask:(id)arg2 andApplication:(id)arg3;
- (void)handleSiriTask:(id)arg1 withApplication:(id)arg2;
- (void)finishedLaunching:(_Bool)arg1;
- (id)init;

@end

