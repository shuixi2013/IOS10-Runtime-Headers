//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MPRemoteMediaPickerController, NSString, _UIAsyncInvocation;
@protocol MPMediaPickerControllerDelegate;

@interface MPMediaPickerController : UIViewController
{
    _UIAsyncInvocation *_cancelRequest;
    id _modalContext;
    MPRemoteMediaPickerController *_remoteViewController;
    _Bool _allowsPickingMultipleItems;
    _Bool _showsCloudItems;
    _Bool _showsItemsWithProtectedAssets;
    unsigned long long _mediaTypes;
    id <MPMediaPickerControllerDelegate> _delegate;
    NSString *_prompt;
}

+ (void)preheatMediaPicker;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(nonatomic) __weak id <MPMediaPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long mediaTypes; // @synthesize mediaTypes=_mediaTypes;
- (void).cxx_destruct;
- (id)_serviceViewControllerProxy;
- (void)_sendSettingsToService;
- (void)_resetRemoteViewController;
- (void)_requestRemoteViewController;
- (void)_forceDismissal;
- (void)_pickerDidPickItems:(id)arg1;
- (void)_pickerDidCancel;
- (_Bool)_hasAddedRemoteView;
- (void)_addRemoteView;
@property(nonatomic) _Bool showsItemsWithProtectedAssets;
@property(nonatomic) _Bool showsCloudItems;
@property(nonatomic) _Bool allowsPickingMultipleItems;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)dealloc;
- (id)initWithMediaTypes:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

