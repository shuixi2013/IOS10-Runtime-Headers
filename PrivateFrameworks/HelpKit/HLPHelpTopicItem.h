//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HelpKit/HLPHelpItem.h>

@class NSArray, NSString;

@interface HLPHelpTopicItem : HLPHelpItem
{
    NSString *_anchor;
    NSString *_hrefID;
    NSString *_glossaryIdentifierString;
    NSArray *_categories;
}

@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(copy, nonatomic) NSString *glossaryIdentifierString; // @synthesize glossaryIdentifierString=_glossaryIdentifierString;
@property(copy, nonatomic) NSString *hrefID; // @synthesize hrefID=_hrefID;
@property(copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
- (void).cxx_destruct;
- (id)debugDescription;
@property(readonly, nonatomic, getter=isCopyright) _Bool copyright; // @dynamic copyright;
@property(readonly, nonatomic, getter=isGlossary) _Bool glossary; // @dynamic glossary;
- (id)initWithDictionary:(id)arg1 helpBookURL:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

