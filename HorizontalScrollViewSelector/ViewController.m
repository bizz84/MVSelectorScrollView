//
//  ViewController.m
//  HorizontalScrollViewSelector
//
//  Created by Andrea Bizzotto on 12/04/2013.
//  Copyright (c) 2013 musevisions. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
 
    [self setupContent];
}

- (void)setupContent {
    
    self.scrollView1.values = @[ @"Monday", @"Tuesday", @"Wednesday", @"Thursday", @"Friday", @"Saturday", @"Sunday" ];
    self.scrollView1.delegate = self;
    self.scrollView1.updateIndexWhileScrolling = YES;
    
    self.scrollView2.values = @[ @"January", @"February", @"March", @"April", @"May", @"June", @"July", @"August", @"September", @"October", @"November", @"December" ];
    self.scrollView2.delegate = self;
    self.scrollView2.updateIndexWhileScrolling = NO;
    
    self.indicator1.text = [self.scrollView1.values objectAtIndex:0];
    self.indicator2.text = [self.scrollView2.values objectAtIndex:0];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)scrollView:(MVSelectorScrollView *)scrollView pageSelected:(int)pageSelected {
    
    NSLog(@"%s scroll view %d, selected page: %d", __func__, scrollView.tag, pageSelected);
    
    if (scrollView == self.scrollView1) {
    
        self.indicator1.text = [scrollView.values objectAtIndex:pageSelected];
    }
    else {
        
        self.indicator2.text = [scrollView.values objectAtIndex:pageSelected];
    }
}


@end
