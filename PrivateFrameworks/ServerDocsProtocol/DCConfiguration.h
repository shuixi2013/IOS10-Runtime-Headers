//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface DCConfiguration : NSObject
{
    NSDate *_fetchDate;
    NSDate *_expiry;
    _Bool _hasValidSignature;
}

@property(nonatomic) _Bool hasValidSignature; // @synthesize hasValidSignature=_hasValidSignature;
@property(copy, nonatomic) NSDate *fetchDate; // @synthesize fetchDate=_fetchDate;
@property(copy, nonatomic) NSDate *expiry; // @synthesize expiry=_expiry;
- (void).cxx_destruct;

@end

