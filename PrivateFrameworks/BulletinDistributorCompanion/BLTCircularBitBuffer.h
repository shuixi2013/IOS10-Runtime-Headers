//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface BLTCircularBitBuffer : NSObject
{
    NSMutableData *_bitVector;
    unsigned long long _beginIndex;
    unsigned long long _capacity;
}

+ (unsigned long long)actualCapacity:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) unsigned long long beginIndex; // @synthesize beginIndex=_beginIndex;
- (void).cxx_destruct;
- (void)clear;
- (id)bitVector;
- (unsigned char)bitAtIndex:(unsigned long long)arg1;
- (void)setBit:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (void)_setBit:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithData:(id)arg1 andIndex:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

