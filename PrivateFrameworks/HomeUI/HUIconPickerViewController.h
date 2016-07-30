//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class NSArray;
@protocol HFIconDescriptor, HUIconPickerViewControllerDelegate;

@interface HUIconPickerViewController : UICollectionViewController
{
    NSArray *_iconDescriptors;
    id <HFIconDescriptor> _selectedIconDescriptor;
    id <HUIconPickerViewControllerDelegate> _delegate;
}

+ (id)sceneIconDescriptors;
@property(nonatomic) __weak id <HUIconPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <HFIconDescriptor> selectedIconDescriptor; // @synthesize selectedIconDescriptor=_selectedIconDescriptor;
@property(readonly, nonatomic) NSArray *iconDescriptors; // @synthesize iconDescriptors=_iconDescriptors;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_done:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithIconDescriptors:(id)arg1 selectedIconDescriptor:(id)arg2 delegate:(id)arg3;

@end

