//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INResumeWorkoutIntent-Protocol.h>

@class NSString;

@interface INResumeWorkoutIntent : INIntent <INResumeWorkoutIntent>
{
}

- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (void)setWorkoutName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *workoutName;
- (id)initWithWorkoutName:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

