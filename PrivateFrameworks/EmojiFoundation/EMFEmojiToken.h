//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmojiFoundation/NSCopying-Protocol.h>
#import <EmojiFoundation/NSSecureCoding-Protocol.h>

@class EMFEmojiLocaleData, NSString;

@interface EMFEmojiToken : NSObject <NSCopying, NSSecureCoding>
{
    struct __EmojiTokenWrapper *_emojiTokenRef;
    NSString *_localeIdentifier;
}

+ (id)emojiTokenWithLongCharacter:(unsigned int)arg1 localeData:(id)arg2;
+ (id)emojiTokenWithString:(id)arg1 localeData:(id)arg2;
+ (id)emojiTokensForCEMEmojiTokens:(struct __CFArray *)arg1;
+ (id)emojiTokenWithCEMEmojiToken:(struct __EmojiTokenWrapper *)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(readonly, nonatomic) const struct __EmojiTokenWrapper *emojiTokenRef; // @synthesize emojiTokenRef=_emojiTokenRef;
- (void).cxx_destruct;
- (id)nameForType:(int)arg1;
- (id)relatedEmojiTokens:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isCommon;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualIgnoringModifiers:(id)arg1;
- (id)copyWithoutModifiers;
- (id)copyWithPresentationStyle:(int)arg1;
- (_Bool)supportsPresentationStyle:(int)arg1;
@property(readonly, nonatomic) int presentationStyle;
- (id)copyWithSkinToneVariant:(int)arg1;
@property(readonly, nonatomic) int skinTone;
@property(readonly, nonatomic) _Bool supportsSkinToneVariants;
@property(readonly, nonatomic) EMFEmojiLocaleData *localeData;
@property(readonly, copy, nonatomic) NSString *string;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCEMEmojiToken:(struct __EmojiTokenWrapper *)arg1;

@end

