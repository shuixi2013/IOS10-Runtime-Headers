//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQHTextSpan : NSObject
{
}

+ (int)nonWhitespaceCount:(struct __CFArray *)arg1;
+ (int)handleTextBackgroundForStyle:(id)arg1 destStyle:(id)arg2 state:(id)arg3;
+ (int)handleTextListChild:(id)arg1 outputBlanks:(_Bool)arg2 state:(id)arg3;
+ (int)handleTextList:(id)arg1 checkForTrailingBlanks:(_Bool)arg2 state:(id)arg3;
+ (int)handleSpan:(id)arg1 checkForTrailingBlanks:(_Bool)arg2 state:(id)arg3;
+ (int)handleContainerHint:(id)arg1 state:(id)arg2;
+ (int)handleAttachment:(id)arg1 state:(id)arg2;
+ (int)handlePageStart:(id)arg1 state:(id)arg2;
+ (int)handleAutoNumber:(id)arg1 state:(id)arg2;
+ (int)handleTextMarker:(id)arg1 outputBlanks:(_Bool)arg2 state:(id)arg3;

@end

