//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface VSACasePreservingString : NSString
{
    NSString *_underlyingString;
}

- (void).cxx_destruct;
- (id)localizedUppercaseString;
- (id)uppercaseString;
- (id)uppercaseStringWithLocale:(id)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)initWithString:(id)arg1;

@end

