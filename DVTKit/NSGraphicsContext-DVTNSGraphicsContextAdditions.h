//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSGraphicsContext.h>

@interface NSGraphicsContext (DVTNSGraphicsContextAdditions)
+ (void)dvt_drawInBitmap:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)dvt_drawInContext:(struct CGContext *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dvt_temporarilyMakeCurrentAndDoOperationPerservingState:(CDUnknownBlockType)arg1;
- (void)dvt_drawBlockByPreservingState:(CDUnknownBlockType)arg1;
@end

