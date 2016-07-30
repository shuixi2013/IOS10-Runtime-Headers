//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

#import <SearchFoundation/NSCopying-Protocol.h>

@class NSArray;

@interface SFVisibleResultsFeedback : SFFeedback <NSCopying>
{
    NSArray *_results;
    unsigned long long _triggerEvent;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResults:(id)arg1 triggerEvent:(unsigned long long)arg2;

@end

