//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSMutableSet, NSOrderedSet;
@protocol PUPhotoStreamsAlbumsTableViewControllerDelegate;

@interface PUPhotoStreamAlbumsTableViewController : UITableViewController
{
    NSOrderedSet *_albumsOrderedSet;
    NSMutableSet *_selectedAlbumGuids;
    _Bool _allowsMutlipleSelection;
    id <PUPhotoStreamsAlbumsTableViewControllerDelegate> _pickerDelegate;
}

+ (CDUnknownBlockType)_albumsComparator;
+ (struct NSObject *)albumListForContentMode:(int)arg1;
@property(nonatomic) __weak id <PUPhotoStreamsAlbumsTableViewControllerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
@property(nonatomic) _Bool allowsMutlipleSelection; // @synthesize allowsMutlipleSelection=_allowsMutlipleSelection;
- (void).cxx_destruct;
- (struct CGSize)contentSizeForViewInPopover;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)posterImageForAlbum:(struct NSObject *)arg1 cell:(id)arg2;
- (void)reloadActions;
- (void)addSelectedCloudGuid:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

@end

