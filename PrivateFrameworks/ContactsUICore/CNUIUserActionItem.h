//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactProperty, NSString;

@interface CNUIUserActionItem : NSObject
{
    NSString *_type;
    NSString *_bundleIdentifier;
    CNContactProperty *_contactProperty;
    long long _group;
    unsigned long long _options;
    NSString *_teamIdentifier;
}

+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 userActivity:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)ttyRelayItemWithLabel:(id)arg1 targetHandle:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)ttyItemWithLabel:(id)arg1 targetHandle:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)_voiceItemWithLabel:(id)arg1 targetHandle:(id)arg2 propertyKey:(id)arg3 url:(id)arg4 userActivity:(id)arg5 bundleIdentifier:(id)arg6 group:(long long)arg7 options:(unsigned long long)arg8;
+ (id)voiceItemWithLabel:(id)arg1 targetHandle:(id)arg2 propertyKey:(id)arg3 userActivity:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)voiceItemWithLabel:(id)arg1 targetHandle:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)voiceItemWithLabel:(id)arg1 targetHandle:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)_videoItemWithLabel:(id)arg1 targetHandle:(id)arg2 url:(id)arg3 userActivity:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)videoItemWithLabel:(id)arg1 targetHandle:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)videoItemWithLabel:(id)arg1 targetHandle:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)_textItemWithLabel:(id)arg1 targetHandle:(id)arg2 url:(id)arg3 userActivity:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)textItemWithLabel:(id)arg1 targetHandle:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)textItemWithLabel:(id)arg1 targetHandle:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)_emailItemWithLabel:(id)arg1 targetHandle:(id)arg2 url:(id)arg3 userActivity:(id)arg4 bundleIdentifier:(id)arg5;
+ (id)emailItemWithLabel:(id)arg1 targetHandle:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)emailItemWithLabel:(id)arg1 targetHandle:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)emailItemWithLabel:(id)arg1 targetHandle:(id)arg2 url:(id)arg3;
+ (id)actionItemForContactProperty:(id)arg1 actionType:(id)arg2 bundleIdentifier:(id)arg3;
@property(copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) long long group; // @synthesize group=_group;
@property(readonly, nonatomic) CNContactProperty *contactProperty; // @synthesize contactProperty=_contactProperty;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 group:(long long)arg4 options:(unsigned long long)arg5;
- (id)initWithItem:(id)arg1 contactProperty:(id)arg2;
@property(readonly, nonatomic) NSString *targetHandle;
@property(readonly, nonatomic) NSString *label;
- (_Bool)isHandledByFirstPartyApp;
- (_Bool)shouldUseApplicationNameForLabel;
- (id)performActionWithContext:(id)arg1;

@end

