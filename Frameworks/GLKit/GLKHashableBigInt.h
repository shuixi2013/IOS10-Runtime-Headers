//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GLKit/NSCopying-Protocol.h>

@interface GLKHashableBigInt : NSObject <NSCopying>
{
    struct GLKBigInt_s _bigInt;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBigInt:(struct GLKBigInt_s *)arg1;

@end

