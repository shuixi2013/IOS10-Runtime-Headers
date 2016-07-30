//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSArray, NSString;

@interface NSURL (NSURLPathUtilities)
+ (id)fileURLWithPathComponents:(id)arg1;
@property(readonly, copy) NSURL *URLByResolvingSymlinksInPath;
@property(readonly, copy) NSURL *URLByStandardizingPath;
@property(readonly, copy) NSURL *URLByDeletingPathExtension;
- (id)URLByAppendingPathExtension:(id)arg1;
@property(readonly, copy) NSURL *URLByDeletingLastPathComponent;
- (id)URLByAppendingPathComponent:(id)arg1;
- (id)URLByAppendingPathComponent:(id)arg1 isDirectory:(_Bool)arg2;
@property(readonly, copy) NSString *pathExtension;
@property(readonly, copy) NSString *lastPathComponent;
@property(readonly, copy) NSArray *pathComponents;
@end

