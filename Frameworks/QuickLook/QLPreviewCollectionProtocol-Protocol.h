//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, QLAppearance, QLTransitionContext, UIKeyCommand;
@protocol QLPreviewControllerStateProtocol, QLPreviewItemProvider, QLTransitionControllerProtocol;

@protocol QLPreviewCollectionProtocol
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)invalidate;
- (void)setLoadingString:(NSString *)arg1;
- (void)tearDownTransition:(_Bool)arg1;
- (void)startTransitionWithSourceViewProvider:(QLTransitionContext *)arg1 transitionController:(id <QLTransitionControllerProtocol>)arg2 presenting:(_Bool)arg3 completionHandler:(void (^)(void))arg4;
- (void)setAppearance:(QLAppearance *)arg1 animated:(_Bool)arg2;
- (void)keyCommandWasPerformed:(UIKeyCommand *)arg1;
- (void)keyCommandsWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)toolbarButtonPressedWithIdentifier:(NSString *)arg1;
- (void)toolbarButtonsWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id <QLPreviewItemProvider>)arg3 stateManager:(id <QLPreviewControllerStateProtocol>)arg4;
@end

