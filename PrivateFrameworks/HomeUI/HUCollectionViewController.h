//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class NSMapTable;

@interface HUCollectionViewController : UICollectionViewController
{
    NSMapTable *_installedChildViewControllersKeyedByCell;
}

@property(retain, nonatomic) NSMapTable *installedChildViewControllersKeyedByCell; // @synthesize installedChildViewControllersKeyedByCell=_installedChildViewControllersKeyedByCell;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;

@end

