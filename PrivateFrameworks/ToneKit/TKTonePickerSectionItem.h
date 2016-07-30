//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ToneKit/TKPickerSectionItem.h>

#import <ToneKit/TKPickerContainerItem-Protocol.h>

@class NSString, TKTonePickerController;

@interface TKTonePickerSectionItem : TKPickerSectionItem <TKPickerContainerItem>
{
    unsigned long long _sectionHeader;
    unsigned long long _regularToneSectionIndex;
    TKTonePickerController *__parentTonePickerController;
    long long _numberOfChildren;
}

@property(nonatomic, setter=_setNumberOfChildren:) long long numberOfChildren; // @synthesize numberOfChildren=_numberOfChildren;
@property(nonatomic, setter=_setParentTonePickerController:) __weak TKTonePickerController *_parentTonePickerController; // @synthesize _parentTonePickerController=__parentTonePickerController;
@property(nonatomic, setter=_setRegularToneSectionIndex:) unsigned long long regularToneSectionIndex; // @synthesize regularToneSectionIndex=_regularToneSectionIndex;
@property(nonatomic, setter=_setSectionHeader:) unsigned long long sectionHeader; // @synthesize sectionHeader=_sectionHeader;
- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)childItemAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

