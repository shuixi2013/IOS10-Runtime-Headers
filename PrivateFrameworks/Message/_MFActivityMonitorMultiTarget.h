//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject
{
    id _primaryTarget;
    NSMutableSet *_allTargets;
}

- (id)displayName;
- (id)allTargets;
- (void)setPrimaryTarget:(id)arg1;
- (id)primaryTarget;
- (_Bool)removeActivityTarget:(id)arg1;
- (_Bool)addActivityTarget:(id)arg1;
- (void)dealloc;

@end

