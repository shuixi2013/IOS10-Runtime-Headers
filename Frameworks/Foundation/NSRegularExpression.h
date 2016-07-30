//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSRegularExpression : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_pattern;
    unsigned long long _options;
    void *_internal;
    id _reserved1;
    int _checkout;
    int _reserved2;
}

+ (id)escapedPatternForString:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)regularExpressionWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (void)initialize;
+ (id)escapedTemplateForString:(id)arg1;
@property(readonly) unsigned long long numberOfCaptureGroups;
@property(readonly) unsigned long long options;
@property(readonly, copy) NSString *pattern;
- (id)description;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (struct _NSRange)rangeOfFirstMatchInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (id)firstMatchInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (unsigned long long)numberOfMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (id)matchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (void)enumerateMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)replacementStringForResult:(id)arg1 inString:(id)arg2 offset:(long long)arg3 template:(id)arg4;
- (unsigned long long)replaceMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 withTemplate:(id)arg4;
- (id)stringByReplacingMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 withTemplate:(id)arg4;

@end

