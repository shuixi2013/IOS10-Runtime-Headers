//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

@class NSMutableDictionary, UITextView;

__attribute__((visibility("hidden")))
@interface QLDebugItemViewController : QLItemViewController
{
    _Bool _constraintsSetUp;
    UITextView *_logTextView;
    NSMutableDictionary *_selectorToCount;
}

- (void).cxx_destruct;
- (id)_attributesForLogLevel:(unsigned long long)arg1;
- (void)_addLog:(id)arg1 logLevel:(unsigned long long)arg2;
- (void)_encounterMethodCall:(SEL)arg1 animatedValue:(unsigned long long)arg2;
- (void)_encounterMethodCall:(SEL)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillFinishAppearing;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (_Bool)canEnterFullScreen;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (void)setAppearance:(id)arg1;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

