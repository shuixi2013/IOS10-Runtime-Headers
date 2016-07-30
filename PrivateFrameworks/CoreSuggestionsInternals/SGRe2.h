//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGRe2 : NSObject
{
    unsigned char _isTrivial;
}

+ (void)setCacheLimitForTesting:(unsigned long long)arg1;
+ (id)re2WithSubregexps:(id)arg1;
+ (id)re2WithSubregexps:(id)arg1 prefilter:(id)arg2;
+ (id)re2WithRegexpDataLazy:(id)arg1;
+ (id)re2WithRegexpData:(id)arg1;
+ (id)re2WithRegexpLazy:(id)arg1;
+ (id)re2WithRegexp:(id)arg1;
- (id)matchesUtf8:(const char *)arg1;
- (id)existsInUtf8:(const char *)arg1;
- (int)_enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)hashId;
- (void)enumerateMatchesInString:(id)arg1 ngroups:(unsigned long long)arg2 blockWithSubregexp:(CDUnknownBlockType)arg3;
- (void)enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 blockWithSubregexp:(CDUnknownBlockType)arg4;
- (void)enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)enumerateMatchesInString:(id)arg1 ngroups:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)existsInString:(id)arg1;
- (id)matchesString:(id)arg1;
- (_Bool)isTrivial;

@end

