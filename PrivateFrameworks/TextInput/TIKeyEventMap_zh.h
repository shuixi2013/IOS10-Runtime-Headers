//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInput/TIKeyEventMap.h>

@interface TIKeyEventMap_zh : TIKeyEventMap
{
}

+ (id)punctuationMap_zh_Hant;
+ (id)punctuationMap_zh_Hans;
+ (_Bool)supportsSecureCoding;
+ (id)sharedInstance;
- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;
- (_Bool)isURLOrEmailKeyboardInKeyboardState:(id)arg1;
- (id)punctuationMap;

@end

