//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCOrganizerLabelNodeAdapter.h>

@interface XCOrganizerDeviceLabelNodeAdapter : XCOrganizerLabelNodeAdapter
{
}

- (id)dataNode:(id)arg1 toolTipForTableColumn:(id)arg2;
- (void)instantiateChildrenForDataNode:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)createNodeForRemoteComputer:(id)arg1;
- (void)_stopListeningToRemoteComputer:(id)arg1;
- (void)_startListeningToRemoteComputer:(id)arg1;
- (void)_reloadWithSelectedNode:(id)arg1;
- (void)_delayed_reloadWithSelectedNode:(id)arg1;
- (id)deviceNodeForRemoteComputer:(id)arg1;
- (unsigned long long)_indexOfItemForRemoteComputer:(id)arg1;
- (void)dealloc;
- (id)init;

@end

