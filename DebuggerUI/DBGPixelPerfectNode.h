//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DebuggerUI/DBGSimpleNode.h>

#import <DebuggerUI/DBGPixelPerfectAdjusting-Protocol.h>

@interface DBGPixelPerfectNode : DBGSimpleNode <DBGPixelPerfectAdjusting>
{
    double _offsetX;
    double _offsetY;
    double _offsetZ;
    struct SCNVector3 _purePosition;
}

@property struct SCNVector3 purePosition; // @synthesize purePosition=_purePosition;
@property double offsetZ; // @synthesize offsetZ=_offsetZ;
@property double offsetY; // @synthesize offsetY=_offsetY;
@property double offsetX; // @synthesize offsetX=_offsetX;
- (void)setPosition:(struct SCNVector3)arg1;
- (void)adjustPixelPerfectForView:(id)arg1;
- (struct CGSize)offsetHalfPixelForSizeIfNecessary;
- (struct CGSize)sizeOfGeometry;
- (double)offsetFromDistance:(double)arg1;

@end

