//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IDESpriteKitParticleEditor/NSCoding-Protocol.h>
#import <IDESpriteKitParticleEditor/NSPasteboardReading-Protocol.h>
#import <IDESpriteKitParticleEditor/NSPasteboardWriting-Protocol.h>

@class NSString, NSValue, SKNode;

@interface SKNodeCopyData : NSObject <NSCoding, NSPasteboardWriting, NSPasteboardReading>
{
    SKNode *_node;
    NSValue *_parentUID;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (id)copyDataForNode:(id)arg1 withParentUID:(id)arg2;
@property(readonly, nonatomic) NSValue *parentUID; // @synthesize parentUID=_parentUID;
@property(readonly, nonatomic) SKNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initForNode:(id)arg1 withParentUID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
