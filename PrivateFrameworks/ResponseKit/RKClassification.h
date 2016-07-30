//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface RKClassification : NSObject
{
    int _sensitive;
    NSString *_language;
    unsigned long long _sentenceType;
    unsigned long long _gender;
    NSArray *_customResponses;
    NSString *_taggedText;
    NSArray *_sentenceEntities;
}

@property(retain) NSArray *sentenceEntities; // @synthesize sentenceEntities=_sentenceEntities;
@property(retain) NSString *taggedText; // @synthesize taggedText=_taggedText;
@property(retain) NSArray *customResponses; // @synthesize customResponses=_customResponses;
@property unsigned long long gender; // @synthesize gender=_gender;
@property(getter=isSensitive) int sensitive; // @synthesize sensitive=_sensitive;
@property unsigned long long sentenceType; // @synthesize sentenceType=_sentenceType;
@property(retain) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (id)init;

@end

