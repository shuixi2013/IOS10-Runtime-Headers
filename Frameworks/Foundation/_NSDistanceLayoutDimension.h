//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLayoutDimension.h>

#import <Foundation/NSCompositeLayoutAnchor-Protocol.h>

@class NSArray, NSLayoutAnchor;

@interface _NSDistanceLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor>
{
    NSLayoutAnchor *_minuend;
    NSLayoutAnchor *_subtrahend;
}

+ (id)distanceFromAnchor:(id)arg1 toAnchor:(id)arg2;
@property(readonly) NSArray *_childAnchors;
- (id)equationDescription;
- (double)_valueInEngine:(id)arg1;
- (id)_expressionInContext:(CDStruct_6db0658e)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithAnchor:(id)arg1;
- (id)initWithMinuend:(id)arg1 subtrahend:(id)arg2;

@end

