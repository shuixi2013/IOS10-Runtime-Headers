//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSArray, NSDate, NSString;

@interface HKEnumeratedValueChartPoint : NSObject <HKChartPoint>
{
    NSArray *_indices;
    NSDate *_xValue;
    id _userInfo;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
@property(retain, nonatomic) NSArray *indices; // @synthesize indices=_indices;
- (void).cxx_destruct;
- (id)allYValues;
- (id)yValueForKey:(id)arg1;
- (id)maxYValue;
- (id)minYValue;
- (id)yValue;
- (id)maxXValue;
- (id)minXValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

