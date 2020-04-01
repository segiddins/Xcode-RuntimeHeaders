//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>

@class NSString;

@interface IBUIEditorMetrics : NSObject <IBBinaryArchiving>
{
    long long _horizontalSizeClass;
    long long _verticalSizeClass;
    struct CGRect _sceneRect;
    struct CGRect _navigationBarRect;
    struct CGRect _toolbarRect;
    struct CGRect _tabBarRect;
}

@property(readonly, nonatomic) long long verticalSizeClass; // @synthesize verticalSizeClass=_verticalSizeClass;
@property(readonly, nonatomic) long long horizontalSizeClass; // @synthesize horizontalSizeClass=_horizontalSizeClass;
@property(readonly, nonatomic) struct CGRect tabBarRect; // @synthesize tabBarRect=_tabBarRect;
@property(readonly, nonatomic) struct CGRect toolbarRect; // @synthesize toolbarRect=_toolbarRect;
@property(readonly, nonatomic) struct CGRect navigationBarRect; // @synthesize navigationBarRect=_navigationBarRect;
@property(readonly, nonatomic) struct CGRect sceneRect; // @synthesize sceneRect=_sceneRect;
@property(readonly, copy) NSString *description;
- (BOOL)isEqualToEditorMetrics:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithSceneRect:(struct CGRect)arg1 navigationBarRect:(struct CGRect)arg2 toolbarRect:(struct CGRect)arg3 tabBarRect:(struct CGRect)arg4 horizontalSizeClass:(long long)arg5 verticalSizeClass:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

