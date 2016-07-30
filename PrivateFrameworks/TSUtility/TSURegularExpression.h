//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSUtility/NSCoding-Protocol.h>
#import <TSUtility/NSCopying-Protocol.h>

@class NSString;

@interface TSURegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString *_expressionString;
    void *_reserved;
}

+ (id)regularExpressionWithString:(id)arg1;
+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (const char *)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2;
- (id)initWithCoder:(id)arg1;
- (struct _NSRange)matchedRangeForString:(id)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned int)arg4;
- (struct _NSRange)matchedRangeForCString:(const char *)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned int)arg4;
- (id)expressionString;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (unsigned long long)numberOfSubexpressions;
- (id)initWithExpressionString:(id)arg1 options:(unsigned int)arg2;
- (id)initWithExpressionString:(id)arg1;
- (void)dealloc;

@end

