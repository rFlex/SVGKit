#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#endif

#import "SVGElement.h"
#import "SVGTransformable.h"
#import "SVGFitToViewBox.h"

#import "SVGElement_ForParser.h" // to resolve Xcode circular dependencies; in long term, parsing SHOULD NOT HAPPEN inside any class whose name starts "SVG" (because those are reserved classes for the SVG Spec)

@interface SVGImageElement : SVGElement <SVGTransformable, SVGStylable, ConverterSVGToCALayer, SVGFitToViewBox>

@property (nonatomic, readonly) CGFloat x;
@property (nonatomic, readonly) CGFloat y;
@property (nonatomic, readonly) CGFloat width;
@property (nonatomic, readonly) CGFloat height;

@property (nonatomic, strong, readonly) NSString *href;

#if TARGET_OS_IPHONE
@property (nonatomic, strong) UIImage *injectedImage;
#endif

@end
