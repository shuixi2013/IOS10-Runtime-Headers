//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol RKDisplayStringsProvider;

@interface RKResponseCollection : NSObject
{
    NSMutableDictionary *_responseCatalog;
    NSMutableDictionary *_personalizersByLanguageID;
    NSURL *_dynamicDataURL;
    id <RKDisplayStringsProvider> _displayStringsProvider;
}

+ (id)speechActsForCategory:(unsigned long long)arg1 platform:(id)arg2;
+ (id)responsesForFullScreenMoments:(id)arg1 withLanguage:(id)arg2;
+ (id)responsesForFixedPhrase:(id)arg1 withLanguage:(id)arg2;
@property(readonly) id <RKDisplayStringsProvider> displayStringsProvider; // @synthesize displayStringsProvider=_displayStringsProvider;
@property(readonly) NSURL *dynamicDataURL; // @synthesize dynamicDataURL=_dynamicDataURL;
@property(retain) NSMutableDictionary *personalizersByLanguageID; // @synthesize personalizersByLanguageID=_personalizersByLanguageID;
@property(retain) NSMutableDictionary *responseCatalog; // @synthesize responseCatalog=_responseCatalog;
- (void).cxx_destruct;
- (id)personalizerForLanguageID:(id)arg1;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 withLanguage:(id)arg3 context:(id)arg4 effectiveDate:(id)arg5;
- (id)responsesForCategory:(unsigned long long)arg1 gender:(unsigned long long)arg2 maximumResponses:(unsigned long long)arg3 withLanguage:(id)arg4 context:(id)arg5 options:(unsigned long long)arg6;
- (id)standardResponsesByCategoryForLanguageIdentifier:(id)arg1 andUsage:(id)arg2;
- (void)resetRegisteredResponses;
- (void)flushDynamicData;
- (id)initWithDynamicDataURL:(id)arg1 displayStringsProvider:(id)arg2;

@end
