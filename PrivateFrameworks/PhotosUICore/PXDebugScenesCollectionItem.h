//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface PXDebugScenesCollectionItem : NSObject
{
    NSNumber *_sceneIdentifier;
    NSString *_keyword;
    NSArray *_synonyms;
    NSString *_synonymsString;
}

@property(copy, nonatomic) NSString *synonymsString; // @synthesize synonymsString=_synonymsString;
@property(copy, nonatomic) NSArray *synonyms; // @synthesize synonyms=_synonyms;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSNumber *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
- (void).cxx_destruct;
- (id)_synonymsStringWithSynonyms:(id)arg1;
- (id)initWithSceneIdentifier:(id)arg1 keyword:(id)arg2 synonyms:(id)arg3;

@end

