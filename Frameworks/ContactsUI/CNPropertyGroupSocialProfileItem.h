//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNSocialProfile;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupSocialProfileItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;
- (_Bool)isEquivalentToItem:(id)arg1;
- (id)editingStringValue;
- (id)valueForDisplayString:(id)arg1;
- (id)displayStringForValue:(id)arg1;
- (id)displayLabel;
- (id)defaultActionURL;
@property(readonly, nonatomic) CNSocialProfile *profile;

@end

