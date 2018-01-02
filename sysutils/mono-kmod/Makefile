# Created by: bkoenig@cs.tu-berlin.de
# $FreeBSD: head/sysutils/mono-kmod/Makefile 456891 2017-12-21 08:42:55Z linimon $

PORTNAME=	mono-kmod
PORTVERSION=	20070416
CATEGORIES=	sysutils
MASTER_SITES=	http://www.alpha-tierchen.de/pub/FreeBSD/ports/distfiles/

MAINTAINER=	bkoenig@alpha-tierchen.de
COMMENT=	Execute .NET applications from command line

ONLY_FOR_ARCHS=		amd64 arm i386

DEPRECATED=	mastersite disappeared, unfetchable

SUB_FILES=	pkg-message

USES=		kmod uidfix tar:bzip2

PLIST_FILES=	${KMODDIR}/mono.ko

.include <bsd.port.mk>
