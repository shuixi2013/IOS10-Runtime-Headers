//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <DataDetectorsUI/DDParsecHostVCInterface-Protocol.h>
#import <DataDetectorsUI/UINavigationControllerDelegate-Protocol.h>

@class DDParsecRemoteCollectionViewController, DDScannerResult, NSArray, NSDictionary, NSString, UIView;
@protocol DDParsecCollectionDelegate;

@interface DDParsecCollectionViewController : UINavigationController <DDParsecHostVCInterface, UINavigationControllerDelegate>
{
    DDParsecRemoteCollectionViewController *_remoteViewController;
    _Bool _previewMode;
    _Bool _popoverMode;
    UIView *_blurView;
    NSString *_queryString;
    struct _NSRange _queryRange;
    DDScannerResult *_result;
    NSDictionary *_context;
    _Bool _showingError;
    CDUnknownBlockType _dismissCompletionHandler;
    NSArray *_actions;
    id <DDParsecCollectionDelegate> _parsecDelegate;
}

@property __weak id <DDParsecCollectionDelegate> parsecDelegate; // @synthesize parsecDelegate=_parsecDelegate;
@property(copy) NSArray *actions; // @synthesize actions=_actions;
@property(copy) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
- (void).cxx_destruct;
- (id)previewActionItems;
- (void)viewWillAppear:(_Bool)arg1;
- (void)openParsecURL:(id)arg1;
- (void)showingErrorView:(_Bool)arg1;
- (void)interactionEnded;
- (void)replaceControllerWithController:(id)arg1;
- (void)showSpinner;
- (void)showError:(id)arg1;
- (void)presentRemoteCollection:(id)arg1;
- (void)fetchRemoteViewControllerWithValidInput:(_Bool)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)updateVisualMode;
- (void)_updatePreferredContentSize;
- (void)setPopoverMode:(_Bool)arg1;
- (void)setPreviewMode:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithResult:(struct __DDResult *)arg1 context:(id)arg2;
- (id)initWithString:(id)arg1 range:(struct _NSRange)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

