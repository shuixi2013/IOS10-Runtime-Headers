//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DGLHandle.h>

__attribute__((visibility("hidden")))
@interface TSCH3DGLTextureHandle : TSCH3DGLHandle
{
    unsigned int mTarget;
    tvec3_c2818ced mFullSize;
    tvec3_c2818ced mLevel0Size;
}

+ (id)handleWithGLHandle:(unsigned int)arg1 target:(unsigned int)arg2;
@property(nonatomic) tvec3_c2818ced level0Size; // @synthesize level0Size=mLevel0Size;
@property(nonatomic) tvec3_c2818ced fullSize; // @synthesize fullSize=mFullSize;
@property(readonly, nonatomic) unsigned int target; // @synthesize target=mTarget;
- (id).cxx_construct;
- (void)destroyResourcesInContext:(id)arg1;
- (id)initWithGLHandle:(unsigned int)arg1 target:(unsigned int)arg2;

@end

