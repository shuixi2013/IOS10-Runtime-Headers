//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class PLComposeRecipientViewController, UINavigationController;

@protocol PLComposeRecipientViewControllerDelegate <NSObject>
- (UINavigationController *)backingNavigationControllerForComposeRecipientViewController:(PLComposeRecipientViewController *)arg1;

@optional
- (void)composeRecipientViewControllerRecipientContainerViewDidResize:(PLComposeRecipientViewController *)arg1 fromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3;
- (void)composeRecipientViewControllerReturnKeyPressed:(PLComposeRecipientViewController *)arg1;
@end

