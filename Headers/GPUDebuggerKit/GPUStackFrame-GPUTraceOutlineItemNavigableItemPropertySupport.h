//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUStackFrame.h>

@class DVTDocumentLocation, DVTFileDataType, NSImage, NSString;

@interface GPUStackFrame (GPUTraceOutlineItemNavigableItemPropertySupport)
- (id)contentDelegateUIExtensionIdentifier;
- (id)associatedProcessUUID;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) NSString *navigableItem_name;
@property(readonly) NSImage *navigableItem_image;
- (id)gpudebugger_createImageFromFilePath:(id)arg1 withRed:(float)arg2 green:(float)arg3 blue:(float)arg4 alpha:(float)arg5;
- (id)gpudebugger_uti;
- (id)gpudebugger_sourceURL;
@end
