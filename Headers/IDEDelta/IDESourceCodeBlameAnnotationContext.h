//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEAnnotationContext.h>

@class IDESourceCodeBlameController;

@interface IDESourceCodeBlameAnnotationContext : IDEAnnotationContext
{
    IDESourceCodeBlameController *_blameController;
}

- (void).cxx_destruct;
@property(readonly) IDESourceCodeBlameController *blameController; // @synthesize blameController=_blameController;
- (id)initWithEditor:(id)arg1 document:(id)arg2 fileDataType:(id)arg3 blameController:(id)arg4 workspaceTabController:(id)arg5;

@end

