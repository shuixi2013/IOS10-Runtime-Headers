//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteUI/UIImagePickerControllerDelegate-Protocol.h>
#import <RemoteUI/UINavigationControllerDelegate-Protocol.h>

@class NSString, UIImage, UIImagePickerController;

@interface RUIPhotoPicker : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    UIImagePickerController *_imagePickerController;
    UIImage *_pickedImage;
    CDUnknownBlockType _pickerCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType pickerCompletion; // @synthesize pickerCompletion=_pickerCompletion;
@property(retain, nonatomic) UIImage *pickedImage; // @synthesize pickedImage=_pickedImage;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)_dismissWithImage:(id)arg1;
- (void)pickImageWithParentController:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

