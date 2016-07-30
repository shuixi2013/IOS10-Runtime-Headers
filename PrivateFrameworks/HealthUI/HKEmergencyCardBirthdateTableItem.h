//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

#import <HealthUI/HKMedicalIDEditorCellEditDelegate-Protocol.h>

@class HKMedicalIDEditorDateCell, NSCalendar, _HKCustomInsetCellLayoutManager;

@interface HKEmergencyCardBirthdateTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate>
{
    HKMedicalIDEditorDateCell *_editableCell;
    _HKCustomInsetCellLayoutManager *_layoutManager;
    NSCalendar *_gregorianCalendar;
}

- (void).cxx_destruct;
- (id)_cachedCalendar;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (_Bool)canEditRowAtIndex:(long long)arg1;
- (_Bool)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)_createEditableCell;
- (void)timeZoneDidChange:(id)arg1;
- (id)title;
- (id)initInEditMode:(_Bool)arg1;

@end

