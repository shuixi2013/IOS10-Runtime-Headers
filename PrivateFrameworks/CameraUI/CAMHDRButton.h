//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMExpandableMenuButton.h>

@class NSArray, UIImageView;

@interface CAMHDRButton : CAMExpandableMenuButton
{
    _Bool _allowsAutomaticHDR;
    _Bool _allowsHDROn;
    UIImageView *__glyphView;
    NSArray *__allowedModes;
}

@property(copy, nonatomic, setter=_setAllowedModes:) NSArray *_allowedModes; // @synthesize _allowedModes=__allowedModes;
@property(readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property(nonatomic) _Bool allowsHDROn; // @synthesize allowsHDROn=_allowsHDROn;
@property(nonatomic) _Bool allowsAutomaticHDR; // @synthesize allowsAutomaticHDR=_allowsAutomaticHDR;
- (void).cxx_destruct;
- (void)reloadData;
- (_Bool)shouldAllowExpansion;
- (double)padHeaderViewContentInsetLeft;
- (void)prepareHeaderViewForExpanding:(_Bool)arg1;
- (void)_updateCurrentGlyphImage;
- (id)_currentGlyphImage;
- (id)headerView;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (unsigned long long)indexForMode:(long long)arg1;
- (long long)modeForIndex:(long long)arg1;
- (void)_updateFromAllowedModesChangeWithCurrentMode:(long long)arg1;
- (void)_updateAllowedModes;
@property(nonatomic) long long HDRMode;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMHDRButtonInitialization;

@end

