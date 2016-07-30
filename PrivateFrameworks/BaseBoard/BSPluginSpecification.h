//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface BSPluginSpecification : NSObject
{
    NSString *_type;
    NSArray *_whitelistedNames;
    NSString *_classOrProtocolName;
}

+ (id)specificationsFromHostBundle:(id)arg1;
@property(readonly, retain, nonatomic) NSString *requiredClassOrProtocolName; // @synthesize requiredClassOrProtocolName=_classOrProtocolName;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (_Bool)matchesPluginBundle:(id)arg1;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)dealloc;
- (id)initWithPlistSpecification:(id)arg1;

@end

