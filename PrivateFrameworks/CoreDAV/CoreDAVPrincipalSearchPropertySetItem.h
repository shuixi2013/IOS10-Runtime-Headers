//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem
{
    NSMutableSet *_principalSearchProperties;
}

+ (id)copyParseRules;
@property(retain, nonatomic) NSMutableSet *principalSearchProperties; // @synthesize principalSearchProperties=_principalSearchProperties;
- (void)addPrincipalSearchProperty:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

