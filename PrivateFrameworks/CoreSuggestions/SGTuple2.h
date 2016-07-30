//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>

@interface SGTuple2 : NSObject <NSCopying>
{
    NSObject *_first;
    NSObject *_second;
}

+ (id)tupleWithFirst:(id)arg1 second:(id)arg2;
@property(readonly, nonatomic) NSObject *second; // @synthesize second=_second;
@property(readonly, nonatomic) NSObject *first; // @synthesize first=_first;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToTuple2:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

