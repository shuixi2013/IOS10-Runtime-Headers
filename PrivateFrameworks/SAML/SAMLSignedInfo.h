//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SAMLSignedInfo : SAMLBaseElement
{
}

+ (id)createElement:(id *)arg1;
@property(readonly, nonatomic) NSArray *references;
@property(readonly, nonatomic) NSString *signatureMethod;
@property(readonly, nonatomic) NSNumber *signatureMethodLength;
@property(readonly, nonatomic) NSString *canonicalizationMethod;
@property(readonly, nonatomic) NSString *identifier;
- (struct _xmlNode *)xmlNode:(id *)arg1;

@end

