//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMActivityManager : NSObject
{
    id _internal;
}

- (long long)simulateMotionState:(_Bool)arg1 withState:(long long)arg2;
- (long long)overrideOscarSideband:(_Bool)arg1 withState:(long long)arg2;
@property(readonly, nonatomic, getter=isActivityAvailable) _Bool activityAvailable;
@property(copy) CDUnknownBlockType activityHandler;
- (void)dealloc;
- (id)init;

@end

