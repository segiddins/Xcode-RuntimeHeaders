//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceSubEditor.h>

@class GPUBufferViewerViewController;

__attribute__((visibility("hidden")))
@interface GPUGLVBOEditor : GPUTraceSubEditor
{
    GPUBufferViewerViewController *_bufferViewerViewController;
}

+ (id)assetBundle;
- (void).cxx_destruct;
@property(retain, nonatomic) GPUBufferViewerViewController *bufferViewerViewController; // @synthesize bufferViewerViewController=_bufferViewerViewController;
- (struct TypeOutputFormatTypeAlias)glTypeToStructTypeOutputFormatTypeAlias:(unsigned int)arg1;
- (void)extractUniformBlockDataLayout:(const ProgramUniformBlock_b2b71853 *)arg1 dataStructs:(vector_44d4fed2 *)arg2 bufferOffset:(unsigned long long)arg3;
- (void)extractCandidateLayoutsForUniformBufferWithItem:(id)arg1 dataStructs:(vector_44d4fed2 *)arg2 dataBuffer:(struct Buffer *)arg3 preferredDataStruct:(int *)arg4 bufferType:(id *)arg5;
- (void)extractCandidateLayoutsForElementArrayBufferWithItem:(id)arg1 dataStructs:(vector_44d4fed2 *)arg2 dataBuffer:(struct Buffer *)arg3 preferredDataStruct:(int *)arg4 bufferType:(id *)arg5;
- (void)_beginEditor;
- (void)handleNotification:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)viewWillLayout;
- (void)viewDidLoad;
- (void)loadView;

@end

