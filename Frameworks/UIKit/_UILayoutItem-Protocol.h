//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSLayoutItem-Protocol.h>

@class NSISVariable, NSMutableSet, NSObservation;

@protocol _UILayoutItem <NSLayoutItem>
- (NSISVariable *)_boundsHeightVariable;
- (NSISVariable *)_boundsWidthVariable;
- (NSISVariable *)_minYVariable;
- (NSISVariable *)_minXVariable;
- (void)_uili_removeLayoutVariableObservations;
- (void)_uili_stashLayoutVariableObservation:(NSObservation *)arg1;
- (NSMutableSet *)_uili_existingLayoutVariables;
- (NSISVariable *)nsli_heightVariable;
- (NSISVariable *)nsli_boundsHeightVariable;
- (NSISVariable *)nsli_widthVariable;
- (NSISVariable *)nsli_boundsWidthVariable;
- (NSISVariable *)nsli_minYVariable;
- (NSISVariable *)nsli_minXVariable;
- (void *)_referenceView;

@optional
- (NSISVariable *)_contentHeightVariable;
- (NSISVariable *)_contentWidthVariable;
- (NSISVariable *)nsli_contentHeightVariable;
- (NSISVariable *)nsli_contentWidthVariable;
@end

