//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import <CloudDocsUI/_UICollectionViewLayoutCellStyle-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerFlowLayout : UICollectionViewFlowLayout <_UICollectionViewLayoutCellStyle>
{
    long long cellStyle;
    double _contentSizeAdjustment;
}

@property(nonatomic) double contentSizeAdjustment; // @synthesize contentSizeAdjustment=_contentSizeAdjustment;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle;
- (_Bool)canBeEdited;
- (struct CGSize)collectionViewContentSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

