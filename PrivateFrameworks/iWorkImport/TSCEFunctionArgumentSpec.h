//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSArray, TSCEFunctionSpec;

__attribute__((visibility("hidden")))
@interface TSCEFunctionArgumentSpec : NSObject <NSCopying>
{
    int mArgumentType;
    _Bool mForceArrayMode;
    double mMinValue;
    double mMaxValue;
    _Bool mDisallowDuration;
    _Bool mDisallowCurrency;
    short mIndex;
    int mAccessorMode;
    int mArgumentContext;
    unsigned char mRangeContext;
    NSArray *mDisallowedTypes;
    vector_10088e46 *mModeValues;
    short mDefaultModeIndex;
    TSCEFunctionSpec *mFunctionSpec;
    _Bool mMinInclusive;
    _Bool mMaxInclusive;
    _Bool mIsInteger;
    _Bool mReferenceForGeometryOnly;
}

+ (id)argumentSpecWithIndex:(short)arg1 type:(int)arg2 accessorMode:(int)arg3 disallowedTypes:(id)arg4 argumentContext:(int)arg5 rangeContext:(unsigned char)arg6 minValue:(double)arg7 minInclusive:(_Bool)arg8 maxValue:(double)arg9 maxInclusive:(_Bool)arg10 isInteger:(_Bool)arg11 disallowDuration:(_Bool)arg12 disallowCurrency:(_Bool)arg13 modeValues:(vector_10088e46 *)arg14 defaultModeIndex:(short)arg15 referenceForGeometryOnly:(_Bool)arg16 forceArrayMode:(_Bool)arg17;
@property(readonly, nonatomic) _Bool forceArrayMode; // @synthesize forceArrayMode=mForceArrayMode;
@property(nonatomic) TSCEFunctionSpec *functionSpec; // @synthesize functionSpec=mFunctionSpec;
@property(readonly, nonatomic) vector_10088e46 *modeValues; // @synthesize modeValues=mModeValues;
@property(readonly, nonatomic) short defaultModeIndex; // @synthesize defaultModeIndex=mDefaultModeIndex;
@property(readonly, nonatomic) _Bool referenceForGeometryOnly; // @synthesize referenceForGeometryOnly=mReferenceForGeometryOnly;
@property(readonly, nonatomic) _Bool disallowCurrency; // @synthesize disallowCurrency=mDisallowCurrency;
@property(readonly, nonatomic) _Bool disallowDuration; // @synthesize disallowDuration=mDisallowDuration;
@property(readonly, nonatomic) _Bool isInteger; // @synthesize isInteger=mIsInteger;
@property(readonly, nonatomic) _Bool maxInclusive; // @synthesize maxInclusive=mMaxInclusive;
@property(readonly, nonatomic) double maxValue; // @synthesize maxValue=mMaxValue;
@property(readonly, nonatomic) _Bool minInclusive; // @synthesize minInclusive=mMinInclusive;
@property(readonly, nonatomic) double minValue; // @synthesize minValue=mMinValue;
@property(readonly, nonatomic) short index; // @synthesize index=mIndex;
@property(nonatomic) unsigned char rangeContext; // @synthesize rangeContext=mRangeContext;
@property(readonly, nonatomic) int argumentContext; // @synthesize argumentContext=mArgumentContext;
@property(readonly, nonatomic) int accessorMode; // @synthesize accessorMode=mAccessorMode;
- (_Bool)typeIsDisallowed:(int)arg1 value:(struct TSCEValue *)arg2;
@property(readonly, nonatomic) NSArray *disallowedTypes;
- (id)localizedFunctionNameForLocale:(id)arg1;
- (id)localizedModeMenuItemStringForModeIndex:(short)arg1 locale:(id)arg2;
- (id)localizedModeToolTipStringForModeIndex:(short)arg1 locale:(id)arg2;
- (id)localizedModeNameForModeIndex:(short)arg1 locale:(id)arg2;
- (id)nativeSyntaxStringForModeIndex:(short)arg1;
- (id)nativeSyntaxString;
- (long long)indexForModeBool:(_Bool)arg1 locale:(id)arg2;
- (long long)indexForModeNumber:(double)arg1 locale:(id)arg2;
- (long long)indexForModeString:(id)arg1 locale:(id)arg2;
- (long long)indexForModeValue:(struct TSCEValue *)arg1 locale:(id)arg2;
- (struct TSCEValue)valueForModeIndex:(short)arg1;
@property(readonly, nonatomic) short numModes;
@property(readonly, nonatomic) _Bool isMode;
@property(readonly, nonatomic) _Bool isOptional;
- (int)preferredType;
- (id)localizedToolTipStringForLocale:(id)arg1;
- (id)localizedArgumentNameForLocale:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initArgumentSpecWithIndex:(short)arg1 type:(int)arg2 accessorMode:(int)arg3 disallowedTypes:(id)arg4 argumentContext:(int)arg5 rangeContext:(unsigned char)arg6 minValue:(double)arg7 minInclusive:(_Bool)arg8 maxValue:(double)arg9 maxInclusive:(_Bool)arg10 isInteger:(_Bool)arg11 disallowDuration:(_Bool)arg12 disallowCurrency:(_Bool)arg13 modeValues:(vector_10088e46 *)arg14 defaultModeIndex:(short)arg15 referenceForGeometryOnly:(_Bool)arg16 forceArrayMode:(_Bool)arg17;

@end

