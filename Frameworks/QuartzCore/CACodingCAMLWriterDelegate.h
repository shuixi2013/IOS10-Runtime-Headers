//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuartzCore/CAMLWriterDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CACodingCAMLWriterDelegate : NSObject <CAMLWriterDelegate>
{
    NSString *_resource_dir;
    int _serial;
}

- (id)CAMLWriter:(id)arg1 URLForResource:(id)arg2;
- (id)CAMLWriter:(id)arg1 typeForObject:(id)arg2;
- (id)initWithResourceDir:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

