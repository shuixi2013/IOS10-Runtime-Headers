//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface PXDebugScenesViewController : UITableViewController
{
    NSArray *_sceneCollectionItems;
}

@property(retain, nonatomic) NSArray *sceneCollectionItems; // @synthesize sceneCollectionItems=_sceneCollectionItems;
- (void).cxx_destruct;
- (void)_fetchScenes;
- (id)_assetsWithSceneIdentifier:(id)arg1;
- (id)_fetchAssetsWithSceneIdentifier:(id)arg1;
- (void)configureCell:(id)arg1 withItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

