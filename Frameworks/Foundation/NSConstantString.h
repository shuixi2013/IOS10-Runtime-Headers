//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSSimpleCString.h>

@interface NSConstantString : NSSimpleCString
{
}

- (const char *)lossyCString;
- (const char *)cString;
- (void)dealloc;
- (oneway void)release;
- (unsigned long long)retainCount;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (id)retain;
- (id)autorelease;
- (unsigned long long)hash;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (const char *)_fastCStringContents:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (_Bool)canBeConvertedToEncoding:(unsigned long long)arg1;
- (unsigned long long)smallestEncoding;
- (unsigned long long)fastestEncoding;
- (unsigned long long)cStringLength;
- (unsigned long long)length;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2;

@end

