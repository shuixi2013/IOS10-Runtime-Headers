//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface XMLWrapperSchema : NSObject
{
    struct _xmlSchema *_schemaPtr;
}

- (_Bool)validateDocument:(struct _xmlDoc *)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithSchemaData:(id)arg1;

@end

