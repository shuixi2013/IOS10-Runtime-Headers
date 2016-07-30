//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/EDFill.h>

@class EDColorReference;

__attribute__((visibility("hidden")))
@interface EDPatternFill : EDFill
{
    int mType;
    EDColorReference *mBackColorReference;
    EDColorReference *mForeColorReference;
}

+ (id)patternFillWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4;
+ (id)patternFillWithType:(int)arg1 foreColor:(id)arg2 resources:(id)arg3;
+ (id)patternFillWithType:(int)arg1 resources:(id)arg2;
+ (id)patternFillWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4;
- (id)description;
- (id)backColor;
- (id)foreColor;
- (int)type;
- (_Bool)isEmpty;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToPatternFill:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4;
- (id)initWithResources:(id)arg1;
- (id)backColorReference;
- (id)foreColorReference;
- (id)initWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4;
- (void)setForeColorReference:(id)arg1;
- (void)setBackColorReference:(id)arg1;
- (void)setBackColor:(id)arg1;
- (void)setForeColor:(id)arg1;
- (void)setType:(int)arg1;

@end

