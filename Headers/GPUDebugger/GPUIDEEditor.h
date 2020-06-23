//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEEditor, IDEWorkspace, IDEWorkspaceDocument;

__attribute__((visibility("hidden")))
@interface GPUIDEEditor : NSObject
{
    BOOL _isViewLoaded;
    IDEEditor *_hostEditor;
    IDEWorkspace *_workspace;
}

- (void).cxx_destruct;
@property(readonly) BOOL isViewLoaded; // @synthesize isViewLoaded=_isViewLoaded;
@property(readonly, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain) IDEEditor *hostEditor; // @synthesize hostEditor=_hostEditor;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) IDEWorkspaceDocument *workspaceDocument;
- (id)initWithWorkspace:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;

@end

