# Created by: Bill Fumerola <billf@mu.org>
# $FreeBSD: head/net/tshark/Makefile 495662 2019-03-13 20:47:18Z marcus $

PORTNAME=	tshark
PORTREVISION=	1
CATEGORIES=	net ipv6

CONFLICTS_INSTALL?=	tshark-lite-[0-9]* wireshark-lite-[0-9]* wireshark-[0-9]*

MASTERDIR=	${.CURDIR}/../wireshark

OPTIONS_EXCLUDE=	GUI

.include "${MASTERDIR}/Makefile"
