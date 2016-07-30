//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableDictionary;

@interface TKDisplayLinkManager : NSObject
{
    CADisplayLink *_displayLink;
    NSMutableDictionary *_activeObservers;
    NSMutableDictionary *_updatedObservers;
    _Bool _hasUpdatedObservers;
    _Bool _isHandlingDisplayRefresh;
    unsigned long long _warmUpModeRequirementsCount;
}

+ (void)_releaseCurrentDisplayLinkManager;
+ (id)currentDisplayLinkManager;
- (void).cxx_destruct;
- (void)_displayDidRefresh:(id)arg1;
- (void)endRequiringWarmUpMode;
- (void)beginRequiringWarmUpMode;
- (_Bool)_isWarmUpModeEnabled;
- (void)_didRemoveLastObserver;
- (void)_didAddFirstObserver;
- (id)_prepareUpdatedObserversForModification;
- (void)removeObserverWithToken:(id)arg1;
- (id)addObserverForFrameInterval:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)addObserverWithHandler:(CDUnknownBlockType)arg1;
- (void)_setDisplayLink:(id)arg1;
- (id)_displayLink;
@property(readonly, nonatomic) double timestamp;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
- (void)dealloc;
- (id)init;

@end

