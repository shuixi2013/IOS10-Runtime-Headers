//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray;

@interface GKEventEmitter : NSObject
{
    NSHashTable *_listeners;
    NSMutableArray *_supportedProtocols;
    _Bool _shouldQueue;
    NSMutableArray *_queuedEvents;
}

+ (id)eventEmitterForProtocols:(id)arg1 shouldQueue:(_Bool)arg2;
+ (id)eventEmitterForProtocols:(id)arg1;
@property(retain, nonatomic) NSMutableArray *queuedEvents; // @synthesize queuedEvents=_queuedEvents;
@property(nonatomic) _Bool shouldQueue; // @synthesize shouldQueue=_shouldQueue;
@property(retain, nonatomic) NSMutableArray *supportedProtocols; // @synthesize supportedProtocols=_supportedProtocols;
@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
- (_Bool)listenerRegisteredForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)invocationForProtocol:(id)arg1 selector:(SEL)arg2;
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1;
- (void)dispatchQueuedEventsToListener:(id)arg1;
- (void)dealloc;
- (id)initWithSupportedProtocols:(id)arg1 shouldQueue:(_Bool)arg2;

@end

