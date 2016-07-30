//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/UICollectionViewDelegate-Protocol.h>

@class NSString;
@protocol PDFCollectionViewDelegate;

@interface PDFCollectionViewDelegateAdaptor : NSObject <UICollectionViewDelegate>
{
    NSObject<PDFCollectionViewDelegate> *_wrappedDelegate;
}

@property(retain) NSObject<PDFCollectionViewDelegate> *wrappedDelegate; // @synthesize wrappedDelegate=_wrappedDelegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

