//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UICollectionViewDataSource-Protocol.h>
#import <UIKit/UICollectionViewDelegate-Protocol.h>
#import <UIKit/UIDebuggingInformationViewController-Protocol.h>
#import <UIKit/UIImagePickerControllerDelegate-Protocol.h>
#import <UIKit/UINavigationControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingSpecViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIDebuggingInformationViewController>
{
    UIView *_spec;
    NSMutableArray *_specImages;
    double _originalOpacity;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    struct CGPoint _origin;
}

@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) double originalOpacity; // @synthesize originalOpacity=_originalOpacity;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(retain, nonatomic) NSMutableArray *specImages; // @synthesize specImages=_specImages;
@property(retain, nonatomic) UIView *spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (_Bool)startMediaBrowserFromViewController:(id)arg1;
- (void)prepareForMediaBrowser;
- (void)hideImage;
- (void)gotPanGesture:(id)arg1;
- (void)gotDeleteGesture:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

