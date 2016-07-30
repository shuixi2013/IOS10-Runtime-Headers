//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface INVocabularyItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_string;
    NSUUID *__siriID;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isValidVocabularyString:(id)arg1;
+ (unsigned long long)validateVocabularyString:(id)arg1;
@property(copy, nonatomic, setter=_setSiriID:) NSUUID *_siriID; // @synthesize _siriID=__siriID;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_dictionaryForSaving;
- (void)_setString:(id)arg1;
- (_Bool)_isSimilarEnoughToNotSync:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)_initWithUncheckedString:(id)arg1;
- (id)_initWithVocabularyItem:(id)arg1;

@end

