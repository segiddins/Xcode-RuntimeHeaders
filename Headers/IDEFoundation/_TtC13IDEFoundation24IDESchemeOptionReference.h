//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTXMLUnarchiving-Protocol.h>

@class MISSING_TYPE, NSString;

@interface _TtC13IDEFoundation24IDESchemeOptionReference : NSObject <DVTXMLUnarchiving>
{
    MISSING_TYPE *identifier;
    MISSING_TYPE *resolvedReference;
}

- (void).cxx_destruct;
- (id)resolvedReferenceForWorkspace:(id)arg1;
@property(nonatomic, copy) NSString *resolvedReference;
@property(nonatomic, copy) NSString *identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setIdentifierFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

