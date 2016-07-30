//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <QuickLook/QLPreviewCollectionHostProtocol-Protocol.h>

@class NSString;
@protocol QLPreviewItemProvider;

@interface QLPreviewCollectionServiceContext : NSExtensionContext <QLPreviewCollectionHostProtocol>
{
    id <QLPreviewItemProvider> _itemProvider;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setLoadingString:(id)arg1;
- (void)setAllowInteractiveTransitions:(_Bool)arg1;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)tearDownTransition:(_Bool)arg1;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)completeTransition:(_Bool)arg1 withDuration:(double)arg2;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)keyCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1;
- (void)toolbarButtonsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (void)setNotificationCenter:(id)arg1;
- (void)getNetworkObserverWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (id)_previewCollection;
- (id)_protocolHost;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

