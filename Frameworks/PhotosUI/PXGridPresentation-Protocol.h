//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSNumber, NSString, PHAssetCollection, UIViewController;
@protocol NSFastEnumeration, PXGridPresentationNavigationItemDelegate;

@protocol PXGridPresentation <NSObject>

@optional
- (UIViewController *)createSceneDebugViewControllerWithAssetCollection:(PHAssetCollection *)arg1 sceneIdentifier:(NSNumber *)arg2 hideTabBar:(_Bool)arg3 hideSearch:(_Bool)arg4;
- (void)createGridViewControllerWithAssets:(id <NSFastEnumeration>)arg1 withTitle:(NSString *)arg2 hideTabBar:(_Bool)arg3 hideSearch:(_Bool)arg4 containerViewController:(UIViewController *)arg5 navigationItemDelegate:(id <PXGridPresentationNavigationItemDelegate>)arg6 andCompletion:(void (^)(UIViewController *))arg7;
@end

