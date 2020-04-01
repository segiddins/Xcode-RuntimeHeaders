//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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

@property(readonly) BOOL isViewLoaded; // @synthesize isViewLoaded=_isViewLoaded;
@property(readonly, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain) IDEEditor *hostEditor; // @synthesize hostEditor=_hostEditor;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) IDEWorkspaceDocument *workspaceDocument;
- (id)initWithWorkspace:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;

@end

