//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UICollectionReusableView, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface _UICollectionViewPrefetchItem : NSObject
{
    _Bool _hasPrefetchedData;
    UICollectionViewLayoutAttributes *_attributes;
    UICollectionReusableView *_view;
}

@property(retain, nonatomic) UICollectionReusableView *view; // @synthesize view=_view;
@property(nonatomic) _Bool hasPrefetchedData; // @synthesize hasPrefetchedData=_hasPrefetchedData;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)arg1;

@end

