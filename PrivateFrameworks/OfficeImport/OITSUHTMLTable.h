//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OITSUHTMLTable : NSObject
{
    NSMutableDictionary *_columnAttributes;
    NSMutableDictionary *_rowClasses;
    NSMutableDictionary *_cellAttributes;
    NSMutableArray *_columnHeaders;
    NSMutableArray *_rows;
    unsigned long long _rowClassStride;
}

+ (id)_attributesStringFromAttributes:(id)arg1;
+ (id)_keyForCell:(unsigned long long)arg1:(unsigned long long)arg2;
+ (id)htmlTable;
@property(nonatomic) unsigned long long rowClassStride; // @synthesize rowClassStride=_rowClassStride;
- (void)deleteColumnWithTitle:(id)arg1;
- (unsigned long long)indexOfColumnWithTitle:(id)arg1;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setCellAttributes:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3;
- (void)setCellMarkup:(id)arg1 atRowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3;
- (void)setClass:(id)arg1 ofColumnIndex:(unsigned long long)arg2;
- (void)setColumnHeaders:(id)arg1;
- (void)setRowClass:(id)arg1 atRowIndex:(unsigned long long)arg2;
- (void)setColumnClasses:(id)arg1;
- (void)addRowWithCellText:(id)arg1;
- (void)addRowWithCellMarkup:(id)arg1;
- (id)markup;
@property(readonly, nonatomic) unsigned long long lastRowIndex;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)init;

@end

