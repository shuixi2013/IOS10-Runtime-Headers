//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADDash.h>

__attribute__((visibility("hidden")))
@interface OADPresetDash : OADDash
{
    BOOL mType;
    unsigned int mIsTypeOverridden:1;
}

+ (id)defaultProperties;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)equivalentCustomDash;
- (_Bool)isTypeOverridden;
- (void)setType:(BOOL)arg1;
- (BOOL)type;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

