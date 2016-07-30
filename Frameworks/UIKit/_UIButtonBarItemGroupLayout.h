//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIButtonBarLayout.h>

@class NSMapTable, NSMutableArray, UIBarButtonItemGroup, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface _UIButtonBarItemGroupLayout : _UIButtonBarLayout
{
    NSMapTable *_itemLayoutMap;
    NSMutableArray *_itemLayouts;
    NSMutableArray *_configuredItemLayouts;
    _UIButtonBarLayout *_representativeLayout;
    _Bool _compact;
    _Bool _useGroupSizing;
    UIBarButtonItemGroup *_group;
    UILayoutGuide *_groupSizeGuide;
    CDUnknownBlockType _itemViewGenerator;
}

@property(copy, nonatomic) CDUnknownBlockType itemViewGenerator; // @synthesize itemViewGenerator=_itemViewGenerator;
@property(nonatomic) _Bool useGroupSizing; // @synthesize useGroupSizing=_useGroupSizing;
@property(nonatomic) _Bool compact; // @synthesize compact=_compact;
@property(readonly, nonatomic) UILayoutGuide *groupSizeGuide; // @synthesize groupSizeGuide=_groupSizeGuide;
@property(readonly, nonatomic) UIBarButtonItemGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (id)description;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addLayoutGuides:(id)arg1;
- (void)_addLayoutViews:(id)arg1;
- (void)_iterateConfiguredLayouts:(CDUnknownBlockType)arg1;
- (void)_configure;
- (id)_newLayoutForBarButtonItem:(id)arg1 useGroupSizing:(_Bool)arg2;
- (id)_representativeLayout;
- (id)_itemLayouts;
- (id)_effectiveLayout;
- (_Bool)_isGroup;
- (_Bool)_isSpace;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (id)layoutsForSpacerItem:(id)arg1;
- (id)layoutForBarButtonItem:(id)arg1;
- (void)_updateGroupSizing;
- (id)initWithLayoutMetrics:(id)arg1 barButtonItemGroup:(id)arg2;
- (id)initWithLayoutMetrics:(id)arg1;

@end

