//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface UNSNotificationCategoryRecord : NSObject
{
    _Bool _hasCustomDismissAction;
    _Bool _shouldAllowInCarPlay;
    NSArray *_actions;
    NSString *_identifier;
    NSArray *_intentIdentifiers;
    NSArray *_minimalActions;
}

@property(nonatomic) _Bool shouldAllowInCarPlay; // @synthesize shouldAllowInCarPlay=_shouldAllowInCarPlay;
@property(copy, nonatomic) NSArray *minimalActions; // @synthesize minimalActions=_minimalActions;
@property(copy, nonatomic) NSArray *intentIdentifiers; // @synthesize intentIdentifiers=_intentIdentifiers;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool hasCustomDismissAction; // @synthesize hasCustomDismissAction=_hasCustomDismissAction;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

