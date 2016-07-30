//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFTriggerBuilder.h>

@class NSArray, NSTimeZone;
@protocol HFTimerTriggerExecutionTime;

@interface HFTimerTriggerBuilder : HFTriggerBuilder
{
    id <HFTimerTriggerExecutionTime> _executionTime;
    NSArray *_recurrences;
    NSTimeZone *_timeZone;
}

@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(retain, nonatomic) id <HFTimerTriggerExecutionTime> executionTime; // @synthesize executionTime=_executionTime;
- (void).cxx_destruct;
- (id)_executionTime;
- (id)_performValidation;
- (id)_updateTimeZone;
- (id)_updateRecurrences;
- (_Bool)_hasWeekdayRecurrence;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (id)commitEditTrigger;
- (id)commitCreateTrigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

@end

