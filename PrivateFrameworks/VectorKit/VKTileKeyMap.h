//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKTileKeyMap : NSObject
{
    long long _type;
    void *_map;
}

- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)count;
- (void)removeObjectForKey:(const struct VKTileKey *)arg1;
- (void)setObject:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (id)objectForKey:(const struct VKTileKey *)arg1;
- (id)contentsDescription;
- (id)description;
- (void)dealloc;
- (void)removeAllObjects;
- (id)initWithMapType:(long long)arg1;

@end

