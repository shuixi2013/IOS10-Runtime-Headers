//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CNVCardOptions : NSObject
{
    _Bool _includeNotes;
    _Bool _includePhotos;
    _Bool _includePrivateFields;
    _Bool _includeUserSettings;
    _Bool _compressPhotos;
    _Bool _prefersUncroppedPhotos;
    _Bool _usePhotoReferencesIfAvailable;
    unsigned long long _maximumEncodingLength;
    unsigned long long _maximumImageEncodingLength;
    NSArray *_treatAsUnknownProperties;
    unsigned long long _outputVersion;
    NSArray *_availableEncodings;
}

+ (id)optionsFromPreferences;
@property(copy) NSArray *availableEncodings; // @synthesize availableEncodings=_availableEncodings;
@property unsigned long long outputVersion; // @synthesize outputVersion=_outputVersion;
@property(copy) NSArray *treatAsUnknownProperties; // @synthesize treatAsUnknownProperties=_treatAsUnknownProperties;
@property unsigned long long maximumImageEncodingLength; // @synthesize maximumImageEncodingLength=_maximumImageEncodingLength;
@property unsigned long long maximumEncodingLength; // @synthesize maximumEncodingLength=_maximumEncodingLength;
@property _Bool usePhotoReferencesIfAvailable; // @synthesize usePhotoReferencesIfAvailable=_usePhotoReferencesIfAvailable;
@property _Bool prefersUncroppedPhotos; // @synthesize prefersUncroppedPhotos=_prefersUncroppedPhotos;
@property _Bool compressPhotos; // @synthesize compressPhotos=_compressPhotos;
@property _Bool includePhotos; // @synthesize includePhotos=_includePhotos;
@property _Bool includeNotes; // @synthesize includeNotes=_includeNotes;
@property _Bool includeUserSettings; // @synthesize includeUserSettings=_includeUserSettings;
@property _Bool includePrivateFields; // @synthesize includePrivateFields=_includePrivateFields;
- (void).cxx_destruct;

@end

