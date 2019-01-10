//
// Created by qin on 19-1-4.
//

/*
 * 1.32位cpu一次处理4字节数据，64位cpu一次处理8字节数据。
 * 2.内存对齐是一种数据存储规则，即按照cpu的处理内存大小分段存储数据，在32位cpu中则是4字节对齐，即字节段长度为4字节。比如，先存一个char
 *   型占一个字节，再存一个int型占4字节，在32位cpu下会用第一个4字节段存char，下一个4字节段存int，这样利于cpu按字节段处理内存。再比如，
 *   先存一个char型占1字节，再存一个short型占2字节，那么char会存在一个4字节段的第一个字节，short会存在后两个字节。
 */