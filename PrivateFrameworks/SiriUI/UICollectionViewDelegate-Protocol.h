//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/UIScrollViewDelegate-Protocol.h>

@class NSIndexPath, NSString, UICollectionReusableView, UICollectionView, UICollectionViewCell, UICollectionViewFocusUpdateContext, UICollectionViewLayout, UICollectionViewTransitionLayout, UIFocusAnimationCoordinator;

@protocol UICollectionViewDelegate <UIScrollViewDelegate>

@optional
- (struct CGPoint)collectionView:(UICollectionView *)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (NSIndexPath *)collectionView:(UICollectionView *)arg1 targetIndexPathForMoveFromItemAtIndexPath:(NSIndexPath *)arg2 toProposedIndexPath:(NSIndexPath *)arg3;
- (NSIndexPath *)indexPathForPreferredFocusedViewInCollectionView:(UICollectionView *)arg1;
- (void)collectionView:(UICollectionView *)arg1 didUpdateFocusInContext:(UICollectionViewFocusUpdateContext *)arg2 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg3;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldUpdateFocusInContext:(UICollectionViewFocusUpdateContext *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 canFocusItemAtIndexPath:(NSIndexPath *)arg2;
- (UICollectionViewTransitionLayout *)collectionView:(UICollectionView *)arg1 transitionLayoutForOldLayout:(UICollectionViewLayout *)arg2 newLayout:(UICollectionViewLayout *)arg3;
- (void)collectionView:(UICollectionView *)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(NSIndexPath *)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(UICollectionView *)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(NSIndexPath *)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldShowMenuForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didEndDisplayingSupplementaryView:(UICollectionReusableView *)arg2 forElementOfKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)collectionView:(UICollectionView *)arg1 didEndDisplayingCell:(UICollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 willDisplaySupplementaryView:(UICollectionReusableView *)arg2 forElementKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)collectionView:(UICollectionView *)arg1 willDisplayCell:(UICollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didUnhighlightItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didHighlightItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldHighlightItemAtIndexPath:(NSIndexPath *)arg2;
@end

