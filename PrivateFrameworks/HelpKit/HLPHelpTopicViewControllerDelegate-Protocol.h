//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HelpKit/NSObject-Protocol.h>

@class HLPHelpTopicItem, HLPHelpTopicViewController, NSError;

@protocol HLPHelpTopicViewControllerDelegate <NSObject>
- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 failToLoadWithError:(NSError *)arg2;
- (void)helpTopicViewControllerDoneButtonTapped:(HLPHelpTopicViewController *)arg1;
- (void)helpTopicViewControllerShowHelpBookInfo:(HLPHelpTopicViewController *)arg1;

@optional
- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 selectedHelpTopicItem:(HLPHelpTopicItem *)arg2;
- (void)helpTopicViewControllerTableOfContentButtonTapped:(HLPHelpTopicViewController *)arg1;
@end

