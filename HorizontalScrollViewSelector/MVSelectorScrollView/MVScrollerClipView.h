/*
 * This file is part of the MVSelectorScrollView package.
 * (c) Andrea Bizzotto <bizz84@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE.md
 * file that was distributed with this source code.
 */

#import <UIKit/UIKit.h>

/**
 * Class to delegate scrolling to a UIScrollView instance
 * @see http://stackoverflow.com/questions/1677085/paging-uiscrollview-in-increments-smaller-than-frame-size
 */
@interface MVScrollerClipView : UIView

/**
 * Referenced scroll view
 */
@property IBOutlet UIScrollView *scrollView;

@end
