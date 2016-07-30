//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <QuickLook/QLPreviewCollectionServiceProtocol-Protocol.h>

@interface QLPreviewCollectionHostContext : NSExtensionContext <QLPreviewCollectionServiceProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setLoadingString:(id)arg1;
- (void)setAllowInteractiveTransitions:(_Bool)arg1;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)tearDownTransition:(_Bool)arg1;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)keyCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1;
- (void)toolbarButtonsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (void)setNotificationCenter:(id)arg1;
- (void)getNetworkObserverWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_protocolService;

@end

