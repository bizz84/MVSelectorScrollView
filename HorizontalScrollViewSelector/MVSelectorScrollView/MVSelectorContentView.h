/*
 * This file is part of the MVSelectorScrollView package.
 * (c) Andrea Bizzotto <bizz84@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE.md
 * file that was distributed with this source code.
 */


#import <UIKit/UIKit.h>

/**
 * Custom subview to be used to fill the scroll view content
 */
@interface MVSelectorContentView : UIView

/**
 * @param frame frame to be used
 * @param text text to be used with label
 */
- (instancetype)initWithFrame:(CGRect)frame text:(NSString *)text;

/**
 * UILabel subview
 */
@property UILabel *label;

/**
 * Selected state for label.
 */
@property (nonatomic) BOOL selected;

@end
