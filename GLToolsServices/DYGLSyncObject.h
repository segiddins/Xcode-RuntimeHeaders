//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GLToolsServices/DYGLResourceObject.h>

@interface DYGLSyncObject : DYGLResourceObject
{
    unsigned int _objectType;
    unsigned int _condition;
    unsigned int _flags;
}

@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) unsigned int condition; // @synthesize condition=_condition;
@property(readonly, nonatomic) unsigned int objectType; // @synthesize objectType=_objectType;
- (id)initWithProperties:(id)arg1;
- (id)initWithResourceObject:(id)arg1 functionStream:(id)arg2 dataResolver:(CDUnknownBlockType)arg3;

@end

