//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKActivityDigitalFace : NTKFace
{
}

+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1;
+ (_Bool)_customEditModeIsShowSeconds:(long long)arg1;
+ (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
+ (id)_customEditModes;
+ (id)_complicationSlotDescriptors;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_orderedComplicationSlots;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;

@end

