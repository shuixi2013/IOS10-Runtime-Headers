//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class WDCharacterProperties, WDDocument, WDParagraphProperties, WDStyle, WDTableCellProperties, WDTableRowProperties;

__attribute__((visibility("hidden")))
@interface WDTableStyleOverride : NSObject <NSCopying>
{
    WDDocument *mDocument;
    WDStyle *mStyle;
    int mPart;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellStyleProperties;
    unsigned int mParagraphPropertiesOverridden:1;
    unsigned int mCharacterPropertiesOverridden:1;
    unsigned int mTableRowPropertiesOverridden:1;
    unsigned int mTableCellStylePropertiesOverridden:1;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setTableCellStylePropertiesOverridden:(_Bool)arg1;
- (_Bool)isTableCellStylePropertiesOverridden;
- (id)mutableTableCellStyleProperties;
- (id)tableCellStyleProperties;
- (void)setTableRowPropertiesOverridden:(_Bool)arg1;
- (_Bool)isTableRowPropertiesOverridden;
- (id)mutableTableRowProperties;
- (id)tableRowProperties;
- (_Bool)isTablePropertiesOverridden;
- (id)tableProperties;
- (void)setCharacterPropertiesOverridden:(_Bool)arg1;
- (_Bool)isCharacterPropertiesOverridden;
- (id)mutableCharacterProperties;
- (id)characterProperties;
- (void)setParagraphPropertiesOverridden:(_Bool)arg1;
- (_Bool)isParagraphPropertiesOverridden;
- (id)mutableParagraphProperties;
- (id)paragraphProperties;
- (void)setPart:(int)arg1;
- (int)part;
- (void)setStyle:(id)arg1;
- (id)style;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end

