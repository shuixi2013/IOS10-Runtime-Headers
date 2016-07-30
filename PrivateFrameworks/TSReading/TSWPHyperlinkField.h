//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSWPSmartField.h>

@class NSString, NSURL;

@interface TSWPHyperlinkField : TSWPSmartField
{
    NSURL *_url;
}

+ (id)newURLFromURLReference:(id)arg1;
+ (id)urlReferenceFromURL:(id)arg1;
+ (id)defaultMailURL;
+ (id)defaultFileURL;
+ (id)urlWithEmailAddress:(id)arg1 subject:(id)arg2;
+ (id)defaultWebURL;
+ (id)defaultURLFromDefaultsKey:(id)arg1 defaultValue:(id)arg2;
+ (_Bool)schemeIsValidForURLReference:(id)arg1;
+ (_Bool)schemeIsValidForURL:(id)arg1;
+ (int)schemeFromURL:(id)arg1;
+ (id)defaultFieldStyleIdentifier;
- (id)fullPath;
- (id)filePath;
- (_Bool)hasDisplayText;
- (_Bool)isFileURL;
- (id)urlPrefix;
- (int)scheme;
- (void)setURLReference:(id)arg1;
- (id)urlReference;
@property(retain, nonatomic, setter=setURL:) NSURL *url;
- (_Bool)allowsEditing;
- (int)elementKind;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 url:(id)arg2;
- (void)dealloc;
@property(readonly, nonatomic) NSString *displayText;

@end

