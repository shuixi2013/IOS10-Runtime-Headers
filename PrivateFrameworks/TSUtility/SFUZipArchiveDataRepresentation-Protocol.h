//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSUtility/NSObject-Protocol.h>

@protocol SFUBufferedInputStream, SFUInputStream;

@protocol SFUZipArchiveDataRepresentation <NSObject>
- (id <SFUBufferedInputStream>)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id <SFUInputStream>)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
@end

