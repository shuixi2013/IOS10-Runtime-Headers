//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMTimerTrigger.h>

#import <Home/HFTriggerProtocol-Protocol.h>

@class NSString;

@interface HMTimerTrigger (HFTimerTriggerAdditions) <HFTriggerProtocol>
+ (id)_hf_naturalLanguageNameWithHome:(id)arg1 timeString:(id)arg2 fireDate:(id)arg3 recurrences:(id)arg4 type:(unsigned long long)arg5;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 significantEvent:(id)arg2 recurrences:(id)arg3 type:(unsigned long long)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 fireDate:(id)arg2 recurrences:(id)arg3 type:(unsigned long long)arg4;
- (unsigned long long)hf_triggerType;
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

