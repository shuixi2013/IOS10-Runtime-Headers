//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

#import <HealthUI/HKMedicalIDEditorCellEditDelegate-Protocol.h>
#import <HealthUI/HKMedicalIDEditorCellHeightChangeDelegate-Protocol.h>
#import <HealthUI/UIImagePickerControllerDelegate-Protocol.h>
#import <HealthUI/UINavigationControllerDelegate-Protocol.h>

@class HKMedicalIDEditorNameAndPhotoCell, NSString;
@protocol HKEmergencyCardRowHeightChangeDelegate;

@interface HKEmergencyCardNameAndPictureTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    HKMedicalIDEditorNameAndPhotoCell *_cell;
    id <HKEmergencyCardRowHeightChangeDelegate> _rowHeightChangeDelegate;
}

@property(nonatomic) __weak id <HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate; // @synthesize rowHeightChangeDelegate=_rowHeightChangeDelegate;
- (void).cxx_destruct;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)_editPhotoTapped:(id)arg1;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)setData:(id)arg1;
- (void)commitEditing;
- (void)medicalIDEditorCellDidChangeSelection:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)medicalIDEditorCellDidBeginEditing:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(struct CGRect)arg3 inView:(id)arg4;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (id)_cell;
- (id)title;
- (id)initInEditMode:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
