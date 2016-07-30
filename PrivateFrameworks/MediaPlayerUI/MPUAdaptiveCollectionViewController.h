//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUDataSourceViewController.h>

#import <MediaPlayerUI/MPUInsetProxyScrollViewDelegate-Protocol.h>

@class MPUInsetProxyScrollView, NSMutableDictionary, NSString;

@interface MPUAdaptiveCollectionViewController : MPUDataSourceViewController <MPUInsetProxyScrollViewDelegate>
{
    struct UIEdgeInsets _contentInsetAdditions;
    struct UIEdgeInsets _scrollIndicatorInsetsAdditions;
    MPUInsetProxyScrollView *_insetProxyScrollView;
    NSMutableDictionary *_sizeClassToClassMap;
}

@property(retain, nonatomic) NSMutableDictionary *sizeClassToClassMap; // @synthesize sizeClassToClassMap=_sizeClassToClassMap;
- (void).cxx_destruct;
- (void)_updateViewControllerIfNecessary;
- (void)_restoreTopVisibleIndexPath:(id)arg1;
- (id)_indexPathOfTopVisibleItem;
- (id)_childDataSourceViewController;
- (void)_applyNewScrollIndicatorInsetsAdditions:(struct UIEdgeInsets)arg1 withExistingScrollIndicatorInsetsAdditions:(struct UIEdgeInsets)arg2 toScrollView:(id)arg3;
- (void)_applyNewContentInsetAdditions:(struct UIEdgeInsets)arg1 withExistingContentInsetAdditions:(struct UIEdgeInsets)arg2 toScrollView:(id)arg3;
- (void)insetProxyScrollViewScrollIndicatorInsetsDidChange:(id)arg1;
- (void)insetProxyScrollViewContentInsetDidChange:(id)arg1;
- (void)dataSourceDidInvalidate;
- (void)reloadData;
- (void)setViewControllerClass:(Class)arg1 forHorizontalSizeClass:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)contentScrollView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

