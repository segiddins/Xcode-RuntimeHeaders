//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerGLSupport/DYPResourceManager-Protocol.h>

@class DYGLCaptureSessionInfo, NSString;

__attribute__((visibility("hidden")))
@interface GPUGLResourceManager : NSObject <DYPResourceManager>
{
    struct unique_ptr<GPUTools::GL::ResourceManager<GPUGLSMObjectTypes>, std::__1::default_delete<GPUTools::GL::ResourceManager<GPUGLSMObjectTypes>>> _spResMgr;
    DYGLCaptureSessionInfo *_captureSessionInfo;
}

+ (id)updatedResourceWithType:(unsigned int)arg1 objectID:(unsigned long long)arg2 containerID:(unsigned long long)arg3 changes:(id)arg4;
+ (unsigned int)realFunctionIndexForIndex:(unsigned int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)loadClientDataBufferFromArchive:(id)arg1 offset:(long long)arg2 functionIndex:(unsigned int)arg3;
- (id)loadSolidImageWithContainerID:(unsigned long long)arg1 functionIndex:(unsigned int)arg2 subCommandIndex:(int)arg3;
- (id)loadSolidImageWithContainerID:(unsigned long long)arg1 functionIndex:(unsigned int)arg2;
- (id)loadOutlineImageWithContainerID:(unsigned long long)arg1 functionIndex:(unsigned int)arg2 subCommandIndex:(int)arg3;
- (id)loadOutlineImageWithContainerID:(unsigned long long)arg1 functionIndex:(unsigned int)arg2;
- (id)performUpdateWithResource:(id)arg1;
- (id)loadWireframeImageWithContainerID:(unsigned long long)arg1 functionIndex:(unsigned int)arg2 subCommandIndex:(int)arg3;
- (id)loadWireframeImageWithContainerID:(unsigned long long)arg1 functionIndex:(unsigned int)arg2;
- (id)loadThumbnailBatchWithContainerID:(unsigned long long)arg1 resourceInfo:(id)arg2;
- (id)loadThumbnailImageWithResourceInfo:(id)arg1;
- (id)loadResourceWithType:(unsigned int)arg1 containerID:(unsigned long long)arg2 stateMirrorObject:(const void *)arg3 functionIndex:(unsigned int)arg4;
- (id)loadResourceItem:(id)arg1 withStateMirror:(id)arg2;
- (id)loadResourceItem:(id)arg1 withResolution:(CDStruct_14f26992)arg2;
- (id)loadResourceItem:(id)arg1 withResolution:(CDStruct_14f26992)arg2 subCommandIndex:(int)arg3;
- (void)invalidateDeviceCache;
- (id)initWithCaptureStore:(id)arg1 resourceStreamer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

