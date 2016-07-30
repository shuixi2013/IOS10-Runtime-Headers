//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/NSCopying-Protocol.h>

@class UIColor, UIImage;

@interface PKAppearanceSpecifier : NSObject <NSCopying>
{
    _Bool _hasDarkAppearance;
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    UIColor *_tintColor;
    UIColor *_tableViewSeparatorColor;
    UIColor *_tableViewCellHighlightColor;
    UIColor *_tableViewCellAccessoryColor;
    UIColor *_tableViewCellAccessoryHighlightColor;
    UIColor *_textColor;
    UIColor *_altTextColor;
    UIColor *_buttonTextColor;
    UIColor *_buttonBackgroundColor;
    UIColor *_editableTextColor;
    UIColor *_editablePlaceholderTextColor;
    UIColor *_editableInsertionPointColor;
    UIColor *_editableSelectionBarColor;
    UIColor *_editableSelectionHighlightColor;
    UIColor *_footerHyperlinkColor;
    UIColor *_progressBarTintColor;
    UIColor *_progressBarTrackTintColor;
    UIColor *_cameraCaptureMaskColor;
    UIColor *_cameraCaptureMaskOutlineColor;
    UIImage *_navBarPointImage;
    UIImage *_navBarShadowPointImage;
}

@property(copy, nonatomic) UIImage *navBarShadowPointImage; // @synthesize navBarShadowPointImage=_navBarShadowPointImage;
@property(copy, nonatomic) UIImage *navBarPointImage; // @synthesize navBarPointImage=_navBarPointImage;
@property(copy, nonatomic) UIColor *cameraCaptureMaskOutlineColor; // @synthesize cameraCaptureMaskOutlineColor=_cameraCaptureMaskOutlineColor;
@property(copy, nonatomic) UIColor *cameraCaptureMaskColor; // @synthesize cameraCaptureMaskColor=_cameraCaptureMaskColor;
@property(copy, nonatomic) UIColor *progressBarTrackTintColor; // @synthesize progressBarTrackTintColor=_progressBarTrackTintColor;
@property(copy, nonatomic) UIColor *progressBarTintColor; // @synthesize progressBarTintColor=_progressBarTintColor;
@property(copy, nonatomic) UIColor *footerHyperlinkColor; // @synthesize footerHyperlinkColor=_footerHyperlinkColor;
@property(copy, nonatomic) UIColor *editableSelectionHighlightColor; // @synthesize editableSelectionHighlightColor=_editableSelectionHighlightColor;
@property(copy, nonatomic) UIColor *editableSelectionBarColor; // @synthesize editableSelectionBarColor=_editableSelectionBarColor;
@property(copy, nonatomic) UIColor *editableInsertionPointColor; // @synthesize editableInsertionPointColor=_editableInsertionPointColor;
@property(copy, nonatomic) UIColor *editablePlaceholderTextColor; // @synthesize editablePlaceholderTextColor=_editablePlaceholderTextColor;
@property(copy, nonatomic) UIColor *editableTextColor; // @synthesize editableTextColor=_editableTextColor;
@property(copy, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(copy, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(copy, nonatomic) UIColor *altTextColor; // @synthesize altTextColor=_altTextColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) UIColor *tableViewCellAccessoryHighlightColor; // @synthesize tableViewCellAccessoryHighlightColor=_tableViewCellAccessoryHighlightColor;
@property(copy, nonatomic) UIColor *tableViewCellAccessoryColor; // @synthesize tableViewCellAccessoryColor=_tableViewCellAccessoryColor;
@property(copy, nonatomic) UIColor *tableViewCellHighlightColor; // @synthesize tableViewCellHighlightColor=_tableViewCellHighlightColor;
@property(copy, nonatomic) UIColor *tableViewSeparatorColor; // @synthesize tableViewSeparatorColor=_tableViewSeparatorColor;
@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool hasDarkAppearance; // @synthesize hasDarkAppearance=_hasDarkAppearance;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

