//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, GKEditActionsView, GKHairlineView, GKStaticRenderContentView, NSArray, NSLayoutConstraint, UIView;

@interface GKCollectionViewCell : UICollectionViewCell
{
    _Bool _shouldDisplaySwipeToEditAccessories;
    double _contentOriginX;
    _Bool _doesAbutLeftEdge;
    id _representedItem;
    UIView *_staticContentView;
    NSArray *_editActions;
    GKEditActionsView *_editActionsView;
    GKStaticRenderContentView *_contentRenderView;
    CALayer *_leftGradientMask;
    GKHairlineView *_topHairline;
    GKHairlineView *_bottomHairline;
    NSArray *_editActionsConstraints;
    NSArray *_hairlineConstraints;
    NSLayoutConstraint *_contentLeftConstraint;
    double _leadingMargin;
    double _trailingMargin;
}

+ (void)registerCellClassesWithCollectionView:(id)arg1;
@property(nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(retain, nonatomic) NSLayoutConstraint *contentLeftConstraint; // @synthesize contentLeftConstraint=_contentLeftConstraint;
@property(retain, nonatomic) NSArray *hairlineConstraints; // @synthesize hairlineConstraints=_hairlineConstraints;
@property(retain, nonatomic) NSArray *editActionsConstraints; // @synthesize editActionsConstraints=_editActionsConstraints;
@property(retain, nonatomic) GKHairlineView *bottomHairline; // @synthesize bottomHairline=_bottomHairline;
@property(retain, nonatomic) GKHairlineView *topHairline; // @synthesize topHairline=_topHairline;
@property(nonatomic) _Bool doesAbutLeftEdge; // @synthesize doesAbutLeftEdge=_doesAbutLeftEdge;
@property(retain, nonatomic) CALayer *leftGradientMask; // @synthesize leftGradientMask=_leftGradientMask;
@property(retain, nonatomic) GKStaticRenderContentView *contentRenderView; // @synthesize contentRenderView=_contentRenderView;
@property(readonly, nonatomic) GKEditActionsView *editActionsView; // @synthesize editActionsView=_editActionsView;
@property(retain, nonatomic) NSArray *editActions; // @synthesize editActions=_editActions;
@property(retain, nonatomic) UIView *staticContentView; // @synthesize staticContentView=_staticContentView;
@property(retain, nonatomic) id representedItem; // @synthesize representedItem=_representedItem;
- (void)shutActionPaneAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetEditingContentOrigin;
@property(nonatomic) double editingContentOriginX;
- (void)closeForDelete;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateConstraints;
- (void)didUpdateModel;
- (void)setNeedsDisplay;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setShouldDisplaySwipeToEditAccessories:(_Bool)arg1;
- (void)applyGradientMaskIfNeeded;
- (_Bool)touchWithinEditActions:(id)arg1;
- (_Bool)userInteractionEnabledForEditing;
- (void)setUserInteractionEnabledForEditing:(_Bool)arg1;
- (void)animateOutSwipeToEditAccessories;
- (void)finishEditing;
- (void)beginEditing;
- (void)setEditActionsVisibleWidth:(double)arg1;
- (void)prepareEditActionsConstraintsIfNeeded;
- (void)prepareHairlineConstraintsIfNeeded;
- (double)editActionsVisibleWidth;
- (double)contentViewOriginXWhileEditing;
@property(readonly, nonatomic) UIView *interactiveContentView;
@property(readonly, nonatomic) struct CGRect alignmentRectForText;
- (id)popoverSourceView;
- (void)_gkEnumerateSubviewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

