//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMActionSet.h>

@protocol HFIconDescriptor;

@interface HMActionSet (HFAdditions)
+ (id)hf_standardIconDescriptorForActionSetType:(id)arg1;
- (id)hf_updateIconDescriptor:(id)arg1;
@property(readonly, nonatomic) id <HFIconDescriptor> hf_iconDescriptor;
- (_Bool)hf_isAnonymous;
- (_Bool)hf_affectsServiceWithIdentifier:(id)arg1;
- (id)hf_affectedServices;
- (id)hf_affectedCharacteristics;
@end

