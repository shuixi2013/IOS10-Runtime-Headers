//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ResponseKit/RKPolarityDataProvider-Protocol.h>

@class NSMutableDictionary;

@interface RKLinguisticDataProvider : NSObject <RKPolarityDataProvider>
{
    NSMutableDictionary *_polarityMapsByLanguageID;
}

@property(retain) NSMutableDictionary *polarityMapsByLanguageID; // @synthesize polarityMapsByLanguageID=_polarityMapsByLanguageID;
- (void).cxx_destruct;
- (struct __LSMMap *)polarityMapForLanguageID:(id)arg1;
- (id)init;

@end

