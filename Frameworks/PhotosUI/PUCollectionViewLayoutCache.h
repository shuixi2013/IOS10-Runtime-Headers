//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;
@protocol PUCollectionViewLayoutProvider;

__attribute__((visibility("hidden")))
@interface PUCollectionViewLayoutCache : UICollectionViewLayout
{
    NSMutableDictionary *_itemLayoutAttributesByIndexPath;
    NSMutableDictionary *_supplementaryViewLayoutAttributesByKind;
    NSMutableDictionary *_decorationViewLayoutAttributesByKind;
    id <PUCollectionViewLayoutProvider> _layoutProvider;
    struct {
        unsigned int hasSupplementaryLayoutAttributes:1;
        unsigned int hasDecorationLayoutAttributes:1;
    } _layoutProviderFlags;
    _Bool _cachesResults;
}

@property(nonatomic) _Bool cachesResults; // @synthesize cachesResults=_cachesResults;
@property(readonly, nonatomic) __weak id <PUCollectionViewLayoutProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
- (void).cxx_destruct;
- (void)invalidateLayoutCache;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)init;
- (id)initWithProvider:(id)arg1;

@end

