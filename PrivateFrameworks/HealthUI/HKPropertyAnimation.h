//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class CAMediaTimingFunction, NSDate, NSString;

@interface HKPropertyAnimation : NSObject <NSCopying>
{
    NSString *_property;
    id _fromValue;
    id _toValue;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    long long _secondaryAnimationCurve;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _propertyApplicationFunction;
    NSDate *_appliedDate;
}

@property(retain, nonatomic) NSDate *appliedDate; // @synthesize appliedDate=_appliedDate;
@property(copy, nonatomic) CDUnknownBlockType propertyApplicationFunction; // @synthesize propertyApplicationFunction=_propertyApplicationFunction;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long secondaryAnimationCurve; // @synthesize secondaryAnimationCurve=_secondaryAnimationCurve;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) id toValue; // @synthesize toValue=_toValue;
@property(retain, nonatomic) id fromValue; // @synthesize fromValue=_fromValue;
@property(retain, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_finish;
- (void)_validate;
- (_Bool)_isCompleted;
- (void)_applyWithCurrentDate:(id)arg1;
- (id)init;

@end

