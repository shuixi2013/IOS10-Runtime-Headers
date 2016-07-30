//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class NSDate;

@interface HKValueRange : NSObject <NSCopying>
{
    id _minValue;
    id _maxValue;
}

+ (id)valueRangeWithMinValue:(id)arg1 maxValue:(id)arg2;
@property(copy, nonatomic) id maxValue; // @synthesize maxValue=_maxValue;
@property(copy, nonatomic) id minValue; // @synthesize minValue=_minValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (id)description;
- (_Bool)containsValue:(id)arg1;
- (void)unionMaxValueWithRange:(id)arg1;
- (void)unionMinValueWithRange:(id)arg1;
- (void)unionRange:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;
- (_Bool)hk_animatable;

@end

