//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservationInfo : NSObject
{
    NSArray *_observances;
    unsigned long long _cachedHash;
    _Bool _cachedIsShareable;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)_initWithObservances:(id *)arg1 count:(unsigned long long)arg2 hashValue:(unsigned long long)arg3;
- (id)_copyByAddingObservance:(id)arg1;

@end

