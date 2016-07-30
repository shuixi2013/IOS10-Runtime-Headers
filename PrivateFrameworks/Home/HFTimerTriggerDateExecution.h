//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFTimerTriggerExecutionTime-Protocol.h>
#import <Home/HFTimerTriggerExecutionTime_Private-Protocol.h>

@class HFTimerTriggerBuilder, NSDate, NSDateComponents, NSString;

@interface HFTimerTriggerDateExecution : NSObject <HFTimerTriggerExecutionTime_Private, HFTimerTriggerExecutionTime>
{
    HFTimerTriggerBuilder *_timerTriggerBuilder;
    NSDate *_fireDate;
    NSDateComponents *_fireTimeComponents;
}

@property(copy, nonatomic) NSDateComponents *fireTimeComponents; // @synthesize fireTimeComponents=_fireTimeComponents;
@property(copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(nonatomic) __weak HFTimerTriggerBuilder *timerTriggerBuilder; // @synthesize timerTriggerBuilder=_timerTriggerBuilder;
- (void).cxx_destruct;
- (id)_fireDateForTimeComponents:(id)arg1;
- (id)_effectiveFireDate;
- (id)commitUpdateExecutionTime;
- (id)commitCreateTimerTriggerBuilder;
- (id)performValidation;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

