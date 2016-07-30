//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNSmartPropertyFetcher.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher
{
    _Bool _ignoresNickname;
    _Bool _ignoresOrganization;
    NSSet *_mandatoryNameProperties;
    NSDictionary *_fallBackNamePropertyByNameKey;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *fallBackNamePropertyByNameKey; // @synthesize fallBackNamePropertyByNameKey=_fallBackNamePropertyByNameKey;
@property(copy, nonatomic) NSSet *mandatoryNameProperties; // @synthesize mandatoryNameProperties=_mandatoryNameProperties;
@property(nonatomic) _Bool ignoresOrganization; // @synthesize ignoresOrganization=_ignoresOrganization;
@property(nonatomic) _Bool ignoresNickname; // @synthesize ignoresNickname=_ignoresNickname;
- (id)_cn_requiredKeys;
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;
- (void)setupNameKeys;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

