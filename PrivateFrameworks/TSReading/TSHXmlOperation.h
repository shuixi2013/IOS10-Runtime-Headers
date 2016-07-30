//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSHRequestDataOperation.h>

#import <TSReading/NSXMLParserDelegate-Protocol.h>

@class NSString, NSXMLParser;

@interface TSHXmlOperation : TSHRequestDataOperation <NSXMLParserDelegate>
{
    NSXMLParser *mParser;
}

- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (id)parser:(id)arg1 resolveExternalEntityName:(id)arg2 systemID:(id)arg3;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundComment:(id)arg2;
- (void)parser:(id)arg1 foundProcessingInstructionWithTarget:(id)arg2 data:(id)arg3;
- (void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndMappingPrefix:(id)arg2;
- (void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundExternalEntityDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4;
- (void)parser:(id)arg1 foundInternalEntityDeclarationWithName:(id)arg2 value:(id)arg3;
- (void)parser:(id)arg1 foundElementDeclarationWithName:(id)arg2 model:(id)arg3;
- (void)parser:(id)arg1 foundAttributeDeclarationWithName:(id)arg2 forElement:(id)arg3 type:(id)arg4 defaultValue:(id)arg5;
- (void)parser:(id)arg1 foundUnparsedEntityDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4 notationName:(id)arg5;
- (void)parser:(id)arg1 foundNotationDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;
- (id)prefix:(id)arg1;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 delegate:(id)arg3;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

