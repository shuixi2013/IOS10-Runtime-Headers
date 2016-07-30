//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

#import <UIKit/UICollectionViewTableAllRowAttributes-Protocol.h>
#import <UIKit/UICollectionViewTableSectionHeaderFooterAttributes-Protocol.h>

@class UIColor, UIVisualEffect;

@interface UICollectionViewTableLayoutAttributes : UICollectionViewLayoutAttributes <UICollectionViewTableSectionHeaderFooterAttributes, UICollectionViewTableAllRowAttributes>
{
    _Bool _shouldIndentWhileEditing;
    _Bool _showsReorderControl;
    _Bool _layoutMarginsFollowReadableWidth;
    _Bool _drawsSeparatorAtTopOfSection;
    _Bool _drawsSeparatorAtBottomOfSection;
    _Bool _isHeader;
    _Bool _floating;
    int _sectionLocation;
    long long _separatorStyle;
    UIColor *_separatorColor;
    UIVisualEffect *_separatorEffect;
    UIColor *_backgroundColor;
    long long _accessoryType;
    long long _editingStyle;
    double _defaultMarginWidth;
    double _sectionBorderWidth;
    long long _indentationLevel;
    double _maxTitleWidth;
    long long _textAlignment;
    struct UIEdgeInsets _backgroundInset;
    struct UIEdgeInsets _margins;
}

+ (long long)automaticValueOptionsForRepresentedElementCategory:(unsigned long long)arg1;
+ (void)applyValuesFromAttributes:(id)arg1 toAttributes:(id)arg2 valueOptions:(long long)arg3;
@property(nonatomic) _Bool floating; // @synthesize floating=_floating;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) double maxTitleWidth; // @synthesize maxTitleWidth=_maxTitleWidth;
@property(nonatomic) _Bool isHeader; // @synthesize isHeader=_isHeader;
@property(nonatomic) _Bool drawsSeparatorAtBottomOfSection; // @synthesize drawsSeparatorAtBottomOfSection=_drawsSeparatorAtBottomOfSection;
@property(nonatomic) _Bool drawsSeparatorAtTopOfSection; // @synthesize drawsSeparatorAtTopOfSection=_drawsSeparatorAtTopOfSection;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(nonatomic) double sectionBorderWidth; // @synthesize sectionBorderWidth=_sectionBorderWidth;
@property(nonatomic) struct UIEdgeInsets backgroundInset; // @synthesize backgroundInset=_backgroundInset;
@property(nonatomic) double defaultMarginWidth; // @synthesize defaultMarginWidth=_defaultMarginWidth;
@property(nonatomic) _Bool layoutMarginsFollowReadableWidth; // @synthesize layoutMarginsFollowReadableWidth=_layoutMarginsFollowReadableWidth;
@property(nonatomic) _Bool showsReorderControl; // @synthesize showsReorderControl=_showsReorderControl;
@property(nonatomic) _Bool shouldIndentWhileEditing; // @synthesize shouldIndentWhileEditing=_shouldIndentWhileEditing;
@property(nonatomic) int sectionLocation; // @synthesize sectionLocation=_sectionLocation;
@property(nonatomic) long long editingStyle; // @synthesize editingStyle=_editingStyle;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIVisualEffect *separatorEffect; // @synthesize separatorEffect=_separatorEffect;
@property(copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

