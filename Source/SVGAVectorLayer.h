//
//  SVGAVectorLayer.h
//  SVGAPlayer
//
//  Created by 崔明辉 on 2017/2/20.
//  Copyright © 2017年 UED Center. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface SVGAVectorLayer : CALayer

- (instancetype)initWithSpec:(NSArray *)spec previous:(SVGAVectorLayer *)previous;

@end
