//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SASPronunciationData;

@interface SASPronunciationRecognized : SABaseClientBoundCommand
{
}

+ (id)pronunciationRecognizedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)pronunciationRecognized;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SASPronunciationData *pronunciationData;
@property(copy, nonatomic) NSString *interactionId;
@property(copy, nonatomic) NSNumber *errorCode;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
