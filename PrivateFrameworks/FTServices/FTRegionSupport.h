//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FTMessageDelivery, NSArray;

@interface FTRegionSupport : NSObject
{
    NSArray *_regions;
    FTMessageDelivery *_delivery;
}

+ (id)sharedInstance;
@property(retain) FTMessageDelivery *_delivery; // @synthesize _delivery;
@property(retain) NSArray *_regions; // @synthesize _regions;
- (id)regionForID:(id)arg1;
@property(readonly) NSArray *regions;
@property(readonly) _Bool isLoading;
@property(readonly) _Bool isLoaded;
- (void)flushRegions;
- (void)startLoading;
- (void)_buildMessageDeliveryIfNeeded;
- (void)dealloc;

@end

