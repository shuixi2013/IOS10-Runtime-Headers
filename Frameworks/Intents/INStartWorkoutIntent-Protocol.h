//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol INStartWorkoutIntent <NSObject, JSExport>
@property(copy, nonatomic) NSNumber *isOpenEnded;
@property(nonatomic) long long workoutLocationType;
@property(nonatomic) long long workoutGoalUnitType;
@property(copy, nonatomic) NSNumber *goalValue;
@property(copy, nonatomic) NSString *workoutName;
@end
