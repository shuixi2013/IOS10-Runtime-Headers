//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIBarAppearanceStorage.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage
{
    _Bool _hidesShadow;
    UIImage *_backgroundImage;
    UIImage *_miniBackgroundImage;
    UIImage *_topBackgroundImage;
    UIImage *_miniTopBackgroundImage;
    UIImage *_shadowImage;
    UIImage *_topShadowImage;
}

+ (long long)typicalBarPosition;
@property(nonatomic) _Bool hidesShadow; // @synthesize hidesShadow=_hidesShadow;
@property(retain, nonatomic) UIImage *topShadowImage; // @synthesize topShadowImage=_topShadowImage;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(retain, nonatomic) UIImage *miniTopBackgroundImage; // @synthesize miniTopBackgroundImage=_miniTopBackgroundImage;
@property(retain, nonatomic) UIImage *topBackgroundImage; // @synthesize topBackgroundImage=_topBackgroundImage;
@property(retain, nonatomic) UIImage *miniBackgroundImage; // @synthesize miniBackgroundImage=_miniBackgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void).cxx_destruct;

@end

