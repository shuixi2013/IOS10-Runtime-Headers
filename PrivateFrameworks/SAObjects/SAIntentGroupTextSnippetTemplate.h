//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSArray, NSString;

@interface SAIntentGroupTextSnippetTemplate : SAIntentGroupSnippetTemplate
{
}

+ (id)textSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)textSnippetTemplate;
@property(nonatomic) _Bool showsDisclosureIndicator;
@property(copy, nonatomic) NSArray *labelComponents;
@property(copy, nonatomic) NSString *detailText;
@property(copy, nonatomic) NSString *alignment;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

