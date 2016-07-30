//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface _PLExpirableSet : NSObject
{
    NSMutableSet *_set;
    NSMutableDictionary *_recentTouches;
    double _secondsToExpire;
}

- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (_Bool)_didExpireObject:(id)arg1;
- (void)_touch:(id)arg1;
- (id)initWithSecondsToExpire:(double)arg1;
- (void)dealloc;

@end

