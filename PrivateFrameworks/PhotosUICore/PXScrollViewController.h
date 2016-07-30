//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTilingScrollController-Protocol.h>

@class NSHashTable, NSString, PXTilingScrollInfo;
@protocol PXAnonymousScrollView, PXTilingScrollControllerUpdateDelegate, UICoordinateSpace;

@interface PXScrollViewController : NSObject <PXTilingScrollController>
{
    NSHashTable *_didScrollObservers;
    id <PXTilingScrollControllerUpdateDelegate> _updateDelegate;
    PXTilingScrollInfo *_scrollInfo;
    struct NSObject *_scrollView;
    id <UICoordinateSpace> _contentCoordinateSpace;
    NSHashTable *__observers;
    struct CGSize _scrollViewContentSize;
    struct UIEdgeInsets _contentInset;
}

@property(readonly, nonatomic) struct CGSize scrollViewContentSize; // @synthesize scrollViewContentSize=_scrollViewContentSize;
@property(readonly, nonatomic) NSHashTable *_observers; // @synthesize _observers=__observers;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) id <UICoordinateSpace> contentCoordinateSpace; // @synthesize contentCoordinateSpace=_contentCoordinateSpace;
@property(readonly, nonatomic) NSObject<PXAnonymousScrollView> *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) PXTilingScrollInfo *scrollInfo; // @synthesize scrollInfo=_scrollInfo;
@property(nonatomic) __weak id <PXTilingScrollControllerUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect contentBounds;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
@property(readonly, nonatomic) struct CGRect visibleRect;
@property(readonly, nonatomic) struct CGRect activeRect;
@property(readonly, nonatomic) struct CGSize referenceSize;
- (void)applyScrollInfo:(id)arg1;
@property(nonatomic) struct CGRect scrollViewContentBounds;
@property(readonly, nonatomic) struct CGRect scrollViewVisibleRect;
@property(readonly, nonatomic) struct CGRect scrollViewActiveRect;
@property(readonly, nonatomic) struct CGSize scrollViewReferenceSize;
- (void)scrollViewLayoutIfNeeded;
- (void)setScrollViewNeedsLayout;
- (void)scrollRectToVisible:(struct CGRect)arg1 avoidingContentInsetEdges:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)addSubview:(struct NSObject *)arg1;
- (void)scrollViewContentBoundsDidChange;
- (void)scrollViewDidEndScrolling;
- (void)willEndScrollingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
- (void)scrollViewDidScroll;
- (void)scrollViewWillBeginScrolling;
- (void)scrollViewDidLayout;
- (void)scrollViewWillLayout;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

