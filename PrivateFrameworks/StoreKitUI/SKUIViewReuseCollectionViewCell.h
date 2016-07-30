//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUICollectionViewCell.h>

@class NSArray, NSMapTable, SKUIViewReusePool;

@interface SKUIViewReuseCollectionViewCell : SKUICollectionViewCell
{
    NSMapTable *_allViewTextProperties;
    SKUIViewReusePool *_viewPool;
    NSArray *_allExistingViews;
    struct UIEdgeInsets _contentInset;
}

@property(readonly, nonatomic) NSArray *allExistingViews; // @synthesize allExistingViews=_allExistingViews;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (id)textPropertiesForView:(id)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)modifyUsingBlock:(CDUnknownBlockType)arg1;
- (id)existingViewsForReuseIdentifier:(id)arg1;
- (id)existingViewForIndex:(long long)arg1;
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

