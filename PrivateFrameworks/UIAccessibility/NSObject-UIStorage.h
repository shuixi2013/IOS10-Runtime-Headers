//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (UIStorage)
- (id)_accessibilitySiriContentElementsWithSemanticContext;
- (id)_accessibilityElementsWithSemanticContext:(id)arg1;
- (id)_accessibilitySupplementaryHeaderViewAtIndexPath:(id)arg1;
- (id)_accessibilityAncestorFocusParcel;
- (id)_accessibilityExtendedLabelForFocusParcelWithLabel:(id)arg1;
- (unsigned long long)_accessibilityFocusParcelChildrenCount:(unsigned long long)arg1;
- (_Bool)_accessibilityIsFocusParcel;
- (id)_accessibilityTextForSubhierarchyIncludingHeaders:(_Bool)arg1 focusableItems:(_Bool)arg2 exclusions:(id)arg3;
- (id)_accessibilitySubviews;
- (_Bool)_isAccessibilityExplorerElement;
- (id)_accessibilityFrameDelegate;
- (id)_accessibilitySiriContentNativeFocusableElements;
- (id)_accessibilityNativeFocusableElements:(id)arg1;
- (id)_accessibilityExplorerElements;
- (id)_accessibilityNativeFocusElement;
- (id)_accessibilityAggregatedHeaderElements;
- (id)_accessibilityNativeFocusAncestor;
- (_Bool)_accessibilityShouldSpeakExplorerElementsAfterFocus;
- (_Bool)_accessibilityShouldIgnoreSoundForFailedMoveAttempt;
- (_Bool)_accessibilityNativeFocusPreferredElementIsValid;
- (id)_accessibilityNativeFocusPreferredElement;
- (_Bool)_accessibilityCanBecomeNativeFocused;
- (_Bool)_accessibilitySetNativeFocus;
- (_Bool)_accessibilityViewHierarchyHasNativeFocus;
- (_Bool)_accessibilityHasNativeFocus;
- (_Bool)_accessibilitySpeakThisCanBeHighlighted;
- (_Bool)_accessibilitySpeakThisShouldOnlyIncludeVisibleElements;
- (_Bool)_accessibilitySpeakThisShouldScrollTextRects;
- (id)_accessibilityTextRectsForRange:(id)arg1 singleTextRect:(struct CGRect *)arg2;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange)arg1;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (unsigned long long)_accessibilitySpeakThisMaximumNumberOfElements;
- (void)_accessibilitySetIgnoreDelegate:(_Bool)arg1;
- (_Bool)_accessibilityIgnoreDelegate;
- (_Bool)_accessibilityMimicsTextInputResponder;
- (_Bool)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (struct CGRect)_accessibilityScreenRectForSceneReferenceRect:(struct CGRect)arg1;
- (struct CGPoint)_accessibilityScreenPointForSceneReferencePoint:(struct CGPoint)arg1;
- (_Bool)_accessibilityHandleMagicTap;
- (void)_accessibilityRemoveActionBlockForKey:(unsigned int)arg1;
- (void)_accessibilityRemoveAllActionBlocks;
- (void)_accessibilityActionBlock:(CDUnknownBlockType *)arg1 andValue:(id *)arg2 forKey:(unsigned int)arg3;
- (_Bool)_accessibilityHasActionBlockForKey:(unsigned int)arg1;
- (_Bool)_accessibilityInternalHandleStartStopToggle;
- (void)_accessibilitySetActionBlock:(CDUnknownBlockType)arg1 withValue:(id)arg2 forKey:(unsigned int)arg3;
@end

