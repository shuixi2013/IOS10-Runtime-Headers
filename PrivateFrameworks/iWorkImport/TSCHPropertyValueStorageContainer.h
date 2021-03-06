//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol TSCHStyleActAlike;

__attribute__((visibility("hidden")))
@interface TSCHPropertyValueStorageContainer : NSObject
{
    id <TSCHStyleActAlike> mChartStyle;
    id <TSCHStyleActAlike> mChartNonStyle;
    id <TSCHStyleActAlike> mLegendStyle;
    id <TSCHStyleActAlike> mLegendNonStyle;
    NSMutableArray *mValueAxisStyles;
    NSMutableArray *mValueAxisNonStyles;
    NSMutableArray *mCategoryAxisStyles;
    NSMutableArray *mCategoryAxisNonStyles;
    NSMutableArray *mSeriesThemeStyles;
    NSMutableArray *mSeriesPrivateStyles;
    NSMutableArray *mSeriesNonStyles;
    NSMutableArray *mParagraphStyles;
    id <TSCHStyleActAlike> mReferenceLineThemeStyle;
    NSMutableDictionary *mReferenceLineStyles;
    NSMutableDictionary *mReferenceLineNonStyles;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic, setter=p_setMutableRefLineNonStyles:) NSMutableDictionary *p_mutableRefLineNonStyles; // @synthesize p_mutableRefLineNonStyles=mReferenceLineNonStyles;
@property(retain, nonatomic, setter=p_setMutableRefLineStyles:) NSMutableDictionary *p_mutableRefLineStyles; // @synthesize p_mutableRefLineStyles=mReferenceLineStyles;
@property(retain, nonatomic, setter=p_setReferenceLineThemeStyle:) id <TSCHStyleActAlike> p_referenceLineThemeStyle; // @synthesize p_referenceLineThemeStyle=mReferenceLineThemeStyle;
@property(retain, nonatomic, setter=p_setMutableParagraphStyles:) NSMutableArray *p_mutableParagraphStyles; // @synthesize p_mutableParagraphStyles=mParagraphStyles;
@property(retain, nonatomic, setter=p_setMutableSeriesNonStyles:) NSMutableArray *p_mutableSeriesNonStyles; // @synthesize p_mutableSeriesNonStyles=mSeriesNonStyles;
@property(retain, nonatomic, setter=p_setMutableSeriesPrivateStyles:) NSMutableArray *p_mutableSeriesPrivateStyles; // @synthesize p_mutableSeriesPrivateStyles=mSeriesPrivateStyles;
@property(retain, nonatomic, setter=p_setMutableSeriesThemeStyles:) NSMutableArray *p_mutableSeriesThemeStyles; // @synthesize p_mutableSeriesThemeStyles=mSeriesThemeStyles;
@property(retain, nonatomic, setter=p_setMutableCategoryAxisNonStyles:) NSMutableArray *p_mutableCategoryAxisNonStyles; // @synthesize p_mutableCategoryAxisNonStyles=mCategoryAxisNonStyles;
@property(retain, nonatomic, setter=p_setMutableCategoryAxisStyles:) NSMutableArray *p_mutableCategoryAxisStyles; // @synthesize p_mutableCategoryAxisStyles=mCategoryAxisStyles;
@property(retain, nonatomic, setter=p_setMutableValueAxisNonStyles:) NSMutableArray *p_mutableValueAxisNonStyles; // @synthesize p_mutableValueAxisNonStyles=mValueAxisNonStyles;
@property(retain, nonatomic, setter=p_setMutableValueAxisStyles:) NSMutableArray *p_mutableValueAxisStyles; // @synthesize p_mutableValueAxisStyles=mValueAxisStyles;
@property(retain, nonatomic, setter=p_setLegendNonStyle:) id <TSCHStyleActAlike> p_legendNonStyle; // @synthesize p_legendNonStyle=mLegendNonStyle;
@property(retain, nonatomic, setter=p_setLegendStyle:) id <TSCHStyleActAlike> p_legendStyle; // @synthesize p_legendStyle=mLegendStyle;
@property(retain, nonatomic, setter=p_setChartNonStyle:) id <TSCHStyleActAlike> p_chartNonStyle; // @synthesize p_chartNonStyle=mChartNonStyle;
@property(retain, nonatomic, setter=p_setChartStyle:) id <TSCHStyleActAlike> p_chartStyle; // @synthesize p_chartStyle=mChartStyle;
- (void)saveToArchive:(struct PropertyValueStorageContainerArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct PropertyValueStorageContainerArchive *)arg1 unarchiver:(id)arg2;
@property(copy, nonatomic, setter=p_setReferenceLineNonStyles:) NSDictionary *p_referenceLineNonStyles;
@property(copy, nonatomic, setter=p_setReferenceLineStyles:) NSDictionary *p_referenceLineStyles;
@property(copy, nonatomic, setter=p_setParagraphStyles:) NSArray *p_paragraphStyles;
@property(copy, nonatomic, setter=p_setSeriesNonStyles:) NSArray *p_seriesNonStyles;
@property(copy, nonatomic, setter=p_setSeriesPrivateStyles:) NSArray *p_seriesPrivateStyles;
@property(copy, nonatomic, setter=p_setSeriesThemeStyles:) NSArray *p_seriesThemeStyles;
@property(copy, nonatomic, setter=p_setCategoryAxisNonStyles:) NSArray *p_categoryAxisNonStyles;
@property(copy, nonatomic, setter=p_setCategoryAxisStyles:) NSArray *p_categoryAxisStyles;
@property(copy, nonatomic, setter=p_setValueAxisNonStyles:) NSArray *p_valueAxisNonStyles;
@property(copy, nonatomic, setter=p_setValueAxisStyles:) NSArray *p_valueAxisStyles;
- (void)dealloc;

@end

