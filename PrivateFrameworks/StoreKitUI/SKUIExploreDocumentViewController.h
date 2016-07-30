//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/CLLocationManagerDelegate-Protocol.h>
#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUINavigationBarDisplayConfiguring-Protocol.h>
#import <StoreKitUI/SKUIStackedBarDelegate-Protocol.h>
#import <StoreKitUI/UINavigationControllerDelegate-Protocol.h>
#import <StoreKitUI/UISplitViewControllerDelegate-Protocol.h>

@class CLLocationManager, NSArray, NSString, SKUIContentInsetScrollView, SKUIExploreTemplateElement, SKUIMetricsImpressionSession, SKUIStorePageSectionsViewController, UINavigationController, UISplitViewController;

@interface SKUIExploreDocumentViewController : SKUIViewController <CLLocationManagerDelegate, SKUINavigationBarDisplayConfiguring, SKUIStackedBarDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate, SKUIDocumentViewController>
{
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    NSArray *_contentOffsets;
    SKUIContentInsetScrollView *_contentScrollView;
    SKUIExploreTemplateElement *_exploreTemplate;
    UINavigationController *_leftVC;
    CLLocationManager *_locationManager;
    UINavigationController *_navigationController;
    _Bool _nearMeEnabled;
    SKUIStorePageSectionsViewController *_rightVC;
    UISplitViewController *_splitVC;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
- (void)_endAllPendingActiveImpression;
- (void)_beginActiveImpressionsForImpressionableViewElements;
- (id)_rightVCColorScheme;
- (id)_rightPageComponents;
- (id)_leftPageComponentsAtIndex:(long long)arg1;
- (double)_leftColumnWidth;
- (void)_reloadRightViewController;
- (void)_reloadSelectionForViewController:(id)arg1;
- (void)_reloadLeftViewControllers;
- (void)_reloadData;
- (id)_pageComponentsAtIndex:(long long)arg1;
- (id)_newSectionsViewControllerAtIndex:(long long)arg1;
- (void)_getPageComponents:(id *)arg1 title:(id *)arg2 forViewControllerAtIndex:(long long)arg3;
- (id)_rootNavigationTitle;
- (void)_contentInsetDidChange:(id)arg1;
- (_Bool)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)stackedBar:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)prefersNavigationBarHidden;
- (id)navigationBarTintColor;
- (_Bool)prefersNavigationBarBackgroundViewHidden;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)impressionableViewElements;
- (void)_updateChildViewControllers;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)loadView;
- (id)contentScrollView;
- (void)setClientContext:(id)arg1;
- (_Bool)managesNavigationBarContents;
- (void)selectGenreListComponent:(id)arg1;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

