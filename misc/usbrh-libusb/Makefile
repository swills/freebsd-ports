# Created by: sanpei@FreeBSD.org
# $FreeBSD: head/misc/usbrh-libusb/Makefile 434933 2017-02-27 12:52:17Z amdmi3 $

PORTNAME=	usbrh-libusb
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	http://www.dd.iij4u.or.jp/~briareos/soft/ \
		LOCAL/sanpei
DISTNAME=	usbrh-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Yet another reads temperatures and humidity from a Strawberry Linux USB-RH

LICENSE=	GPLv2

PLIST_FILES=	bin/usbrh

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/usbrh ${STAGEDIR}${PREFIX}/bin/usbrh

.include <bsd.port.mk>
