//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/WebScriptObject.h>

#import <WebCore/NSCopying-Protocol.h>

@class DOMStyleSheet;

__attribute__((visibility("hidden")))
@interface DOMObject : WebScriptObject <NSCopying>
{
    struct DOMObjectInternal *_internal;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
@property(readonly) DOMStyleSheet *sheet;

@end

