//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebuggerMTLSupport/MTLResource-Protocol.h>

@class MTLTextureDescriptor, NSString;
@protocol MTLBuffer, MTLDevice, MTLTexture;

@protocol MTLBuffer <MTLResource>
- (id <MTLBuffer>)newRemoteBufferViewForDevice:(id <MTLDevice>)arg1;
@property(nonatomic, readonly) id <MTLBuffer> remoteStorageBuffer;
- (void)removeAllDebugMarkers;
- (void)addDebugMarker:(NSString *)arg1 range:(struct _NSRange)arg2;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (void)didModifyRange:(struct _NSRange)arg1;
- (void *)contents;
@property(nonatomic, readonly) long long length;
@end

