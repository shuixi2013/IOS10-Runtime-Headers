//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUFilteredMomentsViewController.h>

@class UIViewController;
@protocol PXGridPresentationNavigationItemDelegate;

__attribute__((visibility("hidden")))
@interface PUPXFilteredMomentsViewController : PUFilteredMomentsViewController
{
    UIViewController *_containerViewController;
    id <PXGridPresentationNavigationItemDelegate> _navigationItemDelegate;
}

@property(nonatomic) __weak id <PXGridPresentationNavigationItemDelegate> navigationItemDelegate; // @synthesize navigationItemDelegate=_navigationItemDelegate;
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void).cxx_destruct;
- (void)updateNavigationBarAnimated:(_Bool)arg1;
- (void)getEmptyPlaceholderViewTitle:(id *)arg1 message:(id *)arg2;
- (id)oneUpPresentationHelperViewController:(id)arg1;

@end

