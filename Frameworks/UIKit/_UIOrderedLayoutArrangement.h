//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UILayoutArrangement.h>

#import <UIKit/_UIOLAPropertySource-Protocol.h>

@class NSMapTable, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIOrderedLayoutArrangement : _UILayoutArrangement <_UIOLAPropertySource>
{
    NSMapTable *_spacingOrCenteringGuides;
    NSMapTable *_edgeToEdgeConstraints;
    NSMapTable *_relatedDimensionConstraints;
    NSMapTable *_hidingDimensionConstraints;
    NSMapTable *_multilineTextWidthDisambiguationConstraints;
    double _proportionalFillDenominator;
    _Bool _itemOrderingChanged;
    _Bool _itemFittingSizeChanged;
    _Bool _baselineRelativeArrangement;
    double _spacing;
    long long _distribution;
}

+ (Class)_configurationHistoryClass;
@property(nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property(nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement; // @synthesize baselineRelativeArrangement=_baselineRelativeArrangement;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic, setter=_setItemFittingSizeChanged:) _Bool _itemFittingSizeChanged; // @synthesize _itemFittingSizeChanged;
@property(nonatomic, setter=_setItemOrderingChanged:) _Bool _itemOrderingChanged; // @synthesize _itemOrderingChanged;
- (void).cxx_destruct;
- (id)_baselineViewVendTallest:(_Bool)arg1 forFirstBaseline:(_Bool)arg2;
- (id)_lastVisibleItem;
- (id)_firstVisibleItem;
- (id)_visibleItemAtEndWithEnumerationOptions:(unsigned long long)arg1;
- (id)_tallestItem;
- (double)_calculatedIntrinsicHeight;
- (void)_cleanUpGuides;
- (void)_clearAllConstraintsArrays;
- (void)_cleanUpWithoutResettingKeepAliveWorkaround;
- (void)_updateArrangementConstraints;
- (_Bool)_configurationRequiresCanvasConnectionFittingConstraint;
- (_Bool)_itemCountChanged;
- (_Bool)_wantsProportionalDistribution;
- (void)_insertIndividualGuidesAndConstraintsAsNecessary;
- (void)_setUpMultilineTextWidthDisambiguationConstraintForItem:(id)arg1;
- (double)_constantForMultilineTextWidthDisambiguationConstraintWithNumberOfVisibleItems:(unsigned long long)arg1;
- (void)_setUpHidingDimensionConstraintForItem:(id)arg1;
- (void)_setUpDimensionConstraintForItem:(id)arg1 referenceItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_setUpSpacingOrCenteringGuideForGapIndex:(unsigned long long)arg1;
- (void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 andFollowingItem:(id)arg2 isFirstGap:(_Bool)arg3 isLastGap:(_Bool)arg4;
- (id)_edgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 andFollowingItem:(id)arg2 isFirstGap:(_Bool)arg3 isLastGap:(_Bool)arg4;
- (double)_expectedEdgeToEdgeSpacingForFirstItem:(id)arg1 secondItem:(id)arg2 isFirstGap:(_Bool)arg3 isLastGap:(_Bool)arg4;
- (long long)_precedingLocationAttributeForGuideConstraint;
- (long long)_minAttributeForGapConstraint;
- (long long)_maxAttributeForGapConstraintRespectingBaselineRelative:(_Bool)arg1;
- (long long)_minAttributeForGapConstraintRespectingBaselineRelative:(_Bool)arg1;
- (void)_adjustConstraintConstantsIfPossible;
- (void)_removeIndividualGuidesAndConstraintsAsNecessary;
- (void)_cleanUpGuideAtGapFollowingItem:(id)arg1;
- (void)_removeGuideAndConstraintGroupsAsNecessary;
- (id)_dimensionRefItemFromConstraint:(id)arg1;
- (id)_orderedPropertySource;
- (id)_orderedConfigurationHistory;
- (_Bool)_canvasConnectionConstraintsNeedUpdatePass;
- (void)_didEvaluateMultilineHeightForView:(id)arg1;
- (void)_notifyCanvasesBaselineParametersDidChange;
- (void)_visibilityParameterChangedForItem:(id)arg1;
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1;
- (_Bool)_monitorsSystemLayoutFittingSizeForItem:(id)arg1;
- (void)_intrinsicContentSizeInvalidatedForItem:(id)arg1;
- (id)_identifierForSpanningLayoutGuide;
- (_Bool)_hasStaleConfiguration;
- (void)_updateConfigurationHistory;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;
- (void)removeItem:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_trackChangesAffectingExternalBaselineConstraints:(CDUnknownBlockType)arg1;
- (void)_trackChangesWithValue:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(nonatomic) long long axis;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool layoutFillsCanvas;
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property(readonly) Class superclass;

@end

