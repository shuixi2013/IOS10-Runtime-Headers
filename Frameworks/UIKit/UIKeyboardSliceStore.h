//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKeyboardSliceStore : NSObject
{
    NSMutableDictionary *_store;
}

+ (void)archiveSet:(id)arg1;
+ (id)sliceSetIDForKeyplaneName:(id)arg1 type:(long long)arg2 orientation:(long long)arg3;
+ (id)sliceSetForID:(id)arg1;
+ (id)sharedStore;
- (void).cxx_destruct;
- (id)sliceSetForID:(id)arg1;
- (void)addSet:(id)arg1;
- (id)init;

@end

