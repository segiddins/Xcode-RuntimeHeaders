//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCOrganizerLabelNodeAdapter.h>

@interface XCOrganizerFileLabelNodeAdapter : XCOrganizerLabelNodeAdapter
{
}

- (id)dataNode:(id)arg1 toolTipForTableColumn:(id)arg2;
- (id)actionMenuForDataNode:(id)arg1;
- (id)addMenuForDataNode:(id)arg1;
- (void)removeChild:(id)arg1 fromDataNode:(id)arg2;
- (void)instantiateChildrenForDataNode:(id)arg1;
- (void)dataNode:(id)arg1 acceptDroppedItems:(id)arg2 atIndex:(long long)arg3;
- (BOOL)dataNode:(id)arg1 canAcceptDroppedItem:(id)arg2 atChildIndex:(long long)arg3;
- (void)addNewFileNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addNewFileNodes:(id)arg1 atIndex:(unsigned long long)arg2;

@end
