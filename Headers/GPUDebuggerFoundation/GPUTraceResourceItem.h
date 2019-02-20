//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceOutlineItem.h>

#import <GPUDebuggerFoundation/DYPResourceItem-Protocol.h>
#import <GPUDebuggerFoundation/NSPasteboardWriting-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol DYResource;

@interface GPUTraceResourceItem : GPUTraceOutlineItem <DYPResourceItem, NSPasteboardWriting>
{
    BOOL _generatesThumbnail;
    unsigned int _type;
    unsigned long long _objectID;
    const void *_stateMirrorObject;
    unsigned long long _containerID;
    NSMutableDictionary *_properties;
    id <DYResource> _resourceObject;
    id _displayAttributes;
    unsigned long long _sharegroupID;
}

+ (id)sharedByteFormatter;
@property(readonly, nonatomic) unsigned long long sharegroupID; // @synthesize sharegroupID=_sharegroupID;
@property(retain, nonatomic) id displayAttributes; // @synthesize displayAttributes=_displayAttributes;
@property(retain, nonatomic) id <DYResource> resourceObject; // @synthesize resourceObject=_resourceObject;
@property(readonly, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) BOOL generatesThumbnail; // @synthesize generatesThumbnail=_generatesThumbnail;
@property(readonly, nonatomic) unsigned long long containerID; // @synthesize containerID=_containerID;
@property(readonly, nonatomic) const void *stateMirrorObject; // @synthesize stateMirrorObject=_stateMirrorObject;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (void)releaseRealizedResources;
- (id)realizeResource;
- (void)establishChildren;
@property(readonly, nonatomic) unsigned int functionIndex;
- (struct Function *)decodedFunction;
- (id)associatedDisplayableItem;
- (id)associatedTraceItem;
- (id)parentResourceGroup;
- (void)generateFilterStrings;
- (id)UUIDSection;
- (void)primitiveInvalidate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithController:(id)arg1 parent:(id)arg2 objectID:(unsigned long long)arg3 stateMirrorObject:(const void *)arg4 containerID:(unsigned long long)arg5 sharegroupID:(unsigned long long)arg6 identifier:(id)arg7 type:(unsigned int)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(retain, nonatomic) NSString *label;
@property(readonly) Class superclass;

@end
