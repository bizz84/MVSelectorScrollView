/*
 * This file is part of the MVSelectorScrollView package.
 * (c) Andrea Bizzotto <bizz84@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE.md
 * file that was distributed with this source code.
 */


#import "MVScrollerClipView.h"

@implementation MVScrollerClipView

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}

// Explained on these posts:
// http://stackoverflow.com/questions/1677085/paging-uiscrollview-in-increments-smaller-than-frame-size
// http://stackoverflow.com/questions/1220354/uiscrollview-horizontal-paging-like-mobile-safari-tabs
- (UIView *) hitTest:(CGPoint) point withEvent:(UIEvent *)event {
    if ([self pointInside:point withEvent:event]) {
        return self.scrollView;
    }
    return nil;
}

@end
