//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKitLegacy/NSObject-Protocol.h>

@class DOMRange, NSArray, NSString;

@protocol WebMultipleTextMatches <NSObject>
- (NSArray *)rectsForTextMatches;
- (void)unmarkAllTextMatches;
- (unsigned long long)countMatchesForText:(NSString *)arg1 inDOMRange:(DOMRange *)arg2 options:(unsigned long long)arg3 limit:(unsigned long long)arg4 markMatches:(_Bool)arg5;
- (_Bool)markedTextMatchesAreHighlighted;
- (void)setMarkedTextMatchesAreHighlighted:(_Bool)arg1;
@end

