//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVGetTask.h>

@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask
{
    NSFileHandle *_destinationFile;
}

@property(retain, nonatomic) NSFileHandle *destinationFile; // @synthesize destinationFile=_destinationFile;
- (_Bool)shouldLogResponseBody;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)initWithURL:(id)arg1 destinationFile:(id)arg2;
- (void)dealloc;

@end

