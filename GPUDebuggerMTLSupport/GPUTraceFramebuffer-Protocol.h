//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerMTLSupport/NSObject-Protocol.h>

@class NSArray, NSMutableDictionary;
@protocol DYFrameBuffer, DYFrameBufferAttachment, DYResource;

@protocol GPUTraceFramebuffer <NSObject>
@property(retain) id <DYResource> wireframeImage;
@property(retain) id <DYResource> stencilResourceObject;
@property(retain) id <DYResource> depthResourceObject;
@property(readonly) NSMutableDictionary *colorResourceObjects;
@property(readonly) id <DYFrameBuffer> frameBufferObject;
- (NSArray *)attachments;
- (id <DYFrameBufferAttachment>)attachmentForAttachmentID:(unsigned long long)arg1;
- (id)initWithFBO:(id <DYFrameBuffer>)arg1;
@end
