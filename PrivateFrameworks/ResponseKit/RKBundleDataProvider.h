//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ResponseKit/RKDisplayStringsProvider-Protocol.h>
#import <ResponseKit/RKPolarityDataProvider-Protocol.h>

@class NSBundle, NSMutableDictionary;

@interface RKBundleDataProvider : NSObject <RKDisplayStringsProvider, RKPolarityDataProvider>
{
    NSBundle *_bundle;
    NSMutableDictionary *_displayStringsByPlatformByLanguage;
    NSMutableDictionary *_polarityMapsByLanguageID;
    NSMutableDictionary *_localizationsByLanguageID;
}

@property(retain) NSMutableDictionary *localizationsByLanguageID; // @synthesize localizationsByLanguageID=_localizationsByLanguageID;
@property(readonly) NSMutableDictionary *polarityMapsByLanguageID; // @synthesize polarityMapsByLanguageID=_polarityMapsByLanguageID;
@property(readonly) NSMutableDictionary *displayStringsByPlatformByLanguage; // @synthesize displayStringsByPlatformByLanguage=_displayStringsByPlatformByLanguage;
@property(readonly) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (struct __LSMMap *)polarityMapForLanguageID:(id)arg1;
- (id)displayStringsForPlatform:(id)arg1 languageID:(id)arg2;
- (id)stringsFromTable:(id)arg1 forLanguageIdentifier:(id)arg2;
- (id)initWithBundle:(id)arg1;
- (id)init;

@end

