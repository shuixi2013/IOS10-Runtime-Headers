//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol MPUTransportControlsViewDataSource, MPUTransportControlsViewDelegate, MPUTransportControlsViewLayoutDelegate;

@interface MPUTransportControlsView : UIView
{
    NSMutableDictionary *_classByReuseIdentifier;
    struct UIEdgeInsets _insetsForExpandingButtons;
    _Bool _sortedVisibleControlsWithBlanksNeedsReload;
    NSMutableDictionary *_recycledButtonsByReuseIdentifier;
    NSMapTable *_reuseIdentifierByButton;
    NSMutableArray *_sortedVisibleControlsWithBlanks;
    NSMutableSet *_typesOfControlsToReload;
    NSMutableDictionary *_visibleButtonByControlType;
    _Bool _usesLegacyLayoutHeuristics;
    NSArray *_availableTransportControls;
    id <MPUTransportControlsViewDataSource> _dataSource;
    id <MPUTransportControlsViewDelegate> _delegate;
    id <MPUTransportControlsViewLayoutDelegate> _layoutDelegate;
    unsigned long long _minimumNumberOfTransportButtonsForLayout;
}

+ (id)defaultTransportControls;
@property(nonatomic, getter=_usesLegacyLayoutHeuristics, setter=_setUsesLegacyLayoutHeuristics:) _Bool usesLegacyLayoutHeuristics; // @synthesize usesLegacyLayoutHeuristics=_usesLegacyLayoutHeuristics;
@property(nonatomic) unsigned long long minimumNumberOfTransportButtonsForLayout; // @synthesize minimumNumberOfTransportButtonsForLayout=_minimumNumberOfTransportButtonsForLayout;
@property(nonatomic) __weak id <MPUTransportControlsViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) __weak id <MPUTransportControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MPUTransportControlsViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSArray *availableTransportControls; // @synthesize availableTransportControls=_availableTransportControls;
- (void).cxx_destruct;
- (void)_willRemoveTransportButton:(id)arg1;
- (id)_visibleTransportControlAtIndex:(unsigned long long)arg1;
- (id)_typesOfVisibleControls;
- (id)_typesFromTransportControls:(id)arg1;
- (struct CGSize)_transportControlButtonSize;
- (void)_reloadSortedVisibleControlsWithBlanks;
- (void)_recycleTransportButtonWithControlType:(long long)arg1;
- (id)_createTransportButtonWithReuseIdentifier:(id)arg1;
- (void)_configureTransportButton:(id)arg1 forTransportControl:(id)arg2;
- (id)_availableTransportControlsForGroup:(int)arg1;
- (struct CGRect)_adjustedFrameOfButtonForTransportControl:(id)arg1 proposedFrame:(struct CGRect)arg2;
- (void)_transportControlTouchExited:(id)arg1;
- (void)_transportControlTouchEntered:(id)arg1;
- (void)_transportControlLongPressEnded:(id)arg1;
- (void)_transportControlLongPressBegan:(id)arg1;
- (void)_transportControlTapped:(id)arg1;
@property(nonatomic, getter=_insetsForExpandingButtons, setter=_setInsetsForExpandingButtons:) struct UIEdgeInsets insetsForExpandingButtons;
- (id)_transportButtonForControlType:(long long)arg1;
- (void)reloadTransportButtonWithControlType:(long long)arg1;
- (void)registerClass:(Class)arg1 forTransportButtonWithReuseIdentifier:(id)arg2;
- (id)dequeueReusableTransportButtonWithReuseIdentifier:(id)arg1;
- (id)availableTransportControlWithType:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

