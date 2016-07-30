//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSDate, NSString, RTLocationOfInterest;

@interface RTActionCondition : NSObject <NSSecureCoding>
{
    RTLocationOfInterest *_locationOfInterest;
    long long _locationOfInterestState;
    NSDate *_date;
    NSString *_depiction;
}

+ (_Bool)supportsSecureCoding;
+ (id)locationOfInterestStateToString:(long long)arg1;
@property(readonly, nonatomic) NSString *depiction; // @synthesize depiction=_depiction;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long locationOfInterestState; // @synthesize locationOfInterestState=_locationOfInterestState;
@property(readonly, nonatomic) RTLocationOfInterest *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLoi:(id)arg1 loiState:(long long)arg2 date:(id)arg3 depiction:(id)arg4;

@end

