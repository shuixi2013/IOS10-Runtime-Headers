//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUControllableItemCollectionViewController.h>

#import <HomeUI/HUPrototypeLayoutOptionsEditorViewControllerDelegate-Protocol.h>

@class HUCCGridItemManager, HUGridFlowLayout, HUGridLayoutOptions, NSMapTable, NSString;

@interface HUCCGridViewController : HUControllableItemCollectionViewController <HUPrototypeLayoutOptionsEditorViewControllerDelegate>
{
    _Bool _viewVisible;
    _Bool _needsLayoutOptionsUpdate;
    long long _layoutStyle;
    unsigned long long _itemType;
    NSMapTable *_overrideCellLayoutOptionsByItem;
}

+ (CDStruct_4bcfbbae)_gridLayoutForItemType:(unsigned long long)arg1 sizeSubclass:(unsigned long long)arg2;
+ (id)_createLayoutOptionsForViewSize:(struct CGSize)arg1 layoutStyle:(long long)arg2 itemType:(unsigned long long)arg3;
@property(nonatomic) _Bool needsLayoutOptionsUpdate; // @synthesize needsLayoutOptionsUpdate=_needsLayoutOptionsUpdate;
@property(nonatomic, getter=isViewVisible) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(retain, nonatomic) NSMapTable *overrideCellLayoutOptionsByItem; // @synthesize overrideCellLayoutOptionsByItem=_overrideCellLayoutOptionsByItem;
@property(readonly, nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (void)layoutOptionsEditorDidFinish:(id)arg1;
- (void)layoutOptionsEditor:(id)arg1 didUpdateLayoutOptions:(id)arg2;
- (void)presentationCoordinator:(id)arg1 pressedStateDidChange:(_Bool)arg2 forItem:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)allCellClasses;
- (id)_cellLayoutOptionsForItem:(id)arg1;
- (void)_updateMaximumNumberOfItems;
- (void)_updateLayoutOptions;
- (void)_enqueueLayoutOptionsUpdate;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)dismissQuickControlAnimated:(_Bool)arg1;
@property(readonly, nonatomic) HUGridLayoutOptions *layoutOptions;
- (id)initWithItemType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, nonatomic) HUGridFlowLayout *collectionViewLayout; // @dynamic collectionViewLayout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUCCGridItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

