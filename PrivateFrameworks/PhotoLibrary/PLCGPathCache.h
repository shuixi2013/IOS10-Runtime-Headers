//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLCGPathCache : NSObject
{
    struct __CFDictionary *_pathCache;
}

+ (id)sharedPathCache;
- (struct CGPath *)pathForKey:(struct CGRect)arg1;
- (void)setPath:(struct CGPath *)arg1 forKey:(struct CGRect)arg2;
- (void)dealloc;
- (id)init;

@end

