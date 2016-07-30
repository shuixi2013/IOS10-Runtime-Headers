//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class UISlidingBarConfiguration;

@interface UISlidingBarState : NSObject <NSCopying>
{
    _Bool _trailingOverlapsMain;
    _Bool __treatLeadingHiddenAsOverlaps;
    double _leadingWidth;
    double _trailingWidth;
    double _bounce;
    double _leadingDragOffset;
    double _trailingDragOffset;
    UISlidingBarConfiguration *_configuration;
    double __leadingOverlayWidth;
    double __keyboardAdjustment;
    long long __collapsedState;
}

@property(nonatomic, setter=_setCollapsedState:) long long _collapsedState; // @synthesize _collapsedState=__collapsedState;
@property(nonatomic) double _keyboardAdjustment; // @synthesize _keyboardAdjustment=__keyboardAdjustment;
@property(nonatomic, setter=_setTreatLeadingHiddenAsOverlaps:) _Bool _treatLeadingHiddenAsOverlaps; // @synthesize _treatLeadingHiddenAsOverlaps=__treatLeadingHiddenAsOverlaps;
@property(nonatomic, setter=_setLeadingOverlayWidth:) double _leadingOverlayWidth; // @synthesize _leadingOverlayWidth=__leadingOverlayWidth;
@property(retain, nonatomic) UISlidingBarConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) double trailingDragOffset; // @synthesize trailingDragOffset=_trailingDragOffset;
@property(nonatomic) double leadingDragOffset; // @synthesize leadingDragOffset=_leadingDragOffset;
@property(nonatomic) double bounce; // @synthesize bounce=_bounce;
@property(nonatomic) _Bool trailingOverlapsMain; // @synthesize trailingOverlapsMain=_trailingOverlapsMain;
@property(nonatomic) double trailingWidth; // @synthesize trailingWidth=_trailingWidth;
@property(nonatomic) double leadingWidth; // @synthesize leadingWidth=_leadingWidth;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isTrailingVisible;
@property(readonly, nonatomic) _Bool isLeadingVisible;
- (id)_interactiveStateRequest;
- (id)stateRequest;
- (double)_absoluteDistanceFromRequest:(id)arg1;
- (double)_distanceFromRequest:(id)arg1;
- (_Bool)matchesRequest:(id)arg1;
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
- (_Bool)_leadingShouldUseSlidingBars;
- (_Bool)_leadingEntirelyOverlapsMain;
@property(readonly, nonatomic) _Bool leadingOverlapsMain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

