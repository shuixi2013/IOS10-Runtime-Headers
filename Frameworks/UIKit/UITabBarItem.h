//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBarItem.h>

@class NSString, UIColor, UIImage, UITabBarButton, _UITabBarItemAppearanceStorage;

@interface UITabBarItem : UIBarItem
{
    NSString *_title;
    SEL _action;
    id _target;
    UIImage *_templateImage;
    UIImage *_selectedTemplateImage;
    UIImage *_selectedImage;
    UIImage *_unselectedImage;
    struct UIEdgeInsets _imageInsets;
    NSString *_badgeValue;
    UITabBarButton *_view;
    _UITabBarItemAppearanceStorage *_appearanceStorage;
    struct {
        unsigned int enabled:1;
        unsigned int style:3;
        unsigned int isSystemItem:1;
        unsigned int systemItem:7;
        unsigned int customSelectedImage:1;
        unsigned int customUnselectedImage:1;
    } _tabBarItemFlags;
    long long __barMetrics;
    long long __imageStyle;
    UIColor *__tintColor;
}

+ (id)_appearanceBlindViewClasses;
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor; // @synthesize _tintColor=__tintColor;
@property(nonatomic, setter=_setImageStyle:) long long _imageStyle; // @synthesize _imageStyle=__imageStyle;
@property(nonatomic, setter=_setBarMetrics:) long long _barMetrics; // @synthesize _barMetrics=__barMetrics;
@property(copy, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
- (void).cxx_destruct;
- (void)_updateView;
- (void)_updateViewAndPositionItems:(_Bool)arg1;
- (id)_createViewForTabBar:(id)arg1 asProxyView:(_Bool)arg2;
- (void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned long long)arg3;
- (id)_updateImageWithTintColor:(id)arg1 isSelected:(_Bool)arg2 getImageOffset:(struct UIOffset *)arg3;
- (void)_updateButtonForTintColor:(id)arg1 selected:(_Bool)arg2;
- (id)_internalTemplateImage;
- (void)_setInternalTemplateImage:(id)arg1;
- (id)_internalTitle;
- (void)_setInternalTitle:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)unselectedImage;
- (void)setUnselectedImage:(id)arg1;
- (_Bool)animatedBadge;
- (void)setAnimatedBadge:(_Bool)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (long long)systemItem;
- (_Bool)isSystemItem;
- (id)badgeTextAttributesForState:(unsigned long long)arg1;
- (void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
@property(copy, nonatomic) UIColor *badgeColor;
@property(nonatomic) struct UIOffset titlePositionAdjustment;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)_imageForState:(unsigned long long)arg1 metrics:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (id)resolvedTitle;
- (_Bool)hasTitle;
- (id)finishedUnselectedImage;
- (id)finishedSelectedImage;
- (void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2;
@property(retain, nonatomic) UIImage *selectedImage;
- (struct UIEdgeInsets)imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (_Bool)isEnabled;
- (void)setEnabled:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTabBarSystemItem:(long long)arg1 tag:(long long)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3;
- (id)init;
- (id)_internalTemplateImages;
- (void)_updateToMatchCurrentState;
- (void)_updateViewBadge;
- (void)_showSelectedIndicator:(_Bool)arg1 changeSelection:(_Bool)arg2;
@property(nonatomic, getter=_isSelected, setter=_setSelected:) _Bool _selected;

@end

