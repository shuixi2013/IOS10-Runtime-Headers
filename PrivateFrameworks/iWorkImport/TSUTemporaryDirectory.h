//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUTemporaryDirectory : NSObject
{
    NSString *_path;
    _Bool _leak;
}

- (void)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2;
- (void)leakTemporaryDirectory;
- (id)URL;
- (id)path;
- (void)dealloc;
- (id)initWithSignature:(id)arg1 subdirectory:(id)arg2;
- (id)initWithSignature:(id)arg1;
- (id)init;

@end

