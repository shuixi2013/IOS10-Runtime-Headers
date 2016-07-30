//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileWrapper.h>

#import <NotesShared/NSSecureCoding-Protocol.h>

@class NSData, NSURL;

@interface ICRemoteFileWrapper : NSFileWrapper <NSSecureCoding>
{
    NSURL *_remoteURL;
    NSData *_cachedData;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
- (void).cxx_destruct;
- (id)symbolicLinkDestinationURL;
- (id)keyForFileWrapper:(id)arg1;
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;
- (void)removeFileWrapper:(id)arg1;
- (id)addFileWrapper:(id)arg1;
- (_Bool)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)matchesContentsOfURL:(id)arg1;
- (id)serializedRepresentation;
- (id)dataWithError:(id *)arg1;
- (id)regularFileContents;
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;
- (id)fileWrappers;
- (id)fileAttributes;
- (id)preferredFilename;
- (id)filename;
- (_Bool)isDirectory;
- (_Bool)isSymbolicLink;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteURL:(id)arg1;

@end

