//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPSmartField.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TSWPDateTimeSmartField : TSWPSmartField
{
    NSString *_format;
    NSString *_localeID;
    long long _dateStyle;
    long long _timeStyle;
    int _updatePlan;
    _Bool _needsUpdate;
    NSDate *_date;
}

+ (id)dateStringFromTime:(double)arg1 withFormat:(id)arg2 localeIdentifier:(id)arg3 dateStyle:(long long)arg4 timeStyle:(long long)arg5;
+ (id)newDateFormatWithLocaleIdentifier:(id)arg1 dateStyle:(long long)arg2 timeStyle:(long long)arg3;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(nonatomic) int updatePlan; // @synthesize updatePlan=_updatePlan;
@property(nonatomic) long long timeStyle; // @synthesize timeStyle=_timeStyle;
@property(nonatomic) long long dateStyle; // @synthesize dateStyle=_dateStyle;
@property(copy, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeID;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
- (int)smartFieldKind;
- (void)setFormat:(id)arg1 localeIdentifier:(id)arg2 dateStyle:(long long)arg3 timeStyle:(long long)arg4;
- (void)resetLocale;
- (id)generateInlineText;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1 dateStyle:(long long)arg2 timeStyle:(long long)arg3 autoUpdate:(_Bool)arg4 context:(id)arg5;
- (id)initWithLocaleIdentifier:(id)arg1 dateStyle:(long long)arg2 timeStyle:(long long)arg3 format:(id)arg4 autoUpdate:(_Bool)arg5 context:(id)arg6;
- (id)initWithLocaleIdentifier:(id)arg1 dateStyle:(long long)arg2 timeStyle:(long long)arg3 format:(id)arg4 date:(id)arg5 updatePlan:(int)arg6 context:(id)arg7;

@end

