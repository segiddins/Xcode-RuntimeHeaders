//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEExecutionAction.h>

@class IDEFileReference;

@interface IDEAutomatorWorkflowExecutionAction : IDEExecutionAction
{
    IDEFileReference *_workflowFileReference;
}

+ (id)actionType;
- (void).cxx_destruct;
@property(retain) IDEFileReference *workflowFileReference; // @synthesize workflowFileReference=_workflowFileReference;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)operationForExecutionWithBuildParameters:(id)arg1 error:(id *)arg2;

@end

