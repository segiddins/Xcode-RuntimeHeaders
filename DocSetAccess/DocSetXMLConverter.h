//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSXMLDocument;

@interface DocSetXMLConverter : NSObject
{
    NSXMLDocument *_docSetInfo;
    NSManagedObjectContext *_moc;
    id *_error;
    NSMutableDictionary *_nodesByID;
    NSMutableSet *_nodesWithoutIDs;
}

+ (BOOL)updateDocSetInfo:(id)arg1 error:(id *)arg2;
+ (BOOL)convertXML:(id)arg1 toContext:(id)arg2 withError:(id *)arg3;
- (BOOL)_updateContext;
- (BOOL)_setUpReleaseNotes;
- (void)_resetTableForEntityNamed:(id)arg1;
- (BOOL)_setUpNodes;
- (void)_addSubnodes:(id)arg1 toNode:(id)arg2 withCache:(id)arg3;
- (id)_nodeForXMLNode:(id)arg1 withCache:(id)arg2;
- (void)_setUpNodes:(id)arg1 withCache:(id)arg2;
- (BOOL)_setUpDocSet;
- (void)_assignIDsToNodes;
- (id)_nodeForID:(int)arg1;
- (void)_addNode:(id)arg1 withID:(int)arg2;
- (void)_addNodeWithoutID:(id)arg1;
- (void)dealloc;
- (id)initWithXML:(id)arg1 withContext:(id)arg2 withError:(id *)arg3;

@end

