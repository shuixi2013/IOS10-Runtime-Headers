//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADDrawableProperties.h>

#import <OfficeImport/OADEffectsParent-Protocol.h>

@class NSArray, NSString, OADTableStyle;

__attribute__((visibility("hidden")))
@interface OADTableProperties : OADDrawableProperties <OADEffectsParent>
{
    OADTableStyle *mStyle;
    _Bool mRightToLeft;
    _Bool mFirstRow;
    _Bool mFirstColumn;
    _Bool mLastRow;
    _Bool mLastColumn;
    _Bool mBandRow;
    _Bool mBandColumn;
    NSArray *mEffects;
}

+ (id)defaultProperties;
@property(readonly, copy) NSString *description;
- (_Bool)hasEffects;
- (void)setEffects:(id)arg1;
- (id)effects;
- (_Bool)hasVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2;
- (_Bool)hasBandsNormalToDir:(int)arg1;
- (void)setBandColumn:(_Bool)arg1;
- (_Bool)bandColumn;
- (void)setBandRow:(_Bool)arg1;
- (_Bool)bandRow;
- (void)setLastColumn:(_Bool)arg1;
- (_Bool)lastColumn;
- (void)setLastRow:(_Bool)arg1;
- (_Bool)lastRow;
- (void)setFirstColumn:(_Bool)arg1;
- (_Bool)firstColumn;
- (void)setFirstRow:(_Bool)arg1;
- (_Bool)firstRow;
- (void)setRightToLeft:(_Bool)arg1;
- (_Bool)rightToLeft;
- (void)setStyle:(id)arg1;
- (id)style;
- (void)dealloc;
- (id)initWithDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

