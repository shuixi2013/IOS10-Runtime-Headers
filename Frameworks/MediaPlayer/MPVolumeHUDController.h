//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface MPVolumeHUDController : NSObject
{
    NSMutableArray *_contexts;
    NSMutableSet *_categories;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateVisibility;
- (void)setNeedsUpdate;
- (void)unregisterView:(id)arg1 inContext:(id)arg2;
- (void)registerView:(id)arg1 inContext:(id)arg2;
- (void)popContext;
- (id)pushContext;
@property(readonly, nonatomic) id mainContext;
- (id)init;

@end

