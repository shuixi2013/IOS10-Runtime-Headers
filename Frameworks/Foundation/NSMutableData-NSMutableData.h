//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableData.h>

@interface NSMutableData (NSMutableData)
+ (id)dataWithLength:(unsigned long long)arg1;
+ (id)dataWithCapacity:(unsigned long long)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)setData:(id)arg1;
- (void)resetBytesInRange:(struct _NSRange)arg1;
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2;
- (void)increaseLengthBy:(unsigned long long)arg1;
- (void)appendData:(id)arg1;
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3;
- (_Bool)_isCompact;
- (Class)classForCoder;
- (void)setLength:(unsigned long long)arg1;
- (void *)mutableBytes;
@end

