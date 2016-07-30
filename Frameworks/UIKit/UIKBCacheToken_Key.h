//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKBCacheToken.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBCacheToken_Key : UIKBCacheToken
{
    CDUnion_2c5a7b77 _style;
    NSString *_cacheDisplayString;
    NSString *_cacheSecondaryDisplayString;
    NSString *_annotationString;
    int _displayTypeHint;
    int _displayRowHint;
    struct CGSize _size;
    int _state;
    int _clipCorners;
    _Bool _usesInsets;
    struct UIEdgeInsets _displayInsets;
}

+ (id)tokenForKey:(id)arg1 style:(CDStruct_961fb75c)arg2 displayInsets:(struct UIEdgeInsets)arg3;
+ (id)tokenForKey:(id)arg1 style:(CDStruct_961fb75c)arg2;
- (id)stringForRenderFlags:(long long)arg1 lightKeyboard:(_Bool)arg2;
- (id)string;
- (id)_stringWithAdditionalValues:(CDUnknownBlockType)arg1;
- (void)annotateWithInt:(int)arg1;
- (void)annotateWithBool:(_Bool)arg1;
- (void)resetAnnotations;
- (void)annotateWithString:(id)arg1;
- (_Bool)hasKey;
- (void)setStyling:(CDStruct_961fb75c)arg1;
- (CDStruct_961fb75c)styling;
- (void)setDisplayHint:(int)arg1;
- (int)displayHint;
- (void)setRowHint:(int)arg1;
- (int)rowHint;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)dealloc;
- (id)_initWithKey:(id)arg1 style:(CDStruct_961fb75c)arg2 displayInsets:(struct UIEdgeInsets)arg3;

@end

