//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEModelFoundation/XDUMLClassifierImp.h>

#import <IDEModelFoundation/XDUMLImplementation-Protocol.h>

@class NSString;
@protocol XDUMLInterface;

@interface XDUMLImplementationImp : XDUMLClassifierImp <XDUMLImplementation>
{
    id <XDUMLInterface> _contract;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setContract:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)remove;
- (id)implementingClassifier;
- (id)contract;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

