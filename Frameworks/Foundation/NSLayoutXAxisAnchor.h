//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLayoutAnchor.h>

@interface NSLayoutXAxisAnchor : NSLayoutAnchor
{
}

- (_Bool)isCompatibleWithAnchor:(id)arg1;
- (_Bool)validateOtherAttribute:(long long)arg1;
- (_Bool)_validateOtherXAxisAnchorDirectionAbstraction:(long long)arg1;
- (id)offsetBy:(double)arg1;
- (id)offsetByDimension:(id)arg1;
- (id)offsetByDimension:(id)arg1 times:(double)arg2 plus:(double)arg3;
- (id)distanceTo:(id)arg1;
- (id)offsetTo:(id)arg1;
- (id)anchorByOffsettingWithConstant:(double)arg1;
- (id)anchorByOffsettingWithDimension:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)anchorByOffsettingWithDimension:(id)arg1;
- (id)anchorWithOffsetToAnchor:(id)arg1;
- (long long)_directionAbstraction;

@end

