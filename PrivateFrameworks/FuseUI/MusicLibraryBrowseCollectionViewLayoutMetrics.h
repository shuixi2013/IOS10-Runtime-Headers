//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MusicLibraryBrowseCollectionViewLayoutMetrics : NSObject
{
    double _itemWidth;
    double _itemHeight;
    double _minimumInteritemSpacing;
    double _textLateralEdgePadding;
    struct CGSize _headerSize;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _sectionInsets;
    struct UIEdgeInsets _headerViewContentInsets;
}

@property(nonatomic) double textLateralEdgePadding; // @synthesize textLateralEdgePadding=_textLateralEdgePadding;
@property(nonatomic) struct UIEdgeInsets headerViewContentInsets; // @synthesize headerViewContentInsets=_headerViewContentInsets;
@property(nonatomic) struct CGSize headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(readonly, nonatomic) struct CGSize itemSize;
- (id)description;
- (id)init;

@end

