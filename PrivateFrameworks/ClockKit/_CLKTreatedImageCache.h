//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface _CLKTreatedImageCache : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableArray *_recentlyUsedKeys;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_pruneCacheIfNecessary;
- (id)imageForRawImage:(id)arg1 scale:(double)arg2 maskToCircle:(_Bool)arg3;
- (id)init;

@end

