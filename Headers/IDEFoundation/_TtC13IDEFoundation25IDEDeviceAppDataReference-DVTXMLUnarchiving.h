//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/_TtC13IDEFoundation25IDEDeviceAppDataReference.h>

#import <IDEFoundation/DVTXMLUnarchiving-Protocol.h>

@class NSString;

@interface _TtC13IDEFoundation25IDEDeviceAppDataReference (DVTXMLUnarchiving) <DVTXMLUnarchiving>
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setAppDataDownloadDateFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setAppDataBundleIdFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setResolvedPathFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

