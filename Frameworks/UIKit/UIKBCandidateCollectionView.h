//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIKBCandidateCollectionView : UICollectionView
{
}

- (_Bool)delaysContentTouches;
- (void)configureAsCandidatesBar;
- (_Bool)_selectAndScrollToItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
@property(readonly, nonatomic) NSIndexPath *selectedItemIndexPath;

@end

